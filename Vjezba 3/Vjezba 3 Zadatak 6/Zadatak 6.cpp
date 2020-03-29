#include <iostream>
#include <vector>
#include <list>
using namespace std;
int fun(list<int>& lst)
{
    list<int>::iterator Start = lst.begin();
    list<int>::iterator tmp = Start;
    for (Start; Start != lst.end(); Start++)
    {
        if (*Start == 0 || *Start == 1)
        {}
        else if ((!(*Start) % 2))
        {
            lst.insert(Start, 0);
        }
        else if ((*Start) % 2)
        {
            tmp = Start;
            tmp++;
            lst.insert(tmp, 1);
        }
    }
    list<int>::iterator End = lst.end();
    End--;
    Start = lst.begin();
    while (true)
    {
        if((*Start))
            Start++;
        if(!*End)
            End--;
        if (!*Start && *End)
            break;
    }
    int i = 0;
    while (Start != End)
    {
        Start++;
        i++;
    }
    return --i;
}
int main()
{
    list<int> lst(0,5);
    list<int>::iterator Start = lst.begin();
    int print;
    for (int i = 0; i <= 5; i++)
    {
        lst.push_back(i);
    }
    cout << "Original list: ";
    for (Start = lst.begin(); Start != lst.end(); Start++) //delete
    {
        cout << *Start << " ";
    }
    cout << endl;
    print = fun(lst);
    cout << "Modified list: ";
    for (Start = lst.begin(); Start != lst.end(); Start++) //delete
    {
        cout << *Start << " ";
    }
    cout << endl;
    cout << "Elements between first 0 and last 1: ";
    cout << print << endl;
}
