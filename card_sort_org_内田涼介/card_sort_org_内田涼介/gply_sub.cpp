#include"card_sort.h"

void Card_Sort::display_card_now() const
{
	cout << "----------ƒJ[ƒh‚ÌŒ»ó----------" << endl;
	if (your_card01.size() == 0)
	{
		cout << "¡‚ÍŽ‚¿ŽD1‚ª‚ ‚è‚Ü‚¹‚ñ" << endl;
	}
	else
	{
		cout << "Ž‚¿ŽD‚Ìƒgƒbƒv 1 : " << your_card01.back() << endl;
	}
	if (your_card02.size() == 0)
	{
		cout << "¡‚ÍŽ‚¿ŽD2‚ª‚ ‚è‚Ü‚¹‚ñ" << endl;
	}
	else
	{
		cout << "Ž‚¿ŽD‚Ìƒgƒbƒv 2 : " << your_card01.back() << endl;
	}
	if (your_card03.size() == 0)
	{
		cout << "¡‚ÍŽ‚¿ŽD3‚ª‚ ‚è‚Ü‚¹‚ñ" << endl;
	}
	else
	{
		cout << "Ž‚¿ŽD‚Ìƒgƒbƒv 3 : " << your_card01.back() << endl;
	}
	if (your_card04.size() == 0)
	{
		cout << "¡‚ÍŽ‚¿ŽD4‚ª‚ ‚è‚Ü‚¹‚ñ" << endl;
	}
	else
	{
		cout << "Ž‚¿ŽD‚Ìƒgƒbƒv 4 : " << your_card01.back() << endl;
	}

	cout << endl;

	if (trash_card.size() == 0)
	{
		cout << "ˆê”Ôã‚ÌŽÌ‚ÄŽD:" << endl;
	}
	else
	{
		cout << "ˆê”Ôã‚ÌŽÌ‚ÄŽD:" << trash_card.back() << endl;
	}
	cout << endl << endl;

	cout << "ƒJ[ƒh‚Ì•À‚Ñ01”Ô:@";
	vectorout(sorted_card01);
	cout << endl << "ƒJ[ƒh‚Ì•À‚Ñ02”Ô: ";
	vectorout(sorted_card02);

	cout << endl;
}


int Card_Sort::select_menu()
{
	int br_card;
	int menu;

	cout << "1:Ž‚¿ŽD1@‚ðŽæ‚é@2:Ž‚¿ŽD2@‚ðŽæ‚é@3:Ž‚¿ŽD3@‚ðŽæ‚é@4:Ž‚¿ŽD4@‚ðŽæ‚é 5:ŽÌ‚ÄŽD‚ð1–‡Žæ‚é 99:ƒQ[ƒ€‚ð‚â‚ß‚é" << endl;
	cin >> menu;
	if (menu == 1 && your_card01.size() > 0)
	{
		br_card = your_card01.back();
		your_card01.pop_back();
	}
	else if (menu == 2 && your_card02.size() > 0)
	{
		br_card = your_card02.back();
		your_card02.pop_back();
	}
	else if (menu == 3 && your_card03.size() > 0)
	{
		br_card = your_card03.back();
		your_card03.pop_back();
	}
	else if (menu == 4 && your_card04.size() > 0)
	{
		br_card = your_card04.back();
		your_card04.pop_back();
	}

	else if (menu == 5 && trash_card.size() > 0)
	{
		br_card = trash_card.back();
		trash_card.pop_back();
	}
	else if (menu == 99)
	{
		cout << "ƒQ[ƒ€‚ð’†Ž~‚µ‚Ü‚·" << endl;
		br_card = -1;
	}
	else
	{
		br_card = 0;
	}
	return br_card;
}

int Card_Sort::card_move(int br_card)
{
	int Cr_flag = 0;//ƒQ[ƒ€ƒNƒŠƒA‚Ìƒtƒ‰ƒbƒO

	if (br_card == sorted_card01.back() + 1)
	{
		sorted_card01.push_back(br_card);
	}
	else if (br_card == sorted_card02.back() + 1)
	{
		sorted_card02.push_back(br_card);
	}
	else if (br_card)
	{
		trash_card.push_back(br_card);
	}

	//---ƒQ[ƒ€ƒNƒŠƒA‚ÌðŒ------
	if (sorted_card01.back() == 10 && sorted_card02.back() == 10)
	{
		Cr_flag = 1;
	}
	
	return Cr_flag;
}