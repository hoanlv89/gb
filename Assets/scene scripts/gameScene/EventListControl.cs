using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using SimpleJSON;
using com.cubeia.firebase.io.protocol;

public class EventListControl : MonoBehaviour
{
	public Transform EventItem;
	int index;
	List<string> eventList = new List<string> ();

	// Use this for initialization
	void Start ()
	{
		index = 0;
		eventList.Clear ();

		// tienlen
//		addEventFromJSONString("{\"evt\":\"vtable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":500,\"ArrP\":[{\"N\":\"pihanh\",\"Url\":\"pihanh\",\"AG\":35675,\"AGC\":0,\"LQ\":0,\"VIP\":2,\"isStart\":true,\"IK\":0,\"Arr\":[0,0,0,0,0,0,0,0,0],\"sIP\":\"113.178.46.86\",\"G\":3,\"Av\":21,\"FId\":0,\"GId\":0},{\"N\":\"ngotran\",\"Url\":\"ngotran\",\"AG\":41699,\"AGC\":0,\"LQ\":0,\"VIP\":1,\"isStart\":true,\"IK\":0,\"Arr\":[0,0,0,0,0,0,0,0,0],\"sIP\":\"1.52.241.139\",\"G\":3,\"Av\":8,\"FId\":0,\"GId\":0},{\"N\":\"haunguyentknt.gm\",\"Url\":\"haunguyentknt.gm\",\"AG\":43008,\"AGC\":0,\"LQ\":0,\"VIP\":1,\"isStart\":true,\"IK\":0,\"Arr\":[0,0,0,0,0,0,0,0,0],\"sIP\":\"14.167.16.27\",\"G\":3,\"Av\":4,\"FId\":0,\"GId\":0}],\"Id\":38607,\"T\":0,\"V\":0,\"AG\":10,\"S\":4,\"CN\":\"\"}\"}");
//		addEventFromJSONString("{\"evt\":\"rjtable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":2000,\"ArrP\":[{\"N\":\"annguyenpro\",\"Url\":\"fb.974492469236118\",\"AG\":76331,\"AGC\":0,\"LQ\":0,\"VIP\":4,\"isStart\":true,\"IK\":0,\"Arr\":[0,0,0,0,0,0,0,0,0,0],\"sIP\":\"27.66.146.129\",\"G\":3,\"Av\":0,\"FId\":974492469236118,\"GId\":0},{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":482894,\"AGC\":0,\"LQ\":0,\"VIP\":2,\"isStart\":true,\"IK\":0,\"Arr\":[40,30,44,48,23,49,24,37,51,39],\"sIP\":\"14.162.140.72\",\"G\":3,\"Av\":9,\"FId\":0,\"GId\":0}],\"Id\":9860,\"T\":0,\"V\":0,\"AG\":10,\"S\":2,\"CN\":\"annguyenpro\",\"CT\":15,\"LC\":[20,34,35]}\"}");
//		addEventFromJSONString("{\"evt\":\"2\",\"data\":\"[{\"Id\":1,\"Name\":\"Phòng 1\",\"MaxTable\":100,\"CurPlay\":313,\"MaxPlay\":400,\"CurTable\":0,\"MinAG\":0,\"MaxAG\":1000000000},{\"Id\":2,\"Name\":\"Phòng 2\",\"MaxTable\":100,\"CurPlay\":11,\"MaxPlay\":400,\"CurTable\":0,\"MinAG\":0,\"MaxAG\":1000000000},{\"Id\":3,\"Name\":\"Phòng 3\",\"MaxTable\":100,\"CurPlay\":61,\"MaxPlay\":400,\"CurTable\":0,\"MinAG\":0,\"MaxAG\":1000000000},{\"Id\":4,\"Name\":\"Phòng 4\",\"MaxTable\":100,\"CurPlay\":65,\"MaxPlay\":400,\"CurTable\":0,\"MinAG\":0,\"MaxAG\":1000000000},{\"Id\":5,\"Name\":\"P.Miễn phí\",\"MaxTable\":100,\"CurPlay\":0,\"MaxPlay\":300,\"CurTable\":0,\"MinAG\":0,\"MaxAG\":1000000000}]\"}");
//		addEventFromJSONString("{\"evt\":\"ltv\",\"data\":\"[{\"mark\":100,\"ag\":3000,\"condition\":0},{\"mark\":200,\"ag\":6000,\"condition\":0},{\"mark\":500,\"ag\":15000,\"condition\":0},{\"mark\":1000,\"ag\":30000,\"condition\":0},{\"mark\":2000,\"ag\":60000,\"condition\":0},{\"mark\":5000,\"ag\":150000,\"condition\":0},{\"mark\":20000,\"ag\":600000,\"condition\":0},{\"mark\":50000,\"ag\":1500000,\"condition\":0}]\"}");
//		addEventFromJSONString("{\"evt\":\"selectR\",\"data\":1}");
//		addEventFromJSONString("{\"NN\":\"ann2006\",\"N\":\"annguyenpro\",\"MC\":0,\"Arr\":[47,9,36],\"evt\":\"dc\"}");
//		addEventFromJSONString("");

//		addEventFromJSONString("{\"evt\":\"lc\",\"Dealer\":\"ann2005\",\"Arr\":\"[48,7]\"}");
//		addEventFromJSONString("{\"N\":\"loveyou.lan.anh\",\"NN\":\"ann2005\",\"AG\":20,\"TotalAG\":50,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"ann2005\",\"NN\":\"hoanlv89\",\"AG\":20,\"TotalAG\":70,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"hoanlv89\",\"NN\":\"getbonannon\",\"AG\":20,\"TotalAG\":80,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"getbonannon\",\"NN\":\"loveyou.lan.anh\",\"AG\":20,\"TotalAG\":80,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"evt\":\"cc\",\"data\":\"[38,4,2]\"}");
//		addEventFromJSONString("{\"N\":\"loveyou.lan.anh\",\"NN\":\"ann2005\",\"AG\":20,\"TotalAG\":80,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"ann2005\",\"NN\":\"hoanlv89\",\"AG\":20,\"TotalAG\":80,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"hoanlv89\",\"NN\":\"getbonannon\",\"AG\":20,\"TotalAG\":80,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"getbonannon\",\"NN\":\"loveyou.lan.anh\",\"AG\":9881,\"TotalAG\":9941,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"loveyou.lan.anh\",\"NN\":\"ann2005\",\"AG\":0,\"TotalAG\":0,\"evt\":\"bd\"}");
//		addEventFromJSONString("{\"N\":\"ann2005\",\"NN\":\"hoanlv89\",\"AG\":0,\"TotalAG\":0,\"evt\":\"bd\"}");
//		addEventFromJSONString("{\"N\":\"hoanlv89\",\"NN\":\"\",\"AG\":3018,\"TotalAG\":12939,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"evt\":\"cc\",\"data\":\"[38,4,2,29,44]\"}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"getbonannon\",\"M\":2843,\"AG\":715918,\"ArrCard\":[12,27],\"ArrWin\":[44,4,29,2,27,38,12],\"S\":5},{\"N\":\"loveyou.lan.anh\",\"M\":-20,\"AG\":1256775,\"ArrCard\":[31,21],\"ArrWin\":[44,31,38,21,4,29,2],\"S\":0},{\"N\":\"ann2005\",\"M\":-20,\"AG\":21531,\"ArrCard\":[48,7],\"ArrWin\":[38,48,7,44,4,29,2],\"S\":0},{\"N\":\"hoanlv89\",\"M\":-3018,\"AG\":0,\"ArrCard\":[35,43],\"ArrWin\":[43,4,38,35,44,29,2],\"S\":2}]\"}");
//		addEventFromJSONString("{\"evt\":\"am\",\"N\":\"hoanlv89\",\"M\":3800,\"T\":0}");

		// xoc dia
//		addEventFromJSONString ("{\"evt\":\"stable\",\"data\":\"{\\\"N\\\":\\\"nhao` zo^ !\\\",\\\"M\\\":100,\\\"ArrP\\\":[{\\\"N\\\":\\\"fb.1403297929987920\\\",\\\"Url\\\":\\\"fb.1403297929987920\\\",\\\"AG\\\":5960,\\\"A\\\":true,\\\"LQ\\\":0,\\\"VIP\\\":0,\\\"isStart\\\":true,\\\"IK\\\":0,\\\"sIP\\\":\\\"171.255.26.23\\\",\\\"G\\\":3,\\\"Av\\\":0,\\\"FId\\\":1403297929987920,\\\"GId\\\":0,\\\"D\\\":0,\\\"Arr\\\":[],\\\"MB\\\":{\\\"M\\\":0,\\\"N\\\":0,\\\"W\\\":0}},{\\\"N\\\":\\\"dob1306683.gm\\\",\\\"Url\\\":\\\"dob1306683.gm\\\",\\\"AG\\\":2376,\\\"A\\\":true,\\\"LQ\\\":0,\\\"VIP\\\":2,\\\"isStart\\\":false,\\\"IK\\\":0,\\\"sIP\\\":\\\"180.93.232.178\\\",\\\"G\\\":3,\\\"Av\\\":6,\\\"FId\\\":0,\\\"GId\\\":0,\\\"D\\\":0,\\\"Arr\\\":[{\\\"M\\\":1800,\\\"N\\\":2,\\\"W\\\":0}],\\\"MB\\\":{\\\"M\\\":0,\\\"N\\\":0,\\\"W\\\":0}},{\\\"N\\\":\\\"mainq168\\\",\\\"Url\\\":\\\"mainq168\\\",\\\"AG\\\":19226,\\\"A\\\":true,\\\"LQ\\\":0,\\\"VIP\\\":1,\\\"isStart\\\":false,\\\"IK\\\":0,\\\"sIP\\\":\\\"113.190.254.66\\\",\\\"G\\\":3,\\\"Av\\\":3,\\\"FId\\\":0,\\\"GId\\\":0,\\\"D\\\":0,\\\"Arr\\\":[],\\\"MB\\\":{\\\"M\\\":0,\\\"N\\\":0,\\\"W\\\":0}}],\\\"TS\\\":{\\\"M\\\":0,\\\"N\\\":0,\\\"W\\\":0},\\\"Id\\\":6778,\\\"T\\\":20,\\\"V\\\":0,\\\"AG\\\":10,\\\"S\\\":1,\\\"H\\\":\\\"2;1;2;2;1;2;1;1;2;1;2;2;1;1;1;2;2;2;1;2;\\\"}\",\"result\":0}");
//		addEventFromJSONString ("{\"evt\":\"startgame\",\"data\":\"\",\"result\":0}");
//		addEventFromJSONString ("{\"evt\":\"bet\",\"N\":\"dob1306683.gm\",\"Num\":\"2\",\"M\":\"100\"}");
//		addEventFromJSONString ("{\"evt\":\"bet\",\"N\":\"fb.1403297929987920\",\"Num\":\"1\",\"M\":\"1000\"}");
//		addEventFromJSONString ("{\"evt\":\"bet\",\"N\":\"mainq168\",\"Num\":\"2\",\"M\":\"100\"}");
//		addEventFromJSONString ("{\"evt\":\"finish\",\"data\":\"[{\\\"N\\\":\\\"fb.1403297929987920\\\",\\\"M\\\":-5000,\\\"AG\\\":960,\\\"NW\\\":\\\"\\\",\\\"MW\\\":\\\"\\\",\\\"BMW\\\":0,\\\"BNW\\\":0},{\\\"N\\\":\\\"dob1306683.gm\\\",\\\"M\\\":2254,\\\"AG\\\":4630,\\\"NW\\\":\\\"2;\\\",\\\"MW\\\":\\\"2300;\\\",\\\"BMW\\\":0,\\\"BNW\\\":0},{\\\"N\\\":\\\"mainq168\\\",\\\"M\\\":1652,\\\"AG\\\":20878,\\\"NW\\\":\\\"2;\\\",\\\"MW\\\":\\\"2400;\\\",\\\"BMW\\\":0,\\\"BNW\\\":0}]\",\"result\":5}\n" +
//			"{\"evt\":\"ltable\",\"Name\":\"fb.1403297929987920\"}");
//		addEventFromJSONString ("{\"evt\":\"ltable\",\"Name\":\"mainq168\"}");

		// Mau Binh
//		addEventFromJSONString ("{\"evt\":\"vtable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":500,\"ArrP\":[{\"N\":\"cucuong81\",\"Url\":\"cucuong81\",\"AG\":19118,\"A\":true,\"LQ\":0,\"VIP\":2,\"isStart\":true,\"IK\":0,\"Arr\":[0,0,0,0,0,0,0,0,0,0,0,0,0],\"sIP\":\"113.185.6.79\",\"G\":3,\"Av\":5,\"FId\":0,\"GId\":0},{\"N\":\"fb.1638193906417250\",\"Url\":\"fb.1638193906417250\",\"AG\":10338,\"A\":true,\"LQ\":0,\"VIP\":0,\"isStart\":true,\"IK\":0,\"Arr\":[0,0,0,0,0,0,0,0,0,0,0,0,0],\"sIP\":\"116.111.57.75\",\"G\":3,\"Av\":0,\"FId\":1638193906417250,\"GId\":0}],\"Id\":26057,\"T\":24,\"V\":0,\"AG\":10,\"S\":4}\"}");
//		addEventFromJSONString ("{\"evt\":\"fsc\",\"Name\":\"cucuong81\"}");
//		addEventFromJSONString ("{\"Name\":\"cucuong81\",\"Data\":\"Nhanh lên cha nội\",\"evt\":\"chattable\"}");
//		addEventFromJSONString ("{\"evt\":\"fsc\",\"Name\":\"fb.1638193906417250\"}");
//		addEventFromJSONString ("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"cucuong81\",\"M\":2425,\"BL\":false,\"MB\":0,\"AG\":21543,\"ArrCard\":[46,20,34,39,29,52,43,45,6,5,11,4,2]},{\"N\":\"fb.1638193906417250\",\"M\":-2500,\"BL\":true,\"MB\":0,\"AG\":7838,\"ArrCard\":[25,51,27,21,47,33,50,18,40,14,9,30,44]}]\"}");
//		addEventFromJSONString ("{\"evt\":\"stable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":500,\"ArrP\":[{\"N\":\"cucuong81\",\"Url\":\"cucuong81\",\"AG\":21543,\"LQ\":0,\"VIP\":2,\"isStart\":false,\"IK\":0,\"sIP\":\"113.185.6.79\",\"G\":3,\"Av\":5,\"FId\":0,\"GId\":0},{\"N\":\"fb.1638193906417250\",\"Url\":\"fb.1638193906417250\",\"AG\":7838,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"116.111.57.75\",\"G\":3,\"Av\":0,\"FId\":1638193906417250,\"GId\":0},{\"N\":\"ann2008\",\"Url\":\"ann2008\",\"AG\":122180,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"14.162.140.72\",\"G\":3,\"Av\":6,\"FId\":0,\"GId\":0}],\"Id\":26057,\"T\":0,\"V\":0,\"AG\":10,\"S\":4}\"}");
//		addEventFromJSONString ("{\"evt\":\"jtable\",\"data\":\"{\"N\":\"quocdung201529.gm\",\"Url\":\"quocdung201529.gm\",\"AG\":96495,\"LQ\":0,\"VIP\":2,\"isStart\":false,\"IK\":0,\"sIP\":\"113.185.6.144\",\"G\":3,\"Av\":18,\"FId\":0,\"GId\":0}\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"cucuong81\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"quocdung201529.gm\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"ann2006\"}");
//		addEventFromJSONString ("{\"evt\":\"ltable\",\"Name\":\"fb.1638193906417250\"}");
//		addEventFromJSONString ("{\"evt\":\"lc\",\"data\":\"[2, 15, 3, 16, 4, 17, 5, 18, 6, 19, 7, 20, 28]\"}");
//		addEventFromJSONString ("{\"evt\":\"fsc\",\"Name\":\"ann2006\"}");
//		addEventFromJSONString ("{\"evt\":\"fsc\",\"Name\":\"cucuong81\"}");
//		addEventFromJSONString ("{\"evt\":\"fsc\",\"Name\":\"quocdung201529.gm\"}");
//		addEventFromJSONString ("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"cucuong81\",\"M\":-45,\"BL\":false,\"MB\":0,\"AG\":21498,\"ArrCard\":[22,7,21,29,27,2,5,4,47,48,49,50,41]},{\"N\":\"ann2006\",\"M\":940,\"BL\":false,\"MB\":0,\"AG\":123120,\"ArrCard\":[25,9,18,19,42,3,1,40,34,31,37,28,38]},{\"N\":\"quocdung201529.gm\",\"M\":-1030,\"BL\":false,\"MB\":0,\"AG\":95465,\"ArrCard\":[14,32,6,43,16,13,46,52,8,35,11,36,33]}]\"}");


		// sam
//		addEventFromJSONString("{\"evt\":\"vtable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":100,\"ArrP\":[{\"N\":\"fb.1626782160911713\",\"Url\":\"fb.1626782160911713\",\"AG\":2160,\"AGC\":0,\"LQ\":0,\"VIP\":0,\"isStart\":true,\"IK\":1,\"Arr\":[0],\"sIP\":\"27.67.24.123\",\"G\":3,\"Av\":0,\"FId\":1626782160911713,\"GId\":0},{\"N\":\"thanhnghi76923.gm\",\"Url\":\"thanhnghi76923.gm\",\"AG\":1325,\"AGC\":0,\"LQ\":0,\"VIP\":1,\"isStart\":true,\"IK\":0,\"Arr\":[0,0,0,0,0,0,0,0],\"sIP\":\"123.27.60.239\",\"G\":3,\"Av\":19,\"FId\":0,\"GId\":0},{\"N\":\"fb.1637499993157356\",\"Url\":\"fb.1637499993157356\",\"AG\":1565,\"AGC\":0,\"LQ\":0,\"VIP\":0,\"isStart\":true,\"IK\":1,\"Arr\":[0,0,0,0,0,0,0],\"sIP\":\"27.67.23.172\",\"G\":3,\"Av\":0,\"FId\":1637499993157356,\"GId\":0},{\"N\":\"thanhtung\",\"Url\":\"fb.696235543810483\",\"AG\":1258,\"AGC\":0,\"LQ\":0,\"VIP\":1,\"isStart\":true,\"IK\":0,\"Arr\":[0,0,0,0,0,0,0],\"sIP\":\"27.66.36.203\",\"G\":1,\"Av\":0,\"FId\":696235543810483,\"GId\":0}],\"Id\":3622,\"T\":0,\"V\":0,\"AG\":10,\"S\":5}\"}");
//		addEventFromJSONString("{\"N\":\"fb.1637499993157356\",\"NN\":\"thanhtung\",\"evt\":\"cc\"}");
//		addEventFromJSONString("{\"NN\":\"fb.1626782160911713\",\"N\":\"thanhtung\",\"MC\":0,\"Arr\":[21,9,23],\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"fb.1626782160911713\",\"NN\":\"thanhtung\",\"evt\":\"cc\"}");
//		addEventFromJSONString("{\"NN\":\"fb.1626782160911713\",\"N\":\"thanhtung\",\"MC\":0,\"Arr\":[22,35],\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"fb.1626782160911713\",\"NN\":\"thanhnghi76923.gm\",\"evt\":\"cc\"}");
//		addEventFromJSONString("{\"N\":\"thanhnghi76923.gm\",\"NN\":\"fb.1637499993157356\",\"evt\":\"cc\"}");
//		addEventFromJSONString("{\"N\":\"fb.1637499993157356\",\"NN\":\"thanhtung\",\"evt\":\"cc\"}");
//		addEventFromJSONString("{\"NN\":\"fb.1626782160911713\",\"N\":\"thanhtung\",\"MC\":0,\"Arr\":[42],\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"thanhtung\",\"sam\":0,\"evt\":\"bao\"}");
//		addEventFromJSONString("{\"NN\":\"thanhnghi76923.gm\",\"N\":\"fb.1626782160911713\",\"MC\":0,\"Arr\":[49],\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"thanhnghi76923.gm\",\"M\":-800,\"V\":10,\"AG\":525,\"ArrCard\":[15,43,5,45,47,36,50,13],\"D\":8},{\"N\":\"fb.1637499993157356\",\"M\":-700,\"V\":10,\"AG\":865,\"ArrCard\":[18,44,7,20,33,34,37],\"D\":7},{\"N\":\"thanhtung\",\"M\":-100,\"V\":10,\"AG\":1158,\"ArrCard\":[27],\"D\":1},{\"N\":\"fb.1626782160911713\",\"M\":1488,\"V\":0,\"AG\":3648,\"ArrCard\":[],\"D\":16}]\"}");
//		addEventFromJSONString("{\"evt\":\"am\",\"N\":\"fb.1637499993157356\",\"M\":1200,\"T\":0}");
//		addEventFromJSONString("{\"evt\":\"ltable\",\"Name\":\"thanhnghi76923.gm\"}");
//		addEventFromJSONString("{\"evt\":\"stable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":100,\"ArrP\":[{\"N\":\"fb.1626782160911713\",\"Url\":\"fb.1626782160911713\",\"AG\":3648,\"LQ\":0,\"VIP\":0,\"isStart\":true,\"IK\":0,\"sIP\":\"27.67.24.123\",\"G\":3,\"Av\":0,\"FId\":1626782160911713,\"GId\":0},{\"N\":\"fb.1637499993157356\",\"Url\":\"fb.1637499993157356\",\"AG\":2065,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"27.67.23.172\",\"G\":3,\"Av\":0,\"FId\":1637499993157356,\"GId\":0},{\"N\":\"thanhtung\",\"Url\":\"fb.696235543810483\",\"AG\":1158,\"LQ\":0,\"VIP\":1,\"isStart\":false,\"IK\":0,\"sIP\":\"27.66.36.203\",\"G\":1,\"Av\":0,\"FId\":696235543810483,\"GId\":0},{\"N\":\"thangnt\",\"Url\":\"ann2005\",\"AG\":1194,\"LQ\":0,\"VIP\":1,\"isStart\":false,\"IK\":0,\"sIP\":\"14.162.139.232\",\"G\":1,\"Av\":31,\"FId\":0,\"GId\":0}],\"Id\":3622,\"T\":0,\"V\":0,\"AG\":10,\"S\":5}\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"thanhtung\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"thangnt\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"fb.1637499993157356\"}");
//		addEventFromJSONString("{\"NName\":\"fb.1626782160911713\",\"evt\":\"lc\",\"Arr\":[1,14,40,16,33,46,22,35,11,51]}");
//		addEventFromJSONString("{\"N\":\"thanhtung\",\"sam\":1,\"evt\":\"asam\"}");
//		addEventFromJSONString("{\"N\":\"fb.1626782160911713\",\"sam\":1,\"evt\":\"asam\"}");
//		addEventFromJSONString("{\"N\":\"fb.1637499993157356\",\"sam\":1,\"evt\":\"asam\"}");
//		addEventFromJSONString("{\"N\":\"thangnt\",\"sam\":1,\"evt\":\"asam\"}");
//		addEventFromJSONString("{\"N\":\"fb.1626782160911713\",\"sam\":0,\"evt\":\"sdc\"}");
//		addEventFromJSONString("{\"NN\":\"fb.1637499993157356\",\"N\":\"fb.1626782160911713\",\"MC\":0,\"Arr\":[27,28,3,17],\"evt\":\"dc\"}");


		// xito
//		addEventFromJSONString("{\"evt\":\"vtable\",\"data\":\"{\"N\":\"Auto\",\"M\":100,\"ArrP\":[{\"A\":false,\"N\":\"duy_anh\",\"Url\":\"fb.512369662235577\",\"AG\":94954,\"AGC\":100,\"LQ\":0,\"VIP\":2,\"isStart\":true,\"IK\":0,\"Arr\":[0,18,31],\"sIP\":\"42.113.157.204\",\"G\":1,\"XA\":1,\"Av\":0,\"FId\":512369662235577,\"GId\":0},{\"A\":true,\"N\":\"nguyenlong7995\",\"Url\":\"nguyenlong7995\",\"AG\":1500,\"AGC\":1500,\"LQ\":0,\"VIP\":0,\"isStart\":true,\"IK\":0,\"Arr\":[0,22,6],\"sIP\":\"14.168.228.148\",\"G\":3,\"XA\":1,\"Av\":0,\"FId\":0,\"GId\":0},{\"A\":true,\"N\":\"huyvu84\",\"Url\":\"fb.1466051397042779\",\"AG\":26119,\"AGC\":1500,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"Arr\":[0,29,9],\"sIP\":\"27.74.96.110\",\"G\":1,\"XA\":1,\"Av\":0,\"FId\":1466051397042779,\"GId\":0},{\"A\":true,\"N\":\"phuc_handsome\",\"Url\":\"phuc_handsome\",\"AG\":6000,\"AGC\":1500,\"LQ\":0,\"VIP\":0,\"isStart\":true,\"IK\":0,\"Arr\":[0,27,21],\"sIP\":\"113.187.17.5\",\"G\":3,\"XA\":1,\"Av\":3,\"FId\":0,\"GId\":0}],\"Id\":12245,\"T\":2,\"V\":0,\"AG\":10,\"S\":5}\"}");
//		addEventFromJSONString("{\"N\":\"huyvu84\",\"NN\":\"phuc_handsome\",\"AG\":1500,\"TotalAG\":4600,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"phuc_handsome\",\"NN\":\"\",\"AG\":0,\"TotalAG\":0,\"evt\":\"bd\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"data\":\"[{\"N\":\"duy_anh\",\"C\":4},{\"N\":\"nguyenlong7995\",\"C\":10},{\"N\":\"huyvu84\",\"C\":12},{\"N\":\"phuc_handsome\",\"C\":13},{\"N\":\"duy_anh\",\"C\":8},{\"N\":\"nguyenlong7995\",\"C\":3},{\"N\":\"huyvu84\",\"C\":23},{\"N\":\"phuc_handsome\",\"C\":19}]\"}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"duy_anh\",\"M\":-100,\"AG\":94854,\"ArrCard\":[18,14,31,4,8]},{\"N\":\"nguyenlong7995\",\"M\":-1500,\"AG\":0,\"ArrCard\":[15,22,6,10,3]},{\"N\":\"phuc_handsome\",\"M\":-1500,\"AG\":5000,\"ArrCard\":[26,27,21,13,19]},{\"N\":\"huyvu84\",\"M\":2883,\"AG\":29002,\"ArrCard\":[7,29,9,12,23]}]\"}");
//		addEventFromJSONString("{\"evt\":\"am\",\"N\":\"nguyenlong7995\",\"M\":1500,\"T\":0}");
//		addEventFromJSONString("{\"evt\":\"stable\",\"data\":\"{\"N\":\"Auto\",\"M\":100,\"ArrP\":[{\"N\":\"duy_anh\",\"Url\":\"fb.512369662235577\",\"AG\":94854,\"LQ\":0,\"VIP\":2,\"isStart\":false,\"IK\":0,\"sIP\":\"42.113.157.204\",\"G\":1,\"XA\":1,\"Av\":0,\"FId\":512369662235577,\"GId\":0},{\"N\":\"nguyenlong7995\",\"Url\":\"nguyenlong7995\",\"AG\":1500,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"14.168.228.148\",\"G\":3,\"XA\":1,\"Av\":0,\"FId\":0,\"GId\":0},{\"N\":\"huyvu84\",\"Url\":\"fb.1466051397042779\",\"AG\":29002,\"LQ\":0,\"VIP\":3,\"isStart\":false,\"IK\":0,\"sIP\":\"27.74.96.110\",\"G\":1,\"XA\":1,\"Av\":0,\"FId\":1466051397042779,\"GId\":0},{\"N\":\"phuc_handsome\",\"Url\":\"phuc_handsome\",\"AG\":5000,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"113.187.17.5\",\"G\":3,\"XA\":1,\"Av\":3,\"FId\":0,\"GId\":0},{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":100000,\"LQ\":0,\"VIP\":2,\"isStart\":false,\"IK\":0,\"sIP\":\"14.162.139.232\",\"G\":3,\"XA\":1,\"Av\":7,\"FId\":0,\"GId\":0}],\"Id\":12245,\"T\":2,\"V\":0,\"AG\":10,\"S\":5}\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"phuc_handsome\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"huyvu84\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"nguyenlong7995\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"ann2006\"}");
//		addEventFromJSONString("{\"evt\":\"lc\",\"data\":\"[12,6]\"}");
//		addEventFromJSONString("{\"N\":\"nguyenlong7995\",\"C\":23,\"evt\":\"fc\"}");
//		addEventFromJSONString("{\"N\":\"phuc_handsome\",\"C\":28,\"evt\":\"fc\"}");
//		addEventFromJSONString("{\"N\":\"duy_anh\",\"C\":17,\"evt\":\"fc\"}");
//		addEventFromJSONString("{\"N\":\"huyvu84\",\"C\":5,\"evt\":\"fc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":6,\"evt\":\"fc\"}");
//		addEventFromJSONString("{\"evt\":\"sbm\",\"Name\":\"nguyenlong7995\"}");
//		addEventFromJSONString("{\"N\":\"nguyenlong7995\",\"NN\":\"huyvu84\",\"AG\":1500,\"TotalAG\":1900,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"huyvu84\",\"NN\":\"phuc_handsome\",\"AG\":1500,\"TotalAG\":3300,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"phuc_handsome\",\"NN\":\"ann2006\",\"AG\":1500,\"TotalAG\":4700,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"NN\":\"duy_anh\",\"AG\":1500,\"TotalAG\":6100,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"duy_anh\",\"NN\":\"\",\"AG\":0,\"TotalAG\":0,\"evt\":\"bd\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"data\":\"[{\"N\":\"duy_anh\",\"C\":24},{\"N\":\"nguyenlong7995\",\"C\":1},{\"N\":\"huyvu84\",\"C\":29},{\"N\":\"phuc_handsome\",\"C\":19},{\"N\":\"ann2006\",\"C\":21}]\"}");
//		addEventFromJSONString("{\"evt\":\"sbm\",\"Name\":\"huyvu84\"}");
//		addEventFromJSONString("{\"N\":\"huyvu84\",\"NN\":\"phuc_handsome\",\"AG\":4555,\"TotalAG\":9155,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"phuc_handsome\",\"NN\":\"ann2006\",\"AG\":4555,\"TotalAG\":12210,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"NN\":\"\",\"AG\":4555,\"TotalAG\":15265,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"data\":\"[{\"N\":\"duy_anh\",\"C\":31},{\"N\":\"nguyenlong7995\",\"C\":18},{\"N\":\"huyvu84\",\"C\":8},{\"N\":\"phuc_handsome\",\"C\":20},{\"N\":\"ann2006\",\"C\":26}]\"}");
//		addEventFromJSONString("{\"evt\":\"sbm\",\"Name\":\"huyvu84\"}");
//		addEventFromJSONString("{\"N\":\"huyvu84\",\"NN\":\"phuc_handsome\",\"AG\":6660,\"TotalAG\":17370,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"phuc_handsome\",\"NN\":\"ann2006\",\"AG\":5000,\"TotalAG\":17815,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"NN\":\"\",\"AG\":6660,\"TotalAG\":19920,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"data\":\"[{\"N\":\"duy_anh\",\"C\":7},{\"N\":\"nguyenlong7995\",\"C\":25},{\"N\":\"huyvu84\",\"C\":4},{\"N\":\"phuc_handsome\",\"C\":16},{\"N\":\"ann2006\",\"C\":27}]\"}");
//		addEventFromJSONString("{\"evt\":\"sbm\",\"Name\":\"huyvu84\"}");
//		addEventFromJSONString("{\"N\":\"huyvu84\",\"NN\":\"ann2006\",\"AG\":6660,\"TotalAG\":19920,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"NN\":\"huyvu84\",\"AG\":12299,\"TotalAG\":25559,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"huyvu84\",\"NN\":\"\",\"AG\":12299,\"TotalAG\":31198,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"duy_anh\",\"M\":-100,\"AG\":94754,\"ArrCard\":[22,17,24,31,7]},{\"N\":\"nguyenlong7995\",\"M\":-1500,\"AG\":0,\"ArrCard\":[23,32,1,18,25]},{\"N\":\"huyvu84\",\"M\":-12299,\"AG\":16703,\"ArrCard\":[14,5,29,8,4]},{\"N\":\"phuc_handsome\",\"M\":-5000,\"AG\":0,\"ArrCard\":[28,15,19,20,16]},{\"N\":\"ann2006\",\"M\":17576,\"AG\":117576,\"ArrCard\":[12,6,21,26,27]}]\"}");
//		addEventFromJSONString("{\"evt\":\"am\",\"N\":\"nguyenlong7995\",\"M\":1500,\"T\":0}");
//		addEventFromJSONString("{\"evt\":\"am\",\"N\":\"nguyenlong7995\",\"M\":500,\"T\":1}");
//		addEventFromJSONString("{\"evt\":\"ltable\",\"Name\":\"phuc_handsome\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"huyvu84\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"nguyenlong7995\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"ann2006\"}");
//		addEventFromJSONString("{\"evt\":\"lc\",\"data\":\"[15,31]\"}");
//		addEventFromJSONString("{\"N\":\"duy_anh\",\"C\":19,\"evt\":\"fc\"}");
//		addEventFromJSONString("{\"N\":\"nguyenlong7995\",\"C\":3,\"evt\":\"fc\"}");
//		addEventFromJSONString("{\"N\":\"huyvu84\",\"C\":27,\"evt\":\"fc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":31,\"evt\":\"fc\"}");
//		addEventFromJSONString("{\"evt\":\"sbm\",\"Name\":\"ann2006\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"NN\":\"duy_anh\",\"AG\":7737,\"TotalAG\":8037,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"duy_anh\",\"NN\":\"nguyenlong7995\",\"AG\":0,\"TotalAG\":0,\"evt\":\"bd\"}");
//		addEventFromJSONString("{\"N\":\"nguyenlong7995\",\"NN\":\"huyvu84\",\"AG\":1500,\"TotalAG\":9437,\"evt\":\"bm\"}");
//		addEventFromJSONString("{\"N\":\"huyvu84\",\"NN\":\"\",\"AG\":0,\"TotalAG\":0,\"evt\":\"bd\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"data\":\"[{\"N\":\"duy_anh\",\"C\":7},{\"N\":\"nguyenlong7995\",\"C\":30},{\"N\":\"huyvu84\",\"C\":26},{\"N\":\"ann2006\",\"C\":16},{\"N\":\"duy_anh\",\"C\":24},{\"N\":\"nguyenlong7995\",\"C\":20},{\"N\":\"huyvu84\",\"C\":22},{\"N\":\"ann2006\",\"C\":23},{\"N\":\"duy_anh\",\"C\":2},{\"N\":\"nguyenlong7995\",\"C\":11},{\"N\":\"huyvu84\",\"C\":21},{\"N\":\"ann2006\",\"C\":9}]\"}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"duy_anh\",\"M\":-100,\"AG\":94654,\"ArrCard\":[4,19,7,24,2]},{\"N\":\"nguyenlong7995\",\"M\":-1500,\"AG\":500,\"ArrCard\":[3,6,30,20,11]},{\"N\":\"huyvu84\",\"M\":-100,\"AG\":16603,\"ArrCard\":[28,27,26,22,21]},{\"N\":\"ann2006\",\"M\":1581,\"AG\":119157,\"ArrCard\":[15,31,16,23,9]}]\"}");

		// tala
//		addEventFromJSONString("{\"evt\":\"rjtable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":2000,\"ArrP\":[{\"N\":\"fb.104408283227188\",\"Url\":\"fb.104408283227188\",\"AG\":108947,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"sIP\":\"171.254.12.236\",\"Arr\":[0,0,0],\"ArrD\":[50,37,18],\"ArrH\":[[41,2,15],[47,21,34]],\"G\":1,\"Av\":0,\"FId\":104408283227188,\"GId\":0},{\"N\":\"fb.1606971686239039\",\"Url\":\"fb.1606971686239039\",\"AG\":131090,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"sIP\":\"113.185.6.25\",\"Arr\":[0,0,0],\"ArrD\":[13,20,31,30],\"ArrH\":[[45,32,19],[35,22,48]],\"G\":3,\"Av\":0,\"FId\":1606971686239039,\"GId\":0},{\"N\":\"dlbaria\",\"Url\":\"dlbaria\",\"AG\":112562,\"LQ\":0,\"VIP\":4,\"isStart\":true,\"IK\":0,\"sIP\":\"113.161.130.66\",\"Arr\":[0,0,0],\"ArrD\":[24,33,9],\"ArrH\":[[38,12,25],[5,6,7,8]],\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0},{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":575963,\"LQ\":0,\"VIP\":2,\"isStart\":true,\"IK\":0,\"sIP\":\"14.162.140.72\",\"Arr\":[3,17,44,23,36,110,26,39,52],\"ArrD\":[11,51,46],\"ArrH\":[],\"G\":3,\"Av\":9,\"FId\":0,\"GId\":0}],\"Id\":21432,\"T\":0,\"V\":0,\"AG\":10,\"S\":4,\"LN\":\"fb.1606971686239039\",\"CN\":\"dlbaria\",\"CT\":15,\"CA\":1}\"}");
//		addEventFromJSONString("{\"evt\":\"vtable\",\"data\":\"{\"N\":\"abc\",\"M\":5000,\"ArrP\":[{\"N\":\"hangngoai13\",\"Url\":\"hangngoai13\",\"AG\":151083,\"LQ\":0,\"VIP\":4,\"isStart\":true,\"IK\":0,\"sIP\":\"27.69.107.109\",\"Arr\":[0,0,0,0,0,0,0,0,0],\"ArrD\":[43,18,39],\"ArrH\":[],\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0},{\"N\":\"huongoanh188\",\"Url\":\"huongoanh188\",\"AG\":550991,\"LQ\":0,\"VIP\":5,\"isStart\":true,\"IK\":0,\"sIP\":\"123.17.122.127\",\"Arr\":[0,0,0,0,0,0,0,0,0],\"ArrD\":[26,13,23],\"ArrH\":[],\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0},{\"N\":\"ductung08011971\",\"Url\":\"ductung08011971\",\"AG\":115850,\"LQ\":1600,\"VIP\":5,\"isStart\":true,\"IK\":0,\"sIP\":\"117.6.84.60\",\"Arr\":[0,0,0],\"ArrD\":[47,36,6,52],\"ArrH\":[[25,51,38],[8,9,10]],\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0}],\"Id\":34924,\"T\":0,\"V\":0,\"AG\":10,\"S\":4}\"}");
//		addEventFromJSONString("{\"evt\":\"vtable\", \"data\":\"{\"N\":\"Auto\",\"M\":2000,\"ArrP\":[{\"N\":\"dungndix32.gm\",\"Url\":\"dungndix32.gm\",\"AG\":117956,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"sIP\":\"123.16.96.26\",\"Arr\":[0,0,0,0,0,0,0,0,0],\"ArrD\":[39],\"ArrH\":[],\"G\":3,\"Av\":34,\"FId\":0,\"GId\":0},{\"N\":\"vuisonthuyanh\",\"Url\":\"vuisonthuyanh\",\"AG\":45950,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"sIP\":\"113.181.176.153\",\"Arr\":[0,0,0,0,0,0,0,0,0],\"ArrD\":[],\"ArrH\":[],\"G\":3,\"Av\":10,\"FId\":0,\"GId\":0}],\"Id\":57,\"T\":0,\"V\":0,\"AG\":10,\"S\":4}\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":49,\"NN\":\"dungndix32.gm\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\", \"C\":\"49\", \"evt\":\"ac\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":39,\"NN\":\"vuisonthuyanh\",\"A\":0,\"evt\":\"cc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\", \"C\":\"38\", \"NN\":\"vuisonthuyanh\", \"A\":\"0\", \"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\", \"C\":\"22\", \"NN\":\"dungndix32.gm\", \"A\":\"0\", \"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\", \"C\":\"35\", \"NN\":\"vuisonthuyanh\", \"A\":\"0\", \"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":20,\"NN\":\"dungndix32.gm\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":41,\"NN\":\"vuisonthuyanh\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"evt\":\"hc\",\"Arr\":[27,28,29,30]}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\", \"evt\":\"hc\", \"Arr\":[ \"23\", \"24\", \"25\" ]}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":11,\"NN\":\"dungndix32.gm\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"evt\":\"hc\",\"Arr\":[7,8,9,10]}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"evt\":\"hc\",\"Arr\":[48,49,50]}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"evt\":\"gc\",\"Arr\":[{\"N\":\"vuisonthuyanh\",\"Arr\":[31]},{\"N\":\"vuisonthuyanh\",\"Arr\":[32]}]}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":45,\"NN\":\"vuisonthuyanh\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"vuisonthuyanh\",\"M\":1860,\"V\":1,\"D\":5,\"AG\":45810,\"ArrCard\":[40,4]},{\"N\":\"dungndix32.gm\",\"M\":-2000,\"V\":2,\"D\":10,\"AG\":117816,\"ArrCard\":[5,18]}]\"}");
//		addEventFromJSONString("{\"evt\":\"stable\",\"data\":\"{\"N\":\"Auto\",\"M\":2000,\"ArrP\":[{\"N\":\"dungndix32.gm\",\"Url\":\"dungndix32.gm\",\"AG\":117816,\"LQ\":0,\"VIP\":3,\"isStart\":false,\"IK\":0,\"sIP\":\"123.16.96.26\",\"G\":3,\"Av\":34,\"FId\":0,\"GId\":0},{\"N\":\"vuisonthuyanh\",\"Url\":\"vuisonthuyanh\",\"AG\":45810,\"LQ\":0,\"VIP\":3,\"isStart\":false,\"IK\":0,\"sIP\":\"113.181.176.153\",\"G\":3,\"Av\":10,\"FId\":0,\"GId\":0},{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":504508,\"LQ\":0,\"VIP\":1,\"isStart\":false,\"IK\":0,\"sIP\":\"14.162.140.72\",\"G\":3,\"Av\":9,\"FId\":0,\"GId\":0}],\"Id\":57,\"T\":0,\"V\":0,\"AG\":10,\"S\":4}\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"dungndix32.gm\"}");
//		addEventFromJSONString("{\"evt\":\"jtable\", \"data\":\"{\"N\":\"quocviethn1982.gm\",\"Url\":\"quocviethn1982.gm\",\"AG\":44265,\"LQ\":0,\"VIP\":4,\"isStart\":false,\"IK\":0,\"sIP\":\"113.187.4.79\",\"G\":3,\"Av\":5,\"FId\":0,\"GId\":0}\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"vuisonthuyanh\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"ann2006\"}");
//		addEventFromJSONString("{\"evt\":\"ltable\",\"Name\":\"quocviethn1982.gm\"}");
//		addEventFromJSONString("{\"evt\":\"lc\",\"NName\":\"vuisonthuyanh\",\"Arr\":[9,5,7,35,30,40,15,23,25]}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":13,\"NN\":\"ann2006\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":31,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"evt\":\"schat\",\"data\":\"{\"Name\":\"Hệ thống\",\"Data\":\"sinhleo234 vừa tham gia bàn chơi.\"}\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":15,\"NN\":\"dungndix32.gm\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":12,\"NN\":\"vuisonthuyanh\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":12,\"evt\":\"ac\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":13,\"NN\":\"dungndix32.gm\",\"A\":0,\"evt\":\"cc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":39,\"NN\":\"ann2006\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":47,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":47,\"NN\":\"dungndix32.gm\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":24,\"NN\":\"vuisonthuyanh\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":48,\"NN\":\"ann2006\",\"A\":1,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":48,\"evt\":\"ac\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":47,\"NN\":\"vuisonthuyanh\",\"A\":0,\"evt\":\"cc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":25,\"NN\":\"dungndix32.gm\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"evt\":\"schat\",\"data\":\"{\"Name\":\"Hệ thống\",\"Data\":\"mrhieu09879 vừa tham gia bàn chơi.\"}\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":16,\"NN\":\"vuisonthuyanh\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":16,\"evt\":\"ac\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":46,\"NN\":\"ann2006\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":33,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":23,\"NN\":\"dungndix32.gm\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":52,\"NN\":\"vuisonthuyanh\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"evt\":\"hc\",\"Arr\":[38,51,12]}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"evt\":\"hc\",\"Arr\":[16,17,18]}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":20,\"NN\":\"ann2006\",\"A\":1,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":20,\"evt\":\"ac\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"hc\",\"Arr\":[7,33,20]}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"hc\",\"Arr\":[9,35,48]}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":40,\"NN\":\"dungndix32.gm\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":40,\"evt\":\"ac\"}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"evt\":\"hc\",\"Arr\":[27,1,40]}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"evt\":\"hc\",\"Arr\":[32,6,45,19]}");
//		addEventFromJSONString("{\"N\":\"dungndix32.gm\",\"C\":34,\"NN\":\"vuisonthuyanh\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"vuisonthuyanh\",\"C\":36,\"NN\":\"ann2006\",\"A\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"C\":29,\"evt\":\"bc\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"hc\",\"Arr\":[29,30,31]}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"dungndix32.gm\",\"M\":-20000,\"V\":7,\"D\":7,\"AG\":99256,\"ArrCard\":[28,44]},{\"N\":\"vuisonthuyanh\",\"M\":0,\"V\":0,\"D\":9,\"AG\":41390,\"ArrCard\":[41,3,43]},{\"N\":\"ann2006\",\"M\":18600,\"V\":1,\"D\":5,\"AG\":524408,\"ArrCard\":[5]}]\"}");

		// chan -- tinh huong ng khac dc chiu bai
//		addEventFromJSONString("{\"evt\":\"stable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":200,\"ArrP\":[{\"N\":\"lq.214ed8601534c57d\",\"Url\":\"lq.214ed8601534c57d\",\"AG\":5524,\"LQ\":0,\"VIP\":4,\"isStart\":true,\"IK\":0,\"sIP\":\"113.162.14.132\",\"G\":3,\"Av\":7,\"FId\":0,\"GId\":0},{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":642658,\"LQ\":0,\"VIP\":3,\"isStart\":false,\"IK\":0,\"sIP\":\"14.162.139.166\",\"G\":3,\"Av\":31,\"FId\":0,\"GId\":0}],\"Id\":182,\"T\":0,\"V\":0,\"AG\":10,\"S\":4,\"G\":0,\"F\":0}\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"lq.214ed8601534c57d\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"ann2006\"}");
//		addEventFromJSONString("{\"NN\":\"lq.214ed8601534c57d\",\"N\":\"ann2006\",\"C\":53,\"Arr\":[68,65,7,70,12,42,75,73,15,14,45,51,81,60,59,90,32,61,94],\"evt\":\"lc\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"lq.214ed8601534c57d\",\"NN\":\"ann2006\",\"C\":9,\"T\":0,\"CA\":12,\"ND\":\"lq.214ed8601534c57d\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[12,9]}");
//		addEventFromJSONString("{\"evt\":\"cc\",\"N\":\"ann2006\",\"CN\":8,\"CS\":3,\"CI\":90,\"T\":26,\"NN\":\"lq.214ed8601534c57d\",\"OK\":false}");
//		addEventFromJSONString("{\"evt\":\"kc\",\"N\":\"ann2006\",\"CN\":8,\"CS\":3,\"CI\":90,\"T\":26,\"NN\":\"lq.214ed8601534c57d\",\"OK\":false}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"lq.214ed8601534c57d\",\"NN\":\"ann2006\",\"C\":13,\"T\":0,\"CA\":15,\"ND\":\"lq.214ed8601534c57d\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":98,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"lq.214ed8601534c57d\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"lq.214ed8601534c57d\",\"evt\":\"ac\",\"Arr\":[97,98]}");
//		addEventFromJSONString("{\"evt\":\"rjtable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":200,\"ArrP\":[{\"N\":\"0966100015\",\"Url\":\"fb.traique.k\",\"AG\":12606,\"LQ\":0,\"VIP\":6,\"isStart\":true,\"IK\":0,\"Arr\":[],\"ArrD\":[],\"ArrH\":[89,26],\"sIP\":\"113.171.144.50\",\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0},{\"N\":\"caotrang21102007.gm\",\"Url\":\"caotrang21102007.gm\",\"AG\":22628,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"Arr\":[],\"ArrD\":[],\"ArrH\":[36,34],\"sIP\":\"123.20.172.44\",\"G\":1,\"Av\":12,\"FId\":0,\"GId\":0},{\"N\":\"bomkinhyeuvl\",\"Url\":\"bomkinhyeuvl\",\"AG\":111825,\"LQ\":0,\"VIP\":1,\"isStart\":true,\"IK\":0,\"Arr\":[],\"ArrD\":[99],\"ArrH\":[],\"sIP\":\"118.71.248.4\",\"G\":3,\"Av\":12,\"FId\":0,\"GId\":0},{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":639553,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"Arr\":[68,65,37,44,75,47,46,79,78,49,24,22,87,25,27,57,58,91,63],\"ArrD\":[],\"ArrH\":[],\"sIP\":\"14.162.139.166\",\"G\":3,\"Av\":31,\"FId\":0,\"GId\":0}],\"Id\":162,\"T\":1,\"V\":0,\"AG\":10,\"S\":4,\"CN\":\"caotrang21102007.gm\",\"CT\":20,\"CA\":1}\"}");

		// tinh huong minh chiu chet game

//		addEventFromJSONString ("{\"evt\":\"ctable\",\"data\":\"{\"N\":\"\\u0000\",\"M\":100,\"ArrP\":[{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":4409,\"LQ\":0,\"VIP\":2,\"isStart\":true,\"IK\":0,\"sIP\":\"14.177.210.246\",\"G\":3,\"Av\":28,\"FId\":0,\"GId\":0}],\"Id\":1981,\"T\":1,\"V\":0,\"AG\":10,\"S\":9,\"G\":1,\"F\":0}\"}");
//		addEventFromJSONString ("{\"evt\":\"jtable\",\"data\":\"{\"N\":\"an3cpro\",\"Url\":\"fb.1028735277145170\",\"AG\":4427,\"LQ\":0,\"VIP\":2,\"isStart\":false,\"IK\":0,\"sIP\":\"14.177.210.246\",\"G\":3,\"Av\":0,\"FId\":1028735277145170,\"GId\":0}\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"an3cpro\"}");
//		addEventFromJSONString ("{\"NN\":\"ann2006\",\"N\":\"ann2006\",\"C\":93,\"Arr\":[2,3,65,69,44,43,79,51,49,53,56,88,86,89,29,63,93,94,96,97],\"evt\":\"lc\"}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"an3cpro\",\"C\":2,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString ("{\"N\":\"an3cpro\",\"evt\":\"ac\",\"Arr\":[33,2]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"an3cpro\",\"NN\":\"ann2006\",\"C\":64,\"T\":0,\"CA\":63,\"ND\":\"an3cpro\"}");
//		addEventFromJSONString ("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[63,64]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"an3cpro\",\"C\":79,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"an3cpro\",\"C\":9,\"CA\":0}");
//		addEventFromJSONString ("{\"N\":\"an3cpro\",\"evt\":\"ac\",\"Arr\":[11,9]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"an3cpro\",\"NN\":\"ann2006\",\"C\":57,\"T\":0,\"CA\":89,\"ND\":\"an3cpro\"}");
//		addEventFromJSONString ("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[89,57]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"an3cpro\",\"C\":97,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"an3cpro\",\"C\":30,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"an3cpro\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":29}");
//		addEventFromJSONString ("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[29,30]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"an3cpro\",\"C\":69,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString ("{\"N\":\"an3cpro\",\"evt\":\"ac\",\"Arr\":[71,69]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"an3cpro\",\"NN\":\"ann2006\",\"C\":87,\"T\":0,\"CA\":88,\"ND\":\"an3cpro\"}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":46,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"an3cpro\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"finish\",\"data\":\"{\"N\":\"ann2006\",\"C\":0,\"TC\":0,\"Arr\":[43,44,49,51,56,53,86,88,30,29,64,63,94,93,89,57,65,3,96,31],\"I\":31}\"}");
//		addEventFromJSONString ("{\"evt\":\"kg\",\"data\":\"{\"N\":\"ann2006\",\"M\":2,\"ArrCuoc\":[],\"ArrE\":[],\"ArrMark\":[{\"A\":4227,\"N\":\"an3cpro\"},{\"A\":4595,\"N\":\"ann2006\"}],\"C\":\"Xuông\",\"CE\":\"Xuông\",\"G\":0}\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"an3cpro\"}");
//		addEventFromJSONString ("{\"NN\":\"an3cpro\",\"N\":\"ann2006\",\"C\":36,\"Arr\":[4,33,68,71,43,76,77,17,19,20,51,22,56,54,25,92,91,31,61],\"evt\":\"lc\"}");
//		addEventFromJSONString ("{\"evt\":\"cc\",\"N\":\"an3cpro\",\"CN\":6,\"CS\":1,\"CI\":18,\"T\":26,\"NN\":\"ann2006\",\"OK\":false}");
//		addEventFromJSONString ("{\"evt\":\"kc\",\"N\":\"an3cpro\",\"CN\":6,\"CS\":1,\"CI\":18,\"T\":26,\"NN\":\"ann2006\",\"OK\":false}");

		// tinh huong doi phuong chiu, danh tra cua
//		addEventFromJSONString ("{\"evt\":\"stable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":500,\"ArrP\":[{\"N\":\"vuvantrung66\",\"Url\":\"vuvantrung66\",\"AG\":52407,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"sIP\":\"14.163.0.44\",\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0},{\"N\":\"chamnc\",\"Url\":\"chamnc\",\"AG\":32403,\"LQ\":0,\"VIP\":2,\"isStart\":true,\"IK\":0,\"sIP\":\"113.190.139.58\",\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0},{\"N\":\"annguyenpro\",\"Url\":\"fb.974492469236118\",\"AG\":335529,\"LQ\":30000,\"VIP\":6,\"isStart\":false,\"IK\":0,\"sIP\":\"27.67.43.116\",\"G\":3,\"Av\":0,\"FId\":974492469236118,\"GId\":0}],\"Id\":7493,\"T\":0,\"V\":0,\"AG\":10,\"S\":4,\"G\":0,\"F\":0}\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"annguyenpro\"}");
//		addEventFromJSONString ("{\"NN\":\"annguyenpro\",\"N\":\"annguyenpro\",\"C\":13,\"Arr\":[4,66,6,72,74,13,16,47,79,17,81,54,53,87,28,25,89,61,64,93],\"evt\":\"lc\"}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"annguyenpro\",\"NN\":\"vuvantrung66\",\"C\":93,\"T\":0,\"CA\":0,\"ND\":\"annguyenpro\"}");
//		addEventFromJSONString ("{\"N\":\"vuvantrung66\",\"evt\":\"ac\",\"Arr\":[31,93]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"vuvantrung66\",\"NN\":\"chamnc\",\"C\":86,\"T\":0,\"CA\":0,\"ND\":\"vuvantrung66\"}");
//		addEventFromJSONString ("{\"N\":\"chamnc\",\"evt\":\"ac\",\"Arr\":[88,86]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"chamnc\",\"NN\":\"annguyenpro\",\"C\":33,\"T\":0,\"CA\":0,\"ND\":\"chamnc\"}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"annguyenpro\",\"C\":70,\"CA\":72}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"annguyenpro\",\"NN\":\"vuvantrung66\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"vuvantrung66\",\"C\":43,\"CA\":0}");
//		addEventFromJSONString ("{\"N\":\"vuvantrung66\",\"evt\":\"ac\",\"Arr\":[41,43]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"vuvantrung66\",\"NN\":\"chamnc\",\"C\":40,\"T\":0,\"CA\":0,\"ND\":\"vuvantrung66\"}");
//		addEventFromJSONString ("{\"N\":\"chamnc\",\"evt\":\"ac\",\"Arr\":[39,40]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"chamnc\",\"NN\":\"annguyenpro\",\"C\":57,\"T\":0,\"CA\":89,\"ND\":\"chamnc\"}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"annguyenpro\",\"C\":71,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"annguyenpro\",\"NN\":\"vuvantrung66\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"vuvantrung66\",\"C\":45,\"CA\":0}");
//		addEventFromJSONString ("{\"N\":\"vuvantrung66\",\"evt\":\"ac\",\"Arr\":[48,45]}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"vuvantrung66\",\"NN\":\"chamnc\",\"C\":67,\"T\":0,\"CA\":0,\"ND\":\"vuvantrung66\"}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"chamnc\",\"C\":73,\"CA\":0}");
//		addEventFromJSONString ("{\"N\":\"chamnc\",\"evt\":\"ac\",\"Arr\":[76,73]}");
//		addEventFromJSONString ("{\"evt\":\"cc\",\"N\":\"chamnc\",\"CN\":4,\"CS\":1,\"CI\":9,\"T\":26,\"NN\":\"vuvantrung66\",\"OK\":false}");
//		addEventFromJSONString ("{\"evt\":\"kc\",\"N\":\"chamnc\",\"CN\":4,\"CS\":1,\"CI\":9,\"T\":26,\"NN\":\"vuvantrung66\",\"OK\":false}");
//		addEventFromJSONString ("{\"evt\":\"dc\",\"N\":\"vuvantrung66\",\"NN\":\"annguyenpro\",\"C\":99,\"T\":25,\"CA\":0,\"ND\":\"chamnc\"}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"annguyenpro\",\"C\":34,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"annguyenpro\",\"NN\":\"vuvantrung66\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"vuvantrung66\",\"C\":1,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"vuvantrung66\",\"NN\":\"chamnc\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"chamnc\",\"C\":20,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"chamnc\",\"NN\":\"annguyenpro\",\"C\":0,\"T\":0,\"CA\":17}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"annguyenpro\",\"C\":55,\"CA\":54}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"annguyenpro\",\"NN\":\"vuvantrung66\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"vuvantrung66\",\"NN\":\"chamnc\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"bc\",\"N\":\"chamnc\",\"C\":30,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"np\",\"N\":\"chamnc\",\"NN\":\"annguyenpro\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString ("{\"evt\":\"finish\",\"data\":\"{\"N\":\"vuvantrung66\",\"C\":0,\"TC\":0,\"Arr\":[9,9,9,9,43,41,45,48,91,92,63,62,31,93,83,18,58,27,14,77],\"I\":77}\"}");


		// tinh huong minh dc chiu sau khi rjtable
//		addEventFromJSONString("{\"evt\":\"rjtable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":200,\"ArrP\":[{\"N\":\"adi_adu\",\"Url\":\"ngocpt1982.tb\",\"AG\":21327,\"LQ\":0,\"VIP\":4,\"isStart\":true,\"IK\":0,\"Arr\":[],\"ArrD\":[50],\"ArrH\":[20,17],\"sIP\":\"171.240.144.147\",\"G\":3,\"Av\":34,\"FId\":0,\"GId\":0},{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":637553,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"Arr\":[3,36,66,8,6,5,10,44,73,74,16,47,77,54,87,27,59,92,97],\"ArrD\":[28],\"ArrH\":[],\"sIP\":\"14.162.139.166\",\"G\":3,\"Av\":31,\"FId\":0,\"GId\":0}],\"Id\":392,\"T\":1,\"V\":0,\"AG\":10,\"S\":4,\"CN\":\"adi_adu\",\"CT\":17,\"CA\":0}\"}");
//		addEventFromJSONString("{\"evt\":\"cc\",\"N\":\"adi_adu\",\"CN\":3,\"CS\":1,\"CI\":7,\"T\":25,\"NN\":\"ann2006\",\"OK\":false}");
//		addEventFromJSONString("{\"evt\":\"kc\",\"N\":\"adi_adu\",\"CN\":3,\"CS\":1,\"CI\":7,\"T\":25,\"NN\":\"ann2006\",\"OK\":false}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"adi_adu\",\"C\":97,\"T\":24,\"CA\":0,\"ND\":\"adi_adu\"}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"adi_adu\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":14,\"CA\":16}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"adi_adu\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"adi_adu\",\"evt\":\"ac\",\"Arr\":[15,14]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"adi_adu\",\"NN\":\"ann2006\",\"C\":2,\"T\":0,\"CA\":3,\"ND\":\"adi_adu\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[3,2]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"adi_adu\",\"C\":92,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"adi_adu\",\"C\":26,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"adi_adu\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":39,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"adi_adu\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"adi_adu\",\"C\":19,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"adi_adu\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":95,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"adi_adu\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"adi_adu\",\"C\":13,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"adi_adu\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":16}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":48,\"CA\":47}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[47,48]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"adi_adu\",\"C\":59,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"adi_adu\",\"C\":33,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"adi_adu\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":36}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":4,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"adi_adu\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"adi_adu\",\"C\":81,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"adi_adu\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"{\"N\":\"ann2006\",\"C\":0,\"TC\":0,\"Arr\":[70,71,14,15,79,80,17,20,29,32,42,11,88,21,91,57,96,64,55,53],\"I\":53}\"}");
//		addEventFromJSONString("{\"evt\":\"kg\",\"data\":\"{\"N\":\"adi_adu\",\"M\":2,\"ArrCuoc\":[],\"ArrE\":[1],\"ArrMark\":[{\"A\":637153,\"N\":\"ann2006\"},{\"A\":21699,\"N\":\"adi_adu\"}],\"C\":\"Xuông\",\"CE\":\"Xuông\",\"G\":0}\"}");
//
//		addEventFromJSONString("{\"evt\":\"stable\",\"data\":\"{\"N\":\"Auto\",\"M\":100,\"ArrP\":[{\"N\":\"fb.1620455584863031\",\"Url\":\"fb.1620455584863031\",\"AG\":5053,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"123.30.238.218\",\"G\":3,\"Av\":0,\"FId\":1620455584863031,\"GId\":0},{\"N\":\"fb.1555492434703175\",\"Url\":\"fb.1555492434703175\",\"AG\":3310,\"LQ\":0,\"VIP\":3,\"isStart\":false,\"IK\":0,\"sIP\":\"171.255.43.101\",\"G\":3,\"Av\":0,\"FId\":1555492434703175,\"GId\":0},{\"N\":\"fb.384965671709425\",\"Url\":\"fb.384965671709425\",\"AG\":1500,\"LQ\":0,\"VIP\":1,\"isStart\":false,\"IK\":0,\"sIP\":\"117.0.38.152\",\"G\":3,\"Av\":0,\"FId\":384965671709425,\"GId\":0},{\"N\":\"ann2007\",\"Url\":\"ann2007\",\"AG\":618036,\"LQ\":0,\"VIP\":2,\"isStart\":false,\"IK\":0,\"sIP\":\"14.177.139.39\",\"G\":3,\"Av\":24,\"FId\":0,\"GId\":0}],\"Id\":5565,\"T\":1,\"V\":0,\"AG\":10,\"S\":4,\"G\":0,\"F\":0}\"}");
//		addEventFromJSONString("{\"NN\":\"fb.1555492434703175\",\"N\":\"ann2007\",\"C\":67,\"Arr\":[4,8,70,12,44,76,15,14,77,54,55,88,58,59,92,31,29,62,93],\"evt\":\"lc\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.1555492434703175\",\"NN\":\"fb.384965671709425\",\"C\":57,\"T\":0,\"CA\":0,\"ND\":\"fb.1555492434703175\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.384965671709425\",\"C\":33,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"fb.384965671709425\",\"evt\":\"ac\",\"Arr\":[36,33]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.384965671709425\",\"NN\":\"ann2007\",\"C\":48,\"T\":0,\"CA\":77,\"ND\":\"fb.384965671709425\"}");
//		addEventFromJSONString("{\"N\":\"ann2007\",\"evt\":\"ac\",\"Arr\":[77,48]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2007\",\"NN\":\"fb.1620455584863031\",\"C\":92,\"T\":0,\"CA\":0,\"ND\":\"ann2007\"}");
//		addEventFromJSONString("{\"N\":\"fb.1620455584863031\",\"evt\":\"ac\",\"Arr\":[25,92]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.1620455584863031\",\"NN\":\"fb.1555492434703175\",\"C\":66,\"T\":0,\"CA\":0,\"ND\":\"fb.1620455584863031\"}");
//		addEventFromJSONString("{\"N\":\"fb.1555492434703175\",\"evt\":\"ac\",\"Arr\":[67,66]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.1555492434703175\",\"NN\":\"fb.384965671709425\",\"C\":35,\"T\":0,\"CA\":0,\"ND\":\"fb.1555492434703175\"}");
//		addEventFromJSONString("{\"N\":\"fb.384965671709425\",\"evt\":\"ac\",\"Arr\":[34,35]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.384965671709425\",\"NN\":\"ann2007\",\"C\":68,\"T\":0,\"CA\":4,\"ND\":\"fb.384965671709425\"}");
//		addEventFromJSONString("{\"N\":\"ann2007\",\"evt\":\"ac\",\"Arr\":[4,68]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2007\",\"NN\":\"fb.1620455584863031\",\"C\":88,\"T\":0,\"CA\":0,\"ND\":\"ann2007\"}");
//		addEventFromJSONString("{\"N\":\"fb.1620455584863031\",\"evt\":\"ac\",\"Arr\":[86,88]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.1620455584863031\",\"NN\":\"fb.1555492434703175\",\"C\":24,\"T\":0,\"CA\":0,\"ND\":\"fb.1620455584863031\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.1555492434703175\",\"C\":97,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"fb.1555492434703175\",\"evt\":\"ac\",\"Arr\":[100,97]}");
//		addEventFromJSONString("{\"evt\":\"cc\",\"N\":\"fb.1555492434703175\",\"CN\":3,\"CS\":2,\"CI\":40,\"T\":26,\"NN\":\"fb.1620455584863031\",\"OK\":false}");
//		addEventFromJSONString("{\"evt\":\"nt\",\"N\":\"fb.384965671709425\",\"T\":25}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.384965671709425\",\"C\":43,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"fb.384965671709425\",\"NN\":\"ann2007\",\"C\":0,\"T\":0,\"CA\":44}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"{\"N\":\"fb.1555492434703175\",\"C\":0,\"TC\":0,\"Arr\":[66,67,5,6,10,9,80,79,90,89,97,100,75,42,84,17,56,22,95,32],\"I\":32}\"}");
//		addEventFromJSONString("{\"evt\":\"kg\",\"data\":\"{\"N\":\"fb.1555492434703175\",\"M\":2,\"ArrCuoc\":[],\"ArrE\":[],\"ArrMark\":[{\"A\":4853,\"N\":\"fb.1620455584863031\"},{\"A\":1300,\"N\":\"fb.384965671709425\"},{\"A\":617836,\"N\":\"ann2007\"},{\"A\":3868,\"N\":\"fb.1555492434703175\"}],\"C\":\"Xuông\",\"CE\":\"Xuông\",\"G\":0}\"}");


//		addEventFromJSONString("{\"evt\":\"stable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":100,\"ArrP\":[{\"N\":\"tungo354.gm\",\"Url\":\"tungo354.gm\",\"AG\":12737,\"LQ\":0,\"VIP\":2,\"isStart\":false,\"IK\":0,\"sIP\":\"27.67.27.35\",\"G\":3,\"Av\":31,\"FId\":0,\"GId\":0},{\"N\":\"catreaxcv\",\"Url\":\"catreaxcv\",\"AG\":1632,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":1,\"sIP\":\"123.16.225.69\",\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0},{\"N\":\"huyson840313.gm\",\"Url\":\"huyson840313.gm\",\"AG\":1631,\"LQ\":0,\"VIP\":2,\"isStart\":false,\"IK\":0,\"sIP\":\"116.107.2.170\",\"G\":3,\"Av\":23,\"FId\":0,\"GId\":0},{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":636653,\"LQ\":0,\"VIP\":3,\"isStart\":false,\"IK\":0,\"sIP\":\"14.162.139.166\",\"G\":3,\"Av\":31,\"FId\":0,\"GId\":0}],\"Id\":490,\"T\":0,\"V\":0,\"AG\":10,\"S\":4,\"G\":0,\"F\":0}\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"catreaxcv\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"huyson840313.gm\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"ann2006\"}");
//		addEventFromJSONString("{\"NN\":\"tungo354.gm\",\"N\":\"ann2006\",\"C\":14,\"Arr\":[2,35,40,37,10,74,76,16,48,18,83,53,55,85,28,89,62,100,98],\"evt\":\"lc\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"tungo354.gm\",\"NN\":\"catreaxcv\",\"C\":77,\"T\":0,\"CA\":0,\"ND\":\"tungo354.gm\"}");
//		addEventFromJSONString("{\"N\":\"catreaxcv\",\"evt\":\"ac\",\"Arr\":[79,77]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"catreaxcv\",\"NN\":\"huyson840313.gm\",\"C\":46,\"T\":0,\"CA\":0,\"ND\":\"catreaxcv\"}");
//		addEventFromJSONString("{\"N\":\"huyson840313.gm\",\"evt\":\"ac\",\"Arr\":[80,46]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"huyson840313.gm\",\"NN\":\"ann2006\",\"C\":66,\"T\":0,\"CA\":0,\"ND\":\"huyson840313.gm\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":8,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"tungo354.gm\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"tungo354.gm\",\"C\":65,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"tungo354.gm\",\"evt\":\"ac\",\"Arr\":[67,65]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"tungo354.gm\",\"NN\":\"catreaxcv\",\"C\":41,\"T\":0,\"CA\":0,\"ND\":\"tungo354.gm\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"catreaxcv\",\"C\":25,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"catreaxcv\",\"evt\":\"ac\",\"Arr\":[27,25]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"catreaxcv\",\"NN\":\"huyson840313.gm\",\"C\":88,\"T\":0,\"CA\":0,\"ND\":\"catreaxcv\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"huyson840313.gm\",\"C\":34,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"huyson840313.gm\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":35}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":51,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"tungo354.gm\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"tungo354.gm\",\"C\":72,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"tungo354.gm\",\"NN\":\"catreaxcv\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"catreaxcv\",\"C\":52,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"catreaxcv\",\"evt\":\"ac\",\"Arr\":[50,52]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"catreaxcv\",\"NN\":\"huyson840313.gm\",\"C\":84,\"T\":0,\"CA\":0,\"ND\":\"catreaxcv\"}");
//		addEventFromJSONString("{\"N\":\"huyson840313.gm\",\"evt\":\"ac\",\"Arr\":[81,84]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"huyson840313.gm\",\"NN\":\"ann2006\",\"C\":73,\"T\":0,\"CA\":74,\"ND\":\"huyson840313.gm\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[76,73]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"tungo354.gm\",\"C\":62,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString("{\"N\":\"tungo354.gm\",\"evt\":\"ac\",\"Arr\":[64,62]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"tungo354.gm\",\"NN\":\"catreaxcv\",\"C\":23,\"T\":0,\"CA\":0,\"ND\":\"tungo354.gm\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"catreaxcv\",\"C\":56,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"catreaxcv\",\"NN\":\"huyson840313.gm\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"huyson840313.gm\",\"C\":70,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"huyson840313.gm\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":71,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"tungo354.gm\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"tungo354.gm\",\"C\":29,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"tungo354.gm\",\"evt\":\"ac\",\"Arr\":[30,29]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"tungo354.gm\",\"NN\":\"catreaxcv\",\"C\":99,\"T\":0,\"CA\":0,\"ND\":\"tungo354.gm\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"catreaxcv\",\"C\":44,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"catreaxcv\",\"NN\":\"huyson840313.gm\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"huyson840313.gm\",\"C\":82,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"huyson840313.gm\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":83}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[83,82]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"tungo354.gm\",\"C\":85,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"tungo354.gm\",\"C\":60,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"tungo354.gm\",\"NN\":\"catreaxcv\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"catreaxcv\",\"C\":7,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"catreaxcv\",\"NN\":\"huyson840313.gm\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"huyson840313.gm\",\"C\":42,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"huyson840313.gm\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":39,\"CA\":40}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"tungo354.gm\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"tungo354.gm\",\"C\":75,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"tungo354.gm\",\"NN\":\"catreaxcv\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"catreaxcv\",\"C\":11,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"catreaxcv\",\"NN\":\"huyson840313.gm\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"huyson840313.gm\",\"C\":43,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"huyson840313.gm\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":15,\"CA\":16}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"tungo354.gm\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"{\"N\":\"ann2006\",\"C\":0,\"TC\":0,\"Arr\":[37,40,73,76,82,83,55,53,98,100,35,2,74,10,48,16,89,28,18,17],\"I\":17}\"}");
//		addEventFromJSONString("{\"evt\":\"kg\",\"data\":\"{\"N\":\"ann2006\",\"M\":4,\"ArrCuoc\":[11],\"ArrE\":[11],\"ArrMark\":[{\"A\":12337,\"N\":\"tungo354.gm\"},{\"A\":1232,\"N\":\"catreaxcv\"},{\"A\":1231,\"N\":\"huyson840313.gm\"},{\"A\":637769,\"N\":\"ann2006\"}],\"C\":\"Bạch thủ\",\"CE\":\"Bạch thủ\",\"G\":0}\"}");
//		addEventFromJSONString("{\"evt\":\"ltable\",\"Name\":\"tungo354.gm\"}");
//		addEventFromJSONString("{\"evt\":\"cctable\",\"Name\":\"catreaxcv\"}");
//		addEventFromJSONString("{\"evt\":\"rtable\",\"Name\":\"catreaxcv\"}");
//		addEventFromJSONString("{\"evt\":\"jtable\",\"data\":\"{\"N\":\"fb.1593371004279269\",\"Url\":\"fb.1593371004279269\",\"AG\":1402,\"LQ\":0,\"VIP\":1,\"isStart\":false,\"IK\":0,\"sIP\":\"171.234.49.96\",\"G\":3,\"Av\":0,\"FId\":1593371004279269,\"GId\":0}\"}");

//		addEventFromJSONString("{\"evt\":\"stable\",\"data\":\"{\"N\":\"Auto\",\"M\":100,\"ArrP\":[{\"N\":\"fb.373493259510864\",\"Url\":\"fb.373493259510864\",\"AG\":2800,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"42.113.154.191\",\"G\":3,\"Av\":0,\"FId\":373493259510864,\"GId\":0},{\"N\":\"fb.684582638343452\",\"Url\":\"fb.684582638343452\",\"AG\":2382,\"LQ\":0,\"VIP\":1,\"isStart\":false,\"IK\":0,\"sIP\":\"113.185.5.129\",\"G\":3,\"Av\":0,\"FId\":684582638343452,\"GId\":0},{\"N\":\"ann2006\",\"Url\":\"ann2006\",\"AG\":637769,\"LQ\":0,\"VIP\":3,\"isStart\":false,\"IK\":0,\"sIP\":\"14.177.136.126\",\"G\":3,\"Av\":31,\"FId\":0,\"GId\":0}],\"Id\":1747,\"T\":1,\"V\":0,\"AG\":10,\"S\":4,\"G\":0,\"F\":0}\"}");
//		addEventFromJSONString("{\"NN\":\"ann2006\",\"N\":\"ann2006\",\"C\":77,\"Arr\":[2,33,34,70,10,77,79,78,80,17,50,83,82,84,23,56,88,58,90,99],\"evt\":\"lc\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"fb.373493259510864\",\"C\":2,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.373493259510864\",\"C\":25,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"fb.373493259510864\",\"NN\":\"fb.684582638343452\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"fb.684582638343452\",\"evt\":\"ac\",\"Arr\":[27,25]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.684582638343452\",\"NN\":\"ann2006\",\"C\":51,\"T\":0,\"CA\":50,\"ND\":\"fb.684582638343452\"}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[50,51]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"fb.373493259510864\",\"C\":88,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.373493259510864\",\"C\":24,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"fb.373493259510864\",\"NN\":\"fb.684582638343452\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.684582638343452\",\"C\":31,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"fb.684582638343452\",\"evt\":\"ac\",\"Arr\":[32,31]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.684582638343452\",\"NN\":\"ann2006\",\"C\":47,\"T\":0,\"CA\":0,\"ND\":\"fb.684582638343452\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"ann2006\",\"C\":85,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"ann2006\",\"NN\":\"fb.373493259510864\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.373493259510864\",\"C\":52,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"fb.373493259510864\",\"evt\":\"ac\",\"Arr\":[49,52]}");
//		addEventFromJSONString("{\"evt\":\"cc\",\"N\":\"fb.373493259510864\",\"CN\":6,\"CS\":3,\"CI\":81,\"T\":26,\"NN\":\"ann2006\",\"OK\":false}");
//		addEventFromJSONString("{\"evt\":\"kc\",\"N\":\"fb.373493259510864\",\"CN\":6,\"CS\":3,\"CI\":81,\"T\":26,\"NN\":\"ann2006\",\"OK\":false}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"fb.684582638343452\",\"C\":10,\"T\":25,\"CA\":0,\"ND\":\"fb.373493259510864\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.684582638343452\",\"C\":69,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"fb.684582638343452\",\"NN\":\"ann2006\",\"C\":0,\"T\":0,\"CA\":70}");
//		addEventFromJSONString("{\"N\":\"ann2006\",\"evt\":\"ac\",\"Arr\":[70,69]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"ann2006\",\"NN\":\"fb.373493259510864\",\"C\":99,\"T\":0,\"CA\":0,\"ND\":\"ann2006\"}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"{\"N\":\"ann2006\",\"C\":0,\"TC\":0,\"Arr\":[34,33,69,70,80,78,79,77,51,50,81,81,81,81,56,23,90,58,17,19],\"I\":19}\"}");
//		addEventFromJSONString("{\"evt\":\"kg\",\"data\":\"{\"N\":\"ann2006\",\"M\":4,\"ArrCuoc\":[10,6],\"ArrE\":[10,6],\"ArrMark\":[{\"A\":1500,\"N\":\"fb.373493259510864\"},{\"A\":3656,\"N\":\"fb.684582638343452\"},{\"A\":637613,\"N\":\"ann2006\"}],\"C\":\"Thiên khai có chíu\",\"CE\":\"Thiên khai có chíu\",\"G\":0}\"}");

//		addEventFromJSONString("{\"evt\":\"vtable\",\"data\":\"{\"N\":\"nhao` zo^ !\",\"M\":100,\"ArrP\":[{\"N\":\"fb.737216783088623\",\"Url\":\"fb.737216783088623\",\"AG\":2268,\"LQ\":0,\"VIP\":2,\"isStart\":true,\"IK\":0,\"Arr\":[],\"ArrD\":[],\"ArrH\":[],\"sIP\":\"27.67.20.208\",\"G\":3,\"Av\":0,\"FId\":737216783088623,\"GId\":0},{\"N\":\"phonoi2000bn\",\"Url\":\"phonoi2000bn\",\"AG\":2389,\"LQ\":0,\"VIP\":4,\"isStart\":true,\"IK\":0,\"Arr\":[],\"ArrD\":[],\"ArrH\":[],\"sIP\":\"123.27.94.72\",\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0},{\"N\":\"banthannongnghiep\",\"Url\":\"banthannongnghiep\",\"AG\":2246,\"LQ\":0,\"VIP\":3,\"isStart\":true,\"IK\":0,\"Arr\":[],\"ArrD\":[],\"ArrH\":[45,48],\"sIP\":\"171.224.203.160\",\"G\":3,\"Av\":0,\"FId\":0,\"GId\":0}],\"Id\":5999,\"T\":0,\"V\":0,\"AG\":10,\"S\":4,\"G\":0,\"F\":0}\"}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"banthannongnghiep\",\"NN\":\"fb.737216783088623\",\"C\":98,\"T\":0,\"CA\":0,\"ND\":\"banthannongnghiep\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.737216783088623\",\"C\":58,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"fb.737216783088623\",\"evt\":\"ac\",\"Arr\":[59,58]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.737216783088623\",\"NN\":\"phonoi2000bn\",\"C\":16,\"T\":0,\"CA\":0,\"ND\":\"fb.737216783088623\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"phonoi2000bn\",\"C\":31,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"phonoi2000bn\",\"evt\":\"ac\",\"Arr\":[29,31]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"phonoi2000bn\",\"NN\":\"banthannongnghiep\",\"C\":17,\"T\":0,\"CA\":0,\"ND\":\"phonoi2000bn\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"banthannongnghiep\",\"C\":67,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"banthannongnghiep\",\"NN\":\"fb.737216783088623\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.737216783088623\",\"C\":35,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"fb.737216783088623\",\"evt\":\"ac\",\"Arr\":[36,35]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.737216783088623\",\"NN\":\"phonoi2000bn\",\"C\":19,\"T\":0,\"CA\":0,\"ND\":\"fb.737216783088623\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"phonoi2000bn\",\"C\":81,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"phonoi2000bn\",\"NN\":\"banthannongnghiep\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"banthannongnghiep\",\"C\":82,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"banthannongnghiep\",\"NN\":\"fb.737216783088623\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.737216783088623\",\"C\":34,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"fb.737216783088623\",\"NN\":\"phonoi2000bn\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"phonoi2000bn\",\"evt\":\"ac\",\"Arr\":[68,34]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"phonoi2000bn\",\"NN\":\"banthannongnghiep\",\"C\":57,\"T\":0,\"CA\":0,\"ND\":\"phonoi2000bn\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"banthannongnghiep\",\"C\":77,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"banthannongnghiep\",\"evt\":\"ac\",\"Arr\":[80,77]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"banthannongnghiep\",\"NN\":\"fb.737216783088623\",\"C\":27,\"T\":0,\"CA\":0,\"ND\":\"banthannongnghiep\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.737216783088623\",\"C\":39,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"fb.737216783088623\",\"NN\":\"phonoi2000bn\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"phonoi2000bn\",\"evt\":\"ac\",\"Arr\":[40,39]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"phonoi2000bn\",\"NN\":\"banthannongnghiep\",\"C\":72,\"T\":0,\"CA\":0,\"ND\":\"phonoi2000bn\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"banthannongnghiep\",\"C\":55,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"banthannongnghiep\",\"NN\":\"fb.737216783088623\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"fb.737216783088623\",\"evt\":\"ac\",\"Arr\":[56,55]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"fb.737216783088623\",\"NN\":\"phonoi2000bn\",\"C\":1,\"T\":0,\"CA\":0,\"ND\":\"fb.737216783088623\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"phonoi2000bn\",\"C\":91,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"phonoi2000bn\",\"NN\":\"banthannongnghiep\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"banthannongnghiep\",\"C\":49,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"banthannongnghiep\",\"NN\":\"fb.737216783088623\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.737216783088623\",\"C\":64,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"fb.737216783088623\",\"NN\":\"phonoi2000bn\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"phonoi2000bn\",\"C\":84,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"phonoi2000bn\",\"NN\":\"banthannongnghiep\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"banthannongnghiep\",\"C\":26,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"banthannongnghiep\",\"NN\":\"fb.737216783088623\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.737216783088623\",\"C\":95,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"fb.737216783088623\",\"NN\":\"phonoi2000bn\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"phonoi2000bn\",\"C\":22,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"phonoi2000bn\",\"NN\":\"banthannongnghiep\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"N\":\"banthannongnghiep\",\"evt\":\"ac\",\"Arr\":[24,22]}");
//		addEventFromJSONString("{\"evt\":\"dc\",\"N\":\"banthannongnghiep\",\"NN\":\"fb.737216783088623\",\"C\":10,\"T\":0,\"CA\":0,\"ND\":\"banthannongnghiep\"}");
//		addEventFromJSONString("{\"evt\":\"bc\",\"N\":\"fb.737216783088623\",\"C\":62,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"np\",\"N\":\"fb.737216783088623\",\"NN\":\"phonoi2000bn\",\"C\":0,\"T\":0,\"CA\":0}");
//		addEventFromJSONString("{\"evt\":\"finish\",\"data\":\"{\"N\":\"fb.737216783088623\",\"C\":0,\"TC\":0,\"Arr\":[35,36,65,66,70,71,55,56,85,88,28,25,58,59,92,90,54,23,43,74],\"I\":74}\"}");
//		addEventFromJSONString("{\"evt\":\"kg\",\"data\":\"{\"N\":\"fb.737216783088623\",\"M\":2,\"ArrCuoc\":[],\"ArrE\":[],\"ArrMark\":[{\"A\":2189,\"N\":\"phonoi2000bn\"},{\"A\":2046,\"N\":\"banthannongnghiep\"},{\"A\":2640,\"N\":\"fb.737216783088623\"}],\"C\":\"Xuông\",\"CE\":\"Xuông\",\"G\":0}\"}");
			/**/


		// dummy me:ann2001
//		addEventFromJSONString ("{\"evt\":\"stable\",\"data\":\"{\"N\":\"abc\",\"M\":100,\"ArrP\":[{\"N\":\"tenkhacnhe\",\"Url\":\"ann2006\",\"AG\":320198,\"LQ\":0,\"VIP\":1,\"isStart\":true,\"IK\":0,\"sIP\":\"10.79.151.24\",\"G\":3,\"Av\":28,\"FId\":0,\"GId\":0},{\"N\":\"thangnt\",\"Url\":\"ann2005\",\"AG\":58193,\"LQ\":0,\"VIP\":2,\"isStart\":true,\"IK\":0,\"sIP\":\"10.79.151.24\",\"G\":3,\"Av\":31,\"FId\":0,\"GId\":0},{\"N\":\"ann2001\",\"Url\":\"ann2001\",\"AG\":3000,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"10.79.151.7\",\"G\":3,\"Av\":7,\"FId\":0,\"GId\":0}],\"Id\":6,\"T\":0,\"V\":0,\"AG\":10,\"S\":4}\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"ann2001\"}");
//		addEventFromJSONString ("{\"evt\":\"lc\",\"NName\":\"tenkhacnhe\",\"Arr\":[14,12,2,42,11,51,20,5,18]}");
//		addEventFromJSONString ("{\"N\":\"\",\"C\":45,\"evt\":\"fc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"evt\":\"hc\",\"Arr\":[45,46,47],\"A\":0,\"M\":50,\"NN\":\"\",\"AT\":1,\"DT\":20,\"CM\":65,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":36,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":65,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"evt\":\"hc\",\"Arr\":[23,36,49],\"A\":2,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":30,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"evt\":\"gc\",\"Arr\":{\"N\":\"tenkhacnhe\",\"Arr\":[45,46,47,44]},\"A\":2,\"M\":0,\"CM\":35,\"C\":44,\"NN\":\"\",\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":15,\"NN\":\"ann2001\",\"A\":0,\"M\":0,\"CM\":35,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":27,\"NN\":\"ann2001\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":42,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":0,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":9,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":65,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"evt\":\"hc\",\"Arr\":[9,35,48],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":65,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":52,\"NN\":\"ann2001\",\"A\":0,\"M\":0,\"CM\":65,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":19,\"NN\":\"ann2001\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":51,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":0,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"evt\":\"gc\",\"Arr\":{\"N\":\"thangnt\",\"Arr\":[23,36,49,10]},\"A\":0,\"M\":0,\"CM\":75,\"C\":10,\"NN\":\"\",\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":8,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":75,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":0,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":40,\"NN\":\"ann2001\",\"A\":1,\"M\":0,\"CM\":65,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":7,\"NN\":\"ann2001\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":12,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"evt\":\"hc\",\"Arr\":[26,39,52],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":120,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":0,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":50,\"NN\":\"ann2001\",\"A\":1,\"M\":0,\"CM\":65,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":32,\"NN\":\"ann2001\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":11,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":0,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":0,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":25,\"NN\":\"ann2001\",\"A\":1,\"M\":0,\"CM\":65,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":13,\"NN\":\"ann2001\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":2,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":0,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"evt\":\"hc\",\"Arr\":[4,17,30],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":135,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":40,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":135,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":0,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"evt\":\"gc\",\"Arr\":{\"N\":\"tenkhacnhe\",\"Arr\":[4,17,30,43]},\"A\":0,\"M\":0,\"CM\":70,\"C\":43,\"NN\":\"\",\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":21,\"NN\":\"ann2001\",\"A\":1,\"M\":0,\"CM\":70,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":1,\"NN\":\"ann2001\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":11,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":-50,\"CM\":-50,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"evt\":\"hc\",\"Arr\":[12,25,51],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":165,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":11,\"NN\":\"thangnt\",\"A\":0,\"M\":-50,\"CM\":115,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":0,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":28,\"NN\":\"ann2001\",\"A\":1,\"M\":0,\"CM\":70,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":31,\"NN\":\"ann2001\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2001\",\"C\":13,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":-50,\"CM\":-100,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":0,\"NN\":\"tenkhacnhe\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"tenkhacnhe\",\"C\":21,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":115,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"C\":0,\"NN\":\"thangnt\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"thangnt\",\"evt\":\"gc\",\"Arr\":{\"N\":\"tenkhacnhe\",\"Arr\":[12,25,51,38]},\"A\":0,\"M\":0,\"CM\":80,\"C\":38,\"NN\":\"\",\"NNCM\":0}");
//		addEventFromJSONString ("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"thangnt\",\"M\":17670,\"MD\":110,\"MB\":50,\"MF\":0,\"V\":1,\"AG\":75863,\"ArrCard\":[23,36,49,9,35,48],\"ArrBT\":[5],\"ArrBM\":[50]},{\"N\":\"tenkhacnhe\",\"M\":-12090,\"MD\":155,\"MB\":0,\"MF\":-20,\"V\":2,\"AG\":308108,\"ArrCard\":[45,46,47,26,39,52,4,17,30,12,25,51],\"ArrBT\":[1,9],\"ArrBM\":[50,-50]},{\"N\":\"ann2001\",\"M\":-2790,\"MD\":0,\"MB\":-510,\"MF\":-310,\"V\":5,\"AG\":210,\"ArrCard\":[],\"ArrBT\":[9,9,15],\"ArrBM\":[-50,-50,-410]}]\"}");

//		addEventFromJSONString ("{\"evt\":\"stable\",\"data\":\"{\"N\":\"abc\",\"M\":100,\"ArrP\":[{\"N\":\"ann2008\",\"Url\":\"ann2008\",\"AG\":261742,\"LQ\":0,\"VIP\":1,\"isStart\":true,\"IK\":0,\"sIP\":\"10.79.151.6\",\"G\":3,\"Av\":30,\"FId\":0,\"GId\":0},{\"N\":\"ann2002\",\"Url\":\"ann2002\",\"AG\":4000,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"10.79.151.7\",\"G\":3,\"Av\":9,\"FId\":0,\"GId\":0}],\"Id\":7,\"T\":0,\"V\":0,\"AG\":10,\"S\":4}\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"ann2002\"}");
//		addEventFromJSONString ("{\"evt\":\"lc\",\"NName\":\"ann2008\",\"Arr\":[25,41,13,9,11,48,28,52,6,43,12]}");
//		addEventFromJSONString ("{\"N\":\"\",\"C\":36,\"evt\":\"fc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"evt\":\"hc\",\"Arr\":[35,36,37,38],\"A\":0,\"M\":50,\"NN\":\"\",\"AT\":1,\"DT\":20,\"CM\":90,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"C\":24,\"NN\":\"ann2002\",\"A\":1,\"M\":0,\"CM\":90,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"C\":47,\"NN\":\"ann2002\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"C\":6,\"NN\":\"ann2008\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"C\":0,\"NN\":\"ann2008\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"C\":19,\"NN\":\"ann2002\",\"A\":1,\"M\":0,\"CM\":90,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"C\":23,\"NN\":\"ann2002\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"C\":25,\"NN\":\"ann2008\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"evt\":\"hc\",\"Arr\":[4,5,6],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":105,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"C\":19,\"NN\":\"ann2002\",\"A\":1,\"M\":0,\"CM\":105,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"evt\":\"hc\",\"Arr\":[23,24,25],\"A\":1,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":30,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"C\":41,\"NN\":\"ann2008\",\"A\":0,\"M\":0,\"CM\":30,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"C\":0,\"NN\":\"ann2008\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"C\":29,\"NN\":\"ann2002\",\"A\":1,\"M\":0,\"CM\":105,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"C\":40,\"NN\":\"ann2002\",\"A\":1,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"C\":28,\"NN\":\"ann2008\",\"A\":0,\"M\":0,\"CM\":30,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"C\":0,\"NN\":\"ann2008\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"C\":25,\"NN\":\"ann2002\",\"A\":1,\"M\":0,\"CM\":105,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"C\":32,\"NN\":\"ann2002\",\"A\":1,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2002\",\"C\":13,\"NN\":\"ann2008\",\"A\":0,\"M\":0,\"CM\":30,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2008\",\"evt\":\"hc\",\"Arr\":[8,21,34],\"A\":2,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":120,\"NNCM\":0}");


		// me: ann2010
//		addEventFromJSONString ("{\"evt\":\"stable\",\"data\":\"{\"N\":\"abc\",\"M\":100,\"ArrP\":[{\"N\":\"ann2009\",\"Url\":\"ann2009\",\"AG\":1077644,\"LQ\":0,\"VIP\":0,\"isStart\":true,\"IK\":0,\"sIP\":\"14.162.205.24\",\"G\":3,\"Av\":14,\"FId\":0,\"GId\":0},{\"N\":\"ann2010\",\"Url\":\"ann2010\",\"AG\":941515,\"LQ\":0,\"VIP\":0,\"isStart\":false,\"IK\":0,\"sIP\":\"14.162.205.24\",\"G\":3,\"Av\":22,\"FId\":0,\"GId\":0}],\"Id\":23,\"T\":0,\"V\":0,\"AG\":10,\"S\":4}\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"ann2010\"}");
//		addEventFromJSONString ("{\"evt\":\"lc\",\"NName\":\"ann2009\",\"Arr\":[42,27,25,41,29,40,14,18,15,7,21]}");
//		addEventFromJSONString ("{\"N\":\"\",\"C\":20,\"evt\":\"fc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":0,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":51,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":38,\"NN\":\"ann2010\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":21,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":0,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":37,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"hc\",\"Arr\":[25,38,51],\"A\":1,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":30,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":37,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":30,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":0,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":9,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":1,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"hc\",\"Arr\":[1,14,27],\"A\":1,\"M\":50,\"NN\":\"\",\"AT\":2,\"DT\":20,\"CM\":90,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":21,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":90,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":0,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":35,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":0,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":12,\"NN\":\"ann2010\",\"A\":2,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"gc\",\"Arr\":{\"N\":\"ann2010\",\"Arr\":[25,38,51,12,12]},\"A\":2,\"M\":0,\"CM\":100,\"C\":12,\"NN\":\"\",\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":7,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":100,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"evt\":\"hc\",\"Arr\":[7,20,46],\"A\":0,\"M\":50,\"NN\":\"ann2010\",\"AT\":1,\"DT\":10,\"CM\":65,\"NNCM\":50}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":37,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":65,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":22,\"NN\":\"ann2010\",\"A\":2,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":22,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":50,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"evt\":\"hc\",\"Arr\":[9,22,35],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":95,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":23,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":95,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":39,\"NN\":\"ann2010\",\"A\":2,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":18,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":50,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"evt\":\"hc\",\"Arr\":[5,18,44],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":110,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":47,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":110,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":45,\"NN\":\"ann2010\",\"A\":2,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":45,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":50,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"evt\":\"hc\",\"Arr\":[6,32,45],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":125,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":21,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":125,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":34,\"NN\":\"ann2010\",\"A\":2,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":39,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":50,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":0,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":43,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":125,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"hc\",\"Arr\":[21,34,47],\"A\":1,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":65,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"hc\",\"Arr\":[41,42,43],\"A\":2,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":80,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"gc\",\"Arr\":{\"N\":\"ann2010\",\"Arr\":[41,42,43,40]},\"A\":0,\"M\":0,\"CM\":85,\"C\":40,\"NN\":\"\",\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":29,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":85,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"evt\":\"hc\",\"Arr\":[28,29,30],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":140,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":2,\"NN\":\"ann2010\",\"A\":0,\"M\":0,\"CM\":140,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":26,\"NN\":\"ann2010\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":15,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":85,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":0,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":49,\"NN\":\"ann2010\",\"A\":0,\"M\":0,\"CM\":140,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":13,\"NN\":\"ann2010\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":39,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":85,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":0,\"NN\":\"ann2009\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2009\",\"C\":24,\"NN\":\"ann2010\",\"A\":0,\"M\":0,\"CM\":140,\"evt\":\"dc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"hc\",\"Arr\":[13,26,39],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":20,\"DT\":20,\"CM\":130,\"NNCM\":0}");
//		addEventFromJSONString ("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"ann2009\",\"M\":21390,\"MD\":190,\"MB\":50,\"MF\":-10,\"V\":1,\"AG\":1099034,\"ArrC\":[50],\"ArrD\":[7,20,46,9,22,35,5,18,44,6,32,45,28,29,30],\"ArrBT\":[1],\"ArrBM\":[50]},{\"N\":\"ann2010\",\"M\":-21390,\"MD\":180,\"MB\":0,\"MF\":0,\"V\":5,\"AG\":920125,\"ArrC\":[24],\"ArrD\":[25,38,51,12,1,14,27,21,34,47,41,42,43,40,13,26,39],\"ArrBT\":[10,5],\"ArrBM\":[-50,50]}]\"}");

//		addEventFromJSONString ("{\"evt\":\"ctable\",\"data\":\"{\"N\":\"\\u0000\",\"M\":2,\"ArrP\":[{\"N\":\"ann2010\",\"Url\":\"ann2010\",\"AG\":428381159,\"LQ\":0,\"VIP\":1,\"isStart\":true,\"IK\":0,\"sIP\":\"14.162.144.225\",\"G\":3,\"Av\":22,\"FId\":0,\"GId\":0}],\"Id\":4,\"T\":0,\"V\":0,\"AG\":10,\"S\":9}\"}");
//		addEventFromJSONString ("{\"evt\":\"jtable\",\"data\":\"{\"N\":\"ann2007\",\"Url\":\"ann2007\",\"AG\":577846487,\"LQ\":0,\"VIP\":1,\"isStart\":false,\"IK\":0,\"sIP\":\"14.162.144.225\",\"G\":3,\"Av\":12,\"FId\":0,\"GId\":0}\"}");
//		addEventFromJSONString ("{\"evt\":\"rtable\",\"Name\":\"ann2007\"}");
//		addEventFromJSONString ("{\"evt\":\"lc\",\"NName\":\"ann2010\",\"Arr\":[46,47,48,34,35,36,37,21,22,23,24]}");
//		addEventFromJSONString ("{\"N\":\"\",\"C\":41,\"evt\":\"fc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":50,\"NN\":\"ann2010\",\"A\":3,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"hc\",\"Arr\":[46,47,48],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":0,\"DT\":0,\"CM\":0,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"hc\",\"Arr\":[34,35,36,37],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":0,\"DT\":0,\"CM\":0,\"NNCM\":0}");
//		addEventFromJSONString ("{\"N\":\"ann2010\",\"evt\":\"hc\",\"Arr\":[21,22,23,24],\"A\":0,\"M\":0,\"NN\":\"\",\"AT\":0,\"DT\":0,\"CM\":0,\"NNCM\":0}");
//		addEventFromJSONString ("{\"evt\":\"finish\",\"data\":\"[{\"N\":\"ann2010\",\"M\":799,\"MD\":90,\"MB\":190,\"MF\":0,\"V\":1,\"AG\":428381958,\"ArrC\":[46,47,34,21,48,35,22,36,23,37,24,50],\"ArrD\":[46,47,48,34,35,36,37,21,22,23,24],\"ArrBT\":[5,6],\"ArrBM\":[50,140]},{\"N\":\"ann2007\",\"M\":-860,\"MD\":0,\"MB\":-75,\"MF\":-75,\"V\":2,\"AG\":577845627,\"ArrC\":[18,20,31,33,44,46,6,26,7,38,34],\"ArrD\":[],\"ArrBT\":[15],\"ArrBM\":[-75]}]\"}");
		// vtable
//		addEventFromJSONString ("{\"evt\":\"vtable\",\"data\":\"{\"N\":\"abc\",\"M\":2,\"ArrP\":[{\"N\":\"acmilan_kaka\",\"Url\":\"fb.10203686690727542\",\"AG\":29814,\"LQ\":0,\"VIP\":1,\"Mark\":55,\"isStart\":true,\"IK\":0,\"sIP\":\"14.177.223.114\",\"Arr\":[0,0,0,0,0,0],\"ArrH\":[[12,25,51],[47,48,149]],\"G\":3,\"Av\":0,\"FId\":10203686690727542,\"GId\":0},{\"N\":\"annguyenpro\",\"Url\":\"fb.1132002556818441\",\"AG\":5497,\"LQ\":0,\"VIP\":0,\"Mark\":0,\"isStart\":true,\"IK\":0,\"sIP\":\"14.177.223.114\",\"Arr\":[0,0,0,0,0,0,0,0,0,0,0],\"ArrH\":[],\"G\":3,\"Av\":0,\"FId\":1132002556818441,\"GId\":0}],\"Id\":23,\"T\":0,\"V\":0,\"AG\":10,\"S\":4,\"ArrD\":[104,16]}\"}");

		addEventFromJSONString ("{\"evt\":\"rjtable\",\"data\":\"{\"N\":\"Auto\",\"M\":2,\"ArrP\":[{\"N\":\"ann2005\",\"Url\":\"ann2005\",\"AG\":4086,\"LQ\":0,\"VIP\":1,\"Mark\":140,\"isStart\":true,\"IK\":0,\"sIP\":\"113.190.140.235\",\"Arr\":[0,0,0],\"ArrH\":[[12,25,51],[43,44,45],[107,20,33],[22,23,24]],\"G\":3,\"Av\":31,\"FId\":0,\"GId\":0},{\"N\":\"ann2010\",\"Url\":\"ann2010\",\"AG\":22396,\"LQ\":0,\"VIP\":2,\"Mark\":-50,\"isStart\":true,\"IK\":0,\"sIP\":\"113.190.140.235\",\"Arr\":[11,27,35,1,2,50,28,29,47,4,38],\"ArrH\":[],\"G\":3,\"Av\":22,\"FId\":0,\"GId\":0}],\"Id\":11,\"T\":0,\"V\":0,\"AG\":100,\"S\":4,\"CN\":\"ann2005\",\"CT\":20,\"CA\":0,\"ArrD\":[17,19,13,48]}\"}");
		addEventFromJSONString ("{\"N\":\"ann2005\",\"C\":0,\"NN\":\"ann2005\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
		addEventFromJSONString ("{\"N\":\"ann2005\",\"C\":31,\"NN\":\"ann2010\",\"A\":1,\"M\":0,\"CM\":140,\"evt\":\"dc\"}");
		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":3,\"NN\":\"ann2010\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
		addEventFromJSONString ("{\"N\":\"ann2010\",\"C\":38,\"NN\":\"ann2005\",\"A\":0,\"M\":-50,\"CM\":-100,\"evt\":\"dc\"}");
		addEventFromJSONString ("{\"N\":\"ann2005\",\"C\":0,\"NN\":\"ann2005\",\"A\":0,\"M\":0,\"CM\":0,\"evt\":\"bc\"}");
		addEventFromJSONString ("{\"N\":\"ann2005\",\"evt\":\"gc\",\"Arr\":{\"N\":\"ann2005\",\"Arr\":[43,44,45,46]},\"A\":0,\"M\":0,\"CM\":145,\"C\":46,\"NN\":\"\",\"NNCM\":0}");
		updateListItem (eventList);
	}

	void addEventFromJSONString (string input)
	{
		eventList.Add (input.Replace ("ann2010", GameApplication.user.name));
	}
	
	public void updateListItem (List<string> eventList)
	{
		foreach (Transform child in transform) {
			GameObject.Destroy (child.gameObject);
		}
		
		foreach (string eventObject in eventList) {
			AddNewItem (eventObject);
		}
	}
	
	public void AddNewItem (string eventObject)
	{
		RectTransform rect = (RectTransform)Instantiate (EventItem);
		rect.transform.SetParent (this.transform, false);
		
		Text text = rect.Find ("Text").GetComponent<Text> ();
		text.text = eventObject;
		text.fontSize = 18;
		
		Button button = rect.GetComponent<Button> ();
		button.onClick.AddListener (delegate {
			var gameData = JSONNode.Parse (text.text);

			GameTransportPacket gameTransportPacket = new GameTransportPacket ();
			gameTransportPacket.tableid = 1111;
			gameTransportPacket.gamedata = Utils.getBytes (gameData.ToString ());
			
			GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
			Debug.Log ("event clicked."); 
		}); 
		
	}

	public void handleNext() {
		if(index< eventList.Count){
			var gameData = JSONNode.Parse (eventList[index++]);
			
			GameTransportPacket gameTransportPacket = new GameTransportPacket ();
			gameTransportPacket.tableid = 1111;
			gameTransportPacket.gamedata = Utils.getBytes (gameData.ToString ());
			
			GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
		}

	}

	public void autoHandle() {
		index = 0;
		{
			var gameData = JSONNode.Parse (eventList[index++]);
			
			GameTransportPacket gameTransportPacket = new GameTransportPacket ();
			gameTransportPacket.tableid = 1111;
			gameTransportPacket.gamedata = Utils.getBytes (gameData.ToString ());
			
			GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);

		}
		while(index < 4){
			var serviceData = JSONNode.Parse (eventList[index++]);

			ServiceTransportPacket packet = new ServiceTransportPacket();
			packet.servicedata = Utils.getBytes (serviceData.ToString ());

			ServiceTransportPacketProcessor.handleServiceTransportPacket(packet);
		}
		{
			var gameData = JSONNode.Parse (eventList[index]);
			
			GameTransportPacket gameTransportPacket = new GameTransportPacket ();
			gameTransportPacket.tableid = 1111;
			gameTransportPacket.gamedata = Utils.getBytes (gameData.ToString ());

			GameTransportPacketProcessor.handleGameTransportPacket (gameTransportPacket);
		}
		
	}
}
