#include <iostream>
#include <math.h>
using namespace std;
struct kruznica
{
    float r = 0;
    float c[2];
};
int dist(kruznica mk, kruznica* arr)
{
    int num = 0;
    float x = mk.c[0];
    float y = mk.c[1];
    float rf = mk.r;
    float xc,yc,pit;
    for(int i = 0; i<2;i++)
    {
        xc = abs(abs(x) - abs(arr[i].c[0]));
        yc = abs(abs(y) - abs(arr[i].c[1]));
        pit = sqrt(pow(xc, 2)+pow(yc, 2));
        if (pit == rf + arr[i].r || pit == abs(rf - arr[i].r))
			num++;
		else if (abs(rf - arr[i].r) < pit && rf + arr[i].r > pit)
			num++;
        else if(rf >= arr[i].r)
        {
            if (pit == rf)
                num++;
        }
        else if(rf < arr[i].r)
        {
            if (pit == arr[i].r)
                num++;
        }
    }
    return num;
}
int main()
{
    int n = 0;
    //cout << "Enter amount of circles: ";
    //cin >> n;
    kruznica mk;
    kruznica arr[3];
    //kruznica arr[n];

    mk.r = 9;
    mk.c[0] = 0;
    mk.c[1] = 0;/*
    cout << "Enter main r: ";
    cin >> mk.r;
    cout << "Enter main x: ";
    cin >> mk.c[0];
    cout << "Enter main y: ";
    cin >> mk.c[1];
    for(int j = 0; j < n;j++)
    {
        cout << "Enter r: ";
        cin >> arr[i].r;
        endl;
        cout << "Enter x: ";
        cin >> arr[i].c[0];
        endl;
        cout << "Enter y: ";
        cin >> arr[i].c[1];
        endl;
    }*/
    arr[0].r = 1;
    arr[0].c[0] = 3;
    arr[0].c[1] = 6;
    arr[1].r = 1;
    arr[1].c[0] = 6;
    arr[1].c[1] = 7;
    cout << "Amount of intersects: "<< dist(mk,arr) << endl;
}
