using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class RaiseOptionControl : MonoBehaviour
{
	[SerializeField]
	Text
		textP84, textP70, textP40, textP00, stakeView;
	[SerializeField]
	public Slider
		slider;
	[SerializeField]
	Button
		plus, minus;
	[SerializeField]
	RectTransform
		panel;
	[SerializeField]
	Sprite
		allin, confirm;
	Image btn3_image;
	private float minStake, maxStake;

	// Use this for initialization
	void Start()
	{
		slider.value = 0;
	}

	void Update()
	{
		if (btn3_image == null) {
			try {
				btn3_image = GameApplication.gameScene.controllerControl.btn_f3.GetComponent<Image>();
			} catch (UnityException e) {
				Debug.LogException(e);
			}
		}
	}

	public bool isMaxStake()
	{
		if (slider.value > 0.95f)
			return true;
		return false;
	}

	public void increaseValue()
	{
//		float newValue = slider.value + 0.01f;
//		if (newValue > 1f)
//			newValue = 1f;
//		slider.value = newValue;
//		stakeView.text = Utils.formatCurrency((int)((maxStake - minStake) * value));

		int currentStake = (int)((maxStake - minStake) * slider.value);
		int nextStake = currentStake + GameApplication.game.stake;
		float nextSliderValue = nextStake / (float)(maxStake - minStake);

		slider.value = nextSliderValue > 1f ? 1f: nextSliderValue;
		updateStakeView(slider.value);
	}

	public void decreaseValue()
	{
//		float newValue = slider.value - 0.01f;
//		if (newValue < 0f)
//			newValue = 0f;
//		slider.value = newValue;
//		updateStakeView(newValue);

		int currentStake = (int)((maxStake - minStake) * slider.value);
		int nextStake = currentStake - GameApplication.game.stake;
		float nextSliderValue = nextStake / (float)(maxStake - minStake);

		slider.value = nextSliderValue < 0f ? 0f: nextSliderValue;
		updateStakeView(slider.value);
	}

	public void updateValues(int minStake, int maxStake)
	{
		this.minStake = minStake;
		this.maxStake = maxStake;
		textP00.text = Utils.formatCurrency(minStake);
		textP40.text = Utils.formatCurrency((int)((maxStake - minStake) * 0.4f) + minStake);
		textP70.text = Utils.formatCurrency((int)((maxStake - minStake) * 0.7f) + minStake);
		textP84.text = Utils.formatCurrency((int)((maxStake - minStake) * 0.84f) + minStake);
	}

	public void updateStakeView(float value)
	{
		if (value > 0.95f) {
			slider.value = 1f;
			if (btn3_image != null)
				btn3_image.sprite = allin;
		} else {
			if (btn3_image != null)
				btn3_image.sprite = confirm;
			stakeView.text = Utils.formatCurrency((int)((maxStake - minStake) * value));
			// -165 -> 215
//			Debug.Log("co vao day k =====> " + value);
//			panel.anchoredPosition = new Vector2(panel.anchoredPosition.x, (215 + 165) * value - 165);
			panel.anchoredPosition = new Vector2(panel.anchoredPosition.x, (215 + 200) * value - 105);
		}
	}

	public void allIn(){
		slider.value = 1f;
		updateStakeView(slider.value);
		stakeView.text = Utils.formatCurrency((int)((maxStake - minStake) * slider.value));
		panel.anchoredPosition = new Vector2(panel.anchoredPosition.x, (215 + 200) * slider.value - 105);
	}

	public int getStakeValue()
	{
		return (int)((maxStake - minStake) * slider.value);
	}
}
