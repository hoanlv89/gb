#if UNITY_EDITOR
	using UnityEditor;
#endif

public class CreateAssetBundles {

	[MenuItem ("Assets/Build AssetBundles")]
	static void BuildAllAssetBundles ()
	{
#if UNITY_EDITOR
		BuildPipeline.BuildAssetBundles ("AssetBundles");
#endif
	}
}
