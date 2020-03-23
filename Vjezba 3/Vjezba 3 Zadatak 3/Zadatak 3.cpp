#include <iostream>
#include <string>
using namespace std;
void fun(string str,string sub)
{
    size_t fnd;
    while(true)
    {
        fnd = str.find(sub);
        if(fnd > str.size())
        {
            cout << "New string: " << str;
            return;
        }
        str.erase(fnd, sub.size());
    }
    cout << "New string: " << str;
}
int main()
{
    string str;
    string sub;
    cout << "Enter the main string: " << endl;
    getline(cin,str);
    cout << "Enter the substring: " << endl;
    cin >> sub;
    fun(str,sub);
    return 0;
}
