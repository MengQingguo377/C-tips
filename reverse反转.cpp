#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr{1,2,3,4,5};
    reverse(arr.begin(), arr.end());
    for(int x : arr)
        cout << x << " ";
    cout << endl;
    // 运行结果：5 4 3 2 1

    vector<vector<int> >a{{1,2,3},
                          {4,5,6}};
    reverse(a.begin(), a.end());
    for(auto x : a)
    {
        for(auto xx : x)
            cout << xx << " ";
        cout << endl;
    }
    // 运行结果：
    // 4 5 6
    // 1 2 3

    string s = "12345";
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
    // 运行结果：54321
}