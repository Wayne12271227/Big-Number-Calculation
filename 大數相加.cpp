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
總結
這個程式碼的流程就是：

輸入兩個大數字字串。
根據大小決定順序，並反轉字串。
將字元轉成數字後逐位相加。
處理進位。
反轉回來並輸出結果。
希望這樣的說明讓你更了解這段程式碼！







*/