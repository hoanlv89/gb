using UnityEngine;
using System.Collections;

namespace com.dst.Roulette
{
	public class Path
	{
		private string[] _sounds;
		private Vector3[] _points;
		private int _returnNumber;
		private float _timeSpin;
		private float _wheelSpeed;


		public Path (float wspeed, float tspin, int retnumber, Vector3[] p, string[] s)
		{
			_wheelSpeed = wspeed;
			_timeSpin = tspin;
			_returnNumber = retnumber;
			_points = p;
			_sounds = s;
		}

		public float WheelSpeed {
			get {
				return _wheelSpeed;
			}
		}

		public float timeSpin {
			get {
				return _timeSpin;
			}
		}
		
		public int returnNumber {
			get {
				return _returnNumber;
			}
		}
		public Vector3[] points {
			get {
				return _points;
			}
		}
		
		public string[] sounds {
			get {
				return _sounds;
			}
		}
	}
}

