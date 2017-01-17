using UnityEngine;
using System.Collections;

public class Wheel : MonoBehaviour {

	private bool rotate = false;
	private float speed = -80.0f;
	void FixedUpdate(){
		if (rotate) {
			transform.RotateAround (transform.position, Vector3.up, speed * Time.deltaTime);
		}
	}

	public bool Rotate {
		get {
			return rotate;
		}
		set {
			rotate = value;
		}
	}

	public float Speed {
		get {
			return speed;
		}
		set {
			speed = value;
		}
	}
}