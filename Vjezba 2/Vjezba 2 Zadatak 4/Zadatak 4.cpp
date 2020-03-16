#include <iostream>

using namespace std;
int* fun(int n)
{
   int* arr;
   if(n>2)
   {
        arr = new int[n];
        arr[0] = 1;
        arr[1] = 1;
        for(int i = 2; i < n; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr;
   }
   else
        cout << "Please input a larger number." << endl;
}
int main()
{
    int n;
    cout << "Please enter a number larger than 2: ";
    cin >> n;
    int* p_arr;
    p_arr = fun(n);
    for(int j = 0; j < n;j++)
        cout << p_arr[j] << " ";
    delete [] p_arr;
    p_arr = 0;
    return 0;
}
