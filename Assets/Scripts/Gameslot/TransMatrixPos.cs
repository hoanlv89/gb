using UnityEngine;
using System.Collections;

public class TransMatrixPos  {
	private int soluong;
	public int [,] pos = new int[5,2];
	public TransMatrixPos(){
	}
	public int[,] transPos(int line){
		if(line == 1){
			pos =  new int[,]{{2,1},{2,2},{2,3},{2,4},{2,5}};
		} 	else 
		if(line == 3){
			pos =  new int[,]{{1,1},{1,2},{1,3},{1,4},{1,5}};
		} else
		if(line == 2){
			pos =  new int[,]{{3,1},{3,2},{3,3},{3,4},{3,5}};
		} else 
		if(line == 4){
			pos =  new int[,]{{3,1},{2,2},{1,3},{2,4},{3,5}};
		} else
		if(line == 5){
			pos =  new int[,]{{1,1},{2,2},{3,3},{2,4},{1,5}};
		} else
		if(line == 6){
			pos =  new int[,]{{2,1},{3,2},{3,3},{3,4},{2,5}};
		} else
		if(line == 7){
			pos =  new int[,]{{2,1},{1,2},{1,3},{1,4},{2,5}};
		} else
		if(line == 8){
			pos =  new int[,]{{3,1},{3,2},{2,3},{1,4},{1,5}};
		} else
		if(line == 9){
			pos =  new int[,]{{1,1},{1,2},{2,3},{3,4},{3,5}};
		} else
		if(line == 10){
			pos =  new int[,]{{3,1},{2,2},{1,3},{2,4},{3,5}};
		} 

		return pos;
	}
}
