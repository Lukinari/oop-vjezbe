#include <iostream>
#include <vector>
#include <string>
using namespace std;
int vowel(char& isvow)
{
    if (isvow=='a' || isvow=='A' || isvow=='e' || isvow=='E' ||isvow=='i' || isvow=='I' || isvow=='o' || isvow=='O' ||isvow=='u' || isvow=='U')
    {
        return 1;
    }
    return 0;
}
int change(string& check)
{
    string str;
    if (vowel(check[0]))
    {
        check.push_back('h');
        check.push_back('a');
        check.push_back('y');
        return 0;
    }
    for (unsigned int i = 0; i < check.size(); i++)
    {
        if (!vowel(check[i]))
        {
            str[0] = check[i];
            check.erase(check.begin() + i);
            check.push_back(str[0]);
            str.clear();
            i--;
        }
        else
        {
            check.push_back('a');
            check.push_back('y');
            return 0;
        }
    }
}
string fun(vector<char>& vec)
{
    string tmp;
    string fin;
    unsigned int siz = vec.size();
    for (unsigned int i = 0; i < siz; i++)
    {
        if (vec[i] == ' ' && tmp.empty())
        {
            i++;
        }
        else if (isalpha(vec[i]))
        {
            tmp.push_back(vec[i]);
        }
        else if (vec[i] == ' ')
        {
            change(tmp);
            fin = fin + tmp;
            fin.push_back(' ');
            tmp.clear();
        }
    }
    change(tmp);
    fin = fin + tmp;
    if(isalpha(vec[siz - 1]))
    {
        return fin;
    }
    fin.push_back(vec[siz-1]);
    return fin;
}
int main()
{
    cout << "Enter a sentence: ";
    string str;
    getline(cin, str);
    vector<char> vec(str.begin(), str.end());
    cout << fun(vec);
}
