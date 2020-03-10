#include <iostream>

using namespace std;
int& fun(int* arr,int i)
{
    return arr[i];
}
int main()
{
    int i = 2;
    int arr[10] ={0,1,2,3,4,5,6,7,8,9};
    fun(arr,i)+=1;
    cout << "Ref " << n << endl;
    return 0;
}
