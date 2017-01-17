using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using com.dst.Roulette;


#if UNITY_EDITOR
using UnityEditor;
#endif
using System.Linq;

public class BallPhyics : MonoBehaviour {
	public AudioClip diamondSound;
	public AudioClip poly;
	public AudioClip wood;
	public AudioClip receiver;

	//public AudioSource asource;
	public Vector3 center;
	public Vector3 axis  = Vector3.up;
	public float radius = 2.0f;
	public float radiusSpeed = 0.5f;
	public float rotationSpeed = 80.0f; 
	public float deIncreaseRadius = 0.004f;

	private float m_radius;
	private float m_radiusSpeed;
	private float m_rotationSpeed;

	public bool rotate = true;
	private float Counter = 0.000f;

	public float wheelSpeed = -80f;

	public PhysicMaterial beginMat;
	public PhysicMaterial endMat;



	private List<Vector3> lists;
	private List<PathSound> sounds;

	public Transform wheel;

	public bool spin = false;

	// Use this for initialization
	void Start () {
		wheel.GetComponent<Wheel> ().Speed = wheelSpeed;
		lists = new List<Vector3> ();
		sounds = new List<PathSound> ();
		#if UNITY_EDITOR
			EditorApplication.playmodeStateChanged = HandleOnPlayModeChanged;
#endif
	}

	void OnGUI(){
		//float x, y, width, height; 
		Rect pos = new Rect(); pos.x = 0; 
		pos.y =	0; 
		pos.width = Screen.width; 
		pos.height = Screen.height / 10;
		if (GUI.Button (pos, "Click")) {
			//Physics.gravity = new Vector3(0, -0.1f, 0);
			if(!spin){
				center = wheel.transform.position;
				GetComponent<AudioSource>().Play();
				GetComponent<AudioSource>().loop = true;
				spin = true;
				rotate = true;
				m_radius = radius;
				m_radiusSpeed = radiusSpeed;
				m_rotationSpeed = rotationSpeed;
				wheel.GetComponent<Wheel>().Rotate = true;
				GetComponent<Rigidbody>().isKinematic = false;
				gameObject.GetComponent<Collider>().material = beginMat;
			}else{
				GetComponent<Rigidbody>().useGravity = true;
			}

		}
	}
	public void doSpin(){
		Physics.gravity = new Vector3(0, -9.81f, 0);
		spin = true;
		rotate = true;

		m_radius = radius;
		m_radiusSpeed = radiusSpeed;
		m_rotationSpeed = rotationSpeed;


		GetComponent<Rigidbody>().isKinematic = false;
		gameObject.GetComponent<Collider>().material = beginMat;
	}
	// Update is called once per frame
	void FixedUpdate () {
		//if (!spin)
		//	return;
		if (spin) {
			lists.Add (transform.position);
			Counter += 1 * Time.deltaTime;
		}
			


		if (!rotate)
			return;
		//m_radius -= deIncreaseRadius;
		m_rotationSpeed -= deIncreaseRadius;
		transform.RotateAround (center, axis, m_rotationSpeed * Time.deltaTime);
		//Vector3 desiredPosition = (transform.position - center).normalized * m_radius + center;
		//transform.position = Vector3.MoveTowards(transform.position, desiredPosition, Time.deltaTime * m_radiusSpeed);
	}

