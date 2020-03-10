#include <iostream>

using namespace std;
void fun(int *arr,int n,int& Min_ref, int& Max_ref)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<Min_ref)
            Min_ref=arr[i];
        if(arr[i]>Max_ref)
            Max_ref=arr[i];
    }
}
int main()
{
    int n = 11;
    int arr[n] = {-1,0,1,2,3,4,5,6,7,8,9};
    int Min = arr[0], Max = arr[0];
    fun(arr,n,Min,Max);
    cout << "Smallest number: " << Min << endl;
    cout << "Largest number: " << Max << endl;
}
