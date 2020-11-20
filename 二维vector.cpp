#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int> >arr(4, vector<int>(10)); // 4行10列
    cout << arr.size() << " " << arr[3].size() << endl; // 运行结果：4 10

    vector<vector<int> >arr1(4, vector<int>(10, 3)); // 4行10列，且初始化每个元素为3
    cout << arr1[3][3] << endl; // 运行结果：3

    vector<vector<int> >arr2(4, {1, 2, 3}); // arr2有4个元素，每个元素都初始化为一个数字{1，2，3}
    for(int i = 0; i < arr2.size(); i++)
    {
        for(int x : arr2[i])
            cout << x << " ";
        cout << endl;
    }
    // 运行结果：
    // 1 2 3
    // 1 2 3
    // 1 2 3
    // 1 2 3
}