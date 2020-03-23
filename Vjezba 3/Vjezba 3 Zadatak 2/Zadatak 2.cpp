#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <cctype>
using namespace std;

void fun(string& str)
{
    bool flag;
	int i,j;
	int k = 0;
	string temp("");
    if(str[str.size()-1] == '.')
    {
        str.erase(str.end()-1,str.end());
        flag = true;
    }
	for (i = 0, j = str.length()-1; i <= j; i++, j--)
	{
		temp[0] = tolower(str[i]);
		str[i] = str[j];
		str[j] = temp[0];
	}
	j = 0;
	for (unsigned int i = 0; i < str.length() - 1; i++)
	{
		if (isspace(str[i])== false)
			j++;
		else if (isspace(str[i]))
		{
			reverse(str.begin() + (i - j), str.begin() + i);
			j = 0;
		}
	}
	k = str.size()-1;
	while(str.at(k-1)!= ' ')
    {
        k--;
    }
    reverse(str.begin()+k,str.end());
	if (isalpha(str[0]))
		str[0] = toupper(str[0]);
	else if(isalpha(str[0])==false)
	{
		str[str.length() - 1] = str[0];
		str.erase(0,0);
	}
	if(flag)
        str.push_back('.');
}
int main()
{
	string str("Many test sentences were made.");
	fun(str);
	cout << str << endl;

}
