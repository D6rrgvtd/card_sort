#include"card_sort.h"

void Card_Sort::game_play()
{
	int br_card;
	int flag;

	while (1)
	{
		//カードの現状
		display_card_now();

		br_card = select_menu();
		if (br_card == -1)
		{
			break;
		}
		//カード選択
		flag = card_move(br_card);

		if (flag == 1)
		{
			display_card_now();
			cout << "Game clear!!" << endl;
			break;

		}
	}

}