	void OnCollisionEnter(Collision collision) {
		Debug.Log (collision.gameObject.name + "   " + collision.relativeVelocity.magnitude);
		//if (!spin)
		//	return;
		if (collision.gameObject.name == "Dividers" /*|| collision.gameObject.name =="Circle.001"*/) {
			transform.parent = wheel.transform;
			//if(!gameObject.GetComponent<Collider>().material == beginMat)
				gameObject.GetComponent<Collider>().material = endMat;
		}

		if (collision.gameObject.name == "Dividers" || collision.gameObject.name == "Circle.001") {
			//Debug.Log(collision.relativeVelocity.magnitude);
			if(collision.relativeVelocity.magnitude > 5){
				GetComponent<AudioSource>().loop = false;
				GetComponent<AudioSource>().clip = poly;
				GetComponent<AudioSource>().volume = collision.relativeVelocity.magnitude / 20;
				GetComponent<AudioSource>().Play();
				sounds.Add(new PathSound("poly", GetComponent<AudioSource>().volume, Counter));
			}
		}

		if (collision.gameObject.name == "SpinnerNumbers" || collision.gameObject.name == "Sphere008" || collision.gameObject.name =="Cylinder101") {
			if(collision.relativeVelocity.magnitude > 3){
				GetComponent<AudioSource>().loop = false;
				GetComponent<AudioSource>().clip = poly;
				GetComponent<AudioSource>().volume = collision.relativeVelocity.magnitude / 20;
				GetComponent<AudioSource>().Play();
				sounds.Add(new PathSound("wood", GetComponent<AudioSource>().volume, Counter));
			}
		}

		if (collision.gameObject.name == "BallReceiver") {
			//gameObject.GetComponent<Collider>().material = finishMat;
			Debug.Log(collision.relativeVelocity.magnitude);	
			if(collision.relativeVelocity.magnitude >= 3f){
				//Debug.Log(collision.relativeVelocity.magnitude);
				GetComponent<AudioSource>().loop = false;
				GetComponent<AudioSource>().clip = receiver;
				GetComponent<AudioSource>().volume = collision.relativeVelocity.magnitude / 30;
				GetComponent<AudioSource>().Play();
				sounds.Add(new PathSound("receiver", GetComponent<AudioSource>().volume, Counter));
			}
		}

		if (!rotate)
			return;
		if (collision.gameObject.name == "SpinnerBase.001"/*|| collision.gameObject.name == "polySurface1"*/) {

			ContactPoint contact = collision.contacts[0];
			//Debug.Log(collision.relativeVelocity.magnitude);
			if(collision.relativeVelocity.magnitude < 1f) return;
			GetComponent<AudioSource>().Stop();
			GetComponent<AudioSource>().loop = false;
			GetComponent<AudioSource>().clip = diamondSound;
			GetComponent<AudioSource>().Play();
			sounds.Add(new PathSound("Diamond", 1, Counter));
			rotate = false;
			Vector3 normal = contact.normal;
			float force = 400;
			Vector3 forceVec = Vector3.Reflect(GetComponent<Rigidbody>().velocity, normal) * force * collision.relativeVelocity.magnitude;
			//Debug.Log(forceVec);
			GetComponent<Rigidbody>().AddForce(forceVec);
			Physics.gravity = new Vector3(0, -130, 0);
			
		}

		
	}
#if UNITY_EDITOR
	void HandleOnPlayModeChanged()
	{
		// This method is run whenever the playmode state is changed.


		if (EditorApplication.isPaused)
		{
			string path = "";
			int i = 0;
			foreach(Vector3 v in lists){
				path += "new Vector3(" + Mathf.Round(v.x * 1000f) / 1000f + "f," + Mathf.Round(v.y* 1000f) / 1000f + "f," + Mathf.Round(v.z* 1000f) / 1000f + "f)";
				i++;
				if(i != lists.Count)
					path += ",";
			}
			//Debug.Log(str);
			string s = "";
			i = 0;
			foreach(PathSound p in sounds){

				s += p.ToString();
				i++;
				if(i != sounds.Count)
					s += ",";
			}
			string str = path + "\n sound: " + s + "\ntime:" + Counter;
			str += "\n Wheel Speed: " + wheel.GetComponent<Wheel>().Speed;
			SavePath(str);
		}
	}

	void SavePath(string str){
		string path = null;
		
		path = "Assets/Resources/ballpath/path.txt";

		using (FileStream fs = new FileStream(path, FileMode.Create)){
			using (StreamWriter writer = new StreamWriter(fs)){
				writer.Write(str);
			}
		}
		UnityEditor.AssetDatabase.Refresh ();
	}
#endif


}
