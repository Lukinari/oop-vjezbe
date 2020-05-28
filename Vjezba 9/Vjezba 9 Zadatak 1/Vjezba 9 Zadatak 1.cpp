#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;
template <typename first>
void templsort(first arr[], int siz)
{
    first temp;
    for (int x = 0; x < siz; x++)
        for (int y = x + 1; y < siz; y++)
        {
            if (arr[x] > arr[y])
            {
                temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
}
template <>
void templsort<char>(char arr[], int size)
{
    vector<char> upper;
    vector<char> lower;
    int m;
    for (int i = 0; i < size; i++)
    {
        if (isupper(arr[i]))
        {
            upper.push_back(arr[i]);
        }
        else
            lower.push_back(arr[i]);
    }
    sort(upper.begin(), upper.end());
    sort(lower.begin(), lower.end());
    //for (int i = 0; i < upper.size(); i++)
    //{
    //    cout << upper[i] << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < lower.size(); i++)
    //{
    //    cout << lower[i] << " ";
    //}
    //cout << endl;
    upper.push_back('0');
    lower.push_back('0');
    for (m = 0; m < size; m++)
    {
        if ((upper.at(0) != '0') && (lower.at(0) != '0'))
        {
            if (tolower(upper[0]) <= lower[0])
            {
                arr[m] = upper[0];
                upper.erase(upper.begin());
                //cout << arr[m] << " ";
            }
            else
            {
                arr[m] = lower[0];
                lower.erase(lower.begin());
                //cout << arr[m] << " ";
            }
        }
        else if (upper.at(0) == '0')
        {
            arr[m] = lower[0];
            lower.erase(lower.begin());
        }
        else if (lower.at(0) == '0')
        {
            arr[m] = upper[0];
            upper.erase(upper.begin());
        }
    }
}
int main()
{
    srand(time(NULL));
    int arr[] = {4,1,5,2,3,9,6,8,7,8,1,5,7,2,5,8,1,4,8,2};
    int siz = *(&arr + 1) - arr;
    cout << "Unsorted int array: ";
    for (int i = 0; i < siz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "  Sorted int array: ";
    templsort(arr, siz);
    for (int i = 0; i < siz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    char carr[26];
    int csiz = *(&carr + 1) - carr;
    cout << "Unsorted char array: ";
    for (int i = 0; i < csiz; i++)
    {
        if(i%2)
            carr[i] = 'a' + rand() % 26;
        else
            carr[i] = 'A' + rand() % 26;
        cout << carr[i] << " ";
    }
    cout << endl;
    templsort(carr, csiz);
    cout << "  Sorted char array: ";
    for (int i = 0; i < csiz; i++)
    {
        cout << carr[i] << " ";
    }
}
