#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void calculateBig();

int main()
{
	calculateBig();


	return 0;
}

void calculateBig()
{
	string a;
	string b;

	cin >> a;
	cin >> b;

	string big;
	string small;

	if (a.size() > b.size())
	{
		big = '0' + a; small = b;
	}
	else
	{
		big = '0' + b; small = a;
	}

	reverse(big.begin(), big.end());
	reverse(small.begin(), small.end());


	int i = 0;


	for (i = 0; i < small.length(); i++)
		small[i] -= '0';

	for (i = 0; i < big.length(); i++)
		big[i] -= '0';


	for (i = 0; i < small.length(); i++)
		big[i] = (big[i] + small[i]);

	for (i = 0; i < big.length(); i++)
	{
		big[i + 1] = big[i + 1] + big[i] / 10;
		big[i] %= 10;
		big[i] += '0';
	}

	reverse(big.begin(), big.end());

	if (big[0] == '0') big.erase(0, 1);

	cout << big << endl;
}


/*
�`��
�o�ӵ{���X���y�{�N�O�G

��J��Ӥj�Ʀr�r��C
�ھڤj�p�M�w���ǡA�ä���r��C
�N�r���ন�Ʀr��v��ۥ[�C
�B�z�i��C
����^�Өÿ�X���G�C
�Ʊ�o�˪��������A��F�ѳo�q�{���X�I







*/