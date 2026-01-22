#ifndef CARDSORT
#define CARDSORT

#include<iostream>
#include<vector>

using namespace std;

class Card_Sort
{
private:
	vector<int> your_card01;
	vector<int> your_card02;
	vector<int> your_card03;
	vector<int> your_card04;

	int timecount;

	vector<int> trash_card;

	vector<int> sorted_card01;
	vector<int> sorted_card02;

	void display_card_now() const;
	int select_menu();
	void vectorout(vector<int> v) const;
	int card_move(int br_card);
public:
	//コンストラクタ
	Card_Sort();
	//ゲームをプレイする関数
	void game_play();
};

#endif // !CARDSORT

