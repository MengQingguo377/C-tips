#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int> >arr;
    arr.push_back({1,2,3,4});
    arr.push_back({5,6,7});
    arr.push_back({8,9});
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}