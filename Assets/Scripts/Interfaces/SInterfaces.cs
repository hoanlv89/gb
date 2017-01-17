using UnityEngine;
using System.Collections;

interface IUpdateUserInfo
{
	void updateInfo();
	void updateAvatar();
	bool showDailyBonus();
}

interface IPokerGameLiked 
{
	int maxTotalBetChipOfAPlayer {get; set;}
	Vector2 getViewPositionOfChipBetPlayer(Player player);
}

interface IPokerSceneLiked 
{
	void showOnTurnRequest(string msg);
	void removeOnTurnRequest();
}

interface IAutoReadyGame 
{
}

public abstract class SwapCardableGame: Game
{
	public bool cardsort1;// kieu xep bai

	public abstract Vector2 getCardPosRange (Card card);
	public abstract Card getLeftSideCard (Card card);
	public abstract Card getRightSideCard (Card card);
	public abstract void swapThisPlayerCardOnHand(Card card, Card rightSidecard);
}