#include <iostream>
#include <vector>
using namespace std;
void fun(const vector<int> &vec)
{
    unsigned int siz = vec.size() - 1;
    vector<int> sumv(vec.size());
    int minv,maxv,j,k;
    for(j = 0;j < vec.size();j++)
    {
        sumv.at(j) = vec.at(j) + vec.at(siz);
        siz--;
    }
    /*for(unsigned int i = 0;i < sumv.size();i++)
        cout << sumv.at(i) << " "; test code*/
    minv = sumv.at(0);
    maxv = sumv.at(0);
    for(k = 0;k < sumv.size();k++)
    {
        if(minv > sumv.at(k))
            minv = sumv.at(k);
        if(maxv < sumv.at(k))
            maxv = sumv.at(k);
    }
    cout << "The largest sum is " << maxv << endl;
    cout << "The smallest sum is " << minv << endl;
}
int main()
{
    vector<int> vec = {4,8,1,9,15,45};
    fun(vec);
    return 0;
}
