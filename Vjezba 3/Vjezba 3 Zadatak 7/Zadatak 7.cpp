#include <iostream>
#include <vector>
using namespace std;
vector<int> stuffing_bit(vector<int>& vec)
{
    vector<int> tempvec;
    int counter = 0;
    for(unsigned int k = 0;k < vec.size();k++)
    {
        if(counter == 5)
        {
            tempvec.push_back(0);
            tempvec.push_back(vec[k]);
            counter = 0;

        }
        else if(vec[k] == 0)
        {
            tempvec.push_back(vec[k]);
            counter = 0;
        }
        else
        {
            tempvec.push_back(vec[k]);
            counter++;
        }
    }
    return tempvec;
}
int main()
{
    int i;
    vector<int> newvec;
    vector<int> vec/* = {0,0,1,1,1,0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,1}*/; //testing codeword
    cout << "Enter either a 0 or a 1: " << endl;
    while(true)
    {
        cin >> i;
        if(i == 0 || i == 1)
            vec.push_back(i);
        else
            break;
    }
    newvec = stuffing_bit(vec);
    cout << "Normal data:  ";
    for(unsigned int l = 0; l < vec.size();l++)
        cout << vec[l];
    cout << endl;
    cout << "Stuffed data: ";
    for(unsigned int j = 0; j < newvec.size();j++)
        cout << newvec[j];
}
