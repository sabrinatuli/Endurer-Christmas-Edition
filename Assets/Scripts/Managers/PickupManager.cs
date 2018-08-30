using UnityEngine;
using System.Collections;

public class PickupManager : MonoBehaviour {
	
	public int scoreNeededForExtraBullet = 2000;
	public int extraScoreNeededAfterEachPickup = 2000;

	public Pickup healthPickup;
	public Pickup bouncePickup;
	public Pickup piercePickup;
	public Pickup bulletPickup;
}
