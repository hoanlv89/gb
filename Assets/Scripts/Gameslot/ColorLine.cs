using UnityEngine;
using System.Collections;

public class ColorLine : MonoBehaviour {
	Color32 color;
	public ColorLine(){}
	public Color32 getColorLine(int line){
		if(line==1){
			color = new Color32(221,221,0,255);
		} else 
		if(line==2){
			color = new Color32(255,136,216,255);
		}else 
		if(line==3){
			color = new Color32(136,0,255,255);
		}else 
		if(line==4){
			color = new Color32(181,100,214,255);
		}else 
		if(line==5){
			color = new Color32(204,51,170,255);
		}else 
		if(line==6){
			color = new Color32(24,221,68,255);
		}else 
		if(line==7){
			color = new Color32(34,201,17,255);
		}else 
		if(line==8){
			color = new Color32(221,221,54,255);
		}else 
		if(line==9){
			color = new Color32(51,221,204,255);
		}else 
		if(line==10){
			color = new Color32(15,124,226,255);
		}
		return color;
	}
}
