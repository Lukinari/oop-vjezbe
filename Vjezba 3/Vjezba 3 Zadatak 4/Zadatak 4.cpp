#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void fun(string& str1, string& str2)
{
	int maxlen = 0;
	int neo[64][64];
	string finalstr;
	for (unsigned int i = 0; i < str1.size(); i++)
	{
		for (unsigned int j = 0; j < str2.size(); j++)
		{
			if (str1[i] == str2[j])
			{
				if (i == 0 || j == 0)
				{
					neo[i][j] = 1;
				}
				else
					neo[i][j] = neo[i - 1][j - 1] + 1;
				if (neo[i][j] > maxlen)
				{
					maxlen = neo[i][j];
					finalstr = ((str1.substr((i - maxlen + 1), (i + 1))));
				}
				else if (neo[i][j] == maxlen)
				{
					finalstr = ((str1.substr((i - maxlen + 1), (i + 1))));
				}
			}
			else
				neo[i][j] = 0;
		}
	}
	cout << "Longest substring: " << finalstr;
}
int main()
{
	string str1("mayormaynotbeatest");
	string str2("probablyatest");
    fun(str1, str2);
}
