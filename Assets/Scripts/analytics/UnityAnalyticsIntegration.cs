using UnityEngine;
using System.Collections;
using UnityEngine.Cloud.Analytics;

public class UnityAnalyticsIntegration : MonoBehaviour {
	
	// Use this for initialization
	void Start () {
		
		const string projectId = "650ee64f-1099-429d-a054-e3edb5e59734";
		UnityAnalytics.StartSDK (projectId);
		
	}
	
}