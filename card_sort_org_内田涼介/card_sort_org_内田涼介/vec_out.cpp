#include"card_sort.h"

void Card_Sort::vectorout(vector<int> v) const
{
	int len;
	len = v.size();


	for (int i = 0; i < len; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}