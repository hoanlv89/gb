using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DummyRes : MonoBehaviour {
	public static DummyRes Instance;

	public RectTransform pf_score_dummy_text;
	public RectTransform pf_bobai;
	public RectTransform pf_alert;
	public Animator pf_anim1;
	public Animator pf_anim2;
	public Animator pf_anim_habai_eff;

	public Animator pf_anim_finish1, pf_anim_finish2, pf_anim_finish3;

	public Animator dealer;

	public Sprite layladau, vutdummy, vutladapdau, vuatladapspecto;

	public GameObject light_turn_0;
	public GameObject light_turn_1;
	public GameObject light_turn_2;
	public GameObject light_turn_3;

	// Use this for initialization
	void Start () {
		Instance = this;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
