#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string str[1001];
int n = 0;

int GetSum(string s)
{
	int length = s.length(), sum = 0;

	for (int i = 0; i < length; i++)
	{
		if (s[i] - '0' <= 9 && s[i] - '0' >= 1)
			sum += s[i] - '0';
	}
	return sum;
}

bool compare(string a, string b)
{
	if (a.length() < b.length())
	{
		return true;
	}
	else if (a.length() > b.length())
	{
		return false;
	}
	else
	{
		int acount = GetSum(a);
		int bcount = GetSum(b);

		if (acount != bcount)
			return acount < bcount;
		else
			return a < b;
	}
}

int main()
{

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}

	sort(str, str + n, compare);

	for (int i = 0; i < n; i++)
	{
		cout << str[i] << endl;
	}



	return 0;
}