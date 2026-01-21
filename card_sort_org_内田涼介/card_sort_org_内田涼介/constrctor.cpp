#include"card_sort.h"
#include <algorithm>
#include <random>

Card_Sort::Card_Sort()
{
	//札の初期
	your_card01 = { 1,1, 2,2, 3,3, 4,4, 5,5, 6,6, 7,7, 8,8, 9,9, 10,10 };
	your_card02 = { 1,1, 2,2, 3,3, 4,4, 5,5, 6,6, 7,7, 8,8, 9,9, 10,10 };
	your_card03 = { 1,1, 2,2, 3,3, 4,4, 5,5, 6,6, 7,7, 8,8, 9,9, 10,10 };
	your_card04 = { 1,1, 2,2, 3,3, 4,4, 5,5, 6,6, 7,7, 8,8, 9,9, 10,10 };

	//shuffle()に必要
	random_device rd;
	mt19937 g(rd());

	shuffle(your_card01.begin(), your_card01.end(), g);
	shuffle(your_card02.begin(), your_card02.end(), g);
	shuffle(your_card03.begin(), your_card03.end(), g);
	shuffle(your_card04.begin(), your_card04.end(), g);

	sorted_card01 = { 0 };
	sorted_card02 = { 0 };

	trash_card = {};

}