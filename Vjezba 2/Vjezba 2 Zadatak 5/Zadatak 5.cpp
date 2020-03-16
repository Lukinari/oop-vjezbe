#include <iostream>

using namespace std;
int* fun(int& refsiz)
{
    int siz = 0;
    int j = 10;
    int* arr;
    int* temp;
    arr = new int[j];
    int i;
    while(i)
    {
        cout << "Enter a number: ";
        cin >> i;
        if(i>0)
        {
        arr[siz] = i;
        siz++;
        }
        if(siz==(j))
        {
            temp = new int[j * 2];
            copy(arr, arr + j, temp);
            delete [] arr;
            arr = 0;
            j = j * 2;
            arr = new int[j];
            copy(temp, temp + (j/2), arr);
            delete [] temp;
            temp = 0;
        }
    }
    refsiz = siz;
    return arr;
}
int main()
{
    int tsiz;
    int k = 0;
    int* p_arr;
    p_arr = fun(tsiz);
    while(k<tsiz)
    {
        cout << p_arr[k] << " ";
        k++;
    }
    delete [] p_arr;
    p_arr = 0;
    return 0;
}
