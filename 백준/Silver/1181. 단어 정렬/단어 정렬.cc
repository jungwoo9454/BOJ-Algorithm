#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

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
		return a < b;
	}
}


int main()
{
	string s[20001];

	int count;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> s[i];
	}

	sort(s, s + count, compare);

	for (int i = 0; i < count; i++)
	{
		if (i > 0 && s[i] == s[i - 1])
			continue;
		else
			cout << s[i] << endl;
	}



	return 0;
}