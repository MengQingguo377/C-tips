#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, char>mymap;
    bool f1 = (mymap.find(1) == mymap.end());
    cout << f1 << endl;
    mymap[1]; // 对映射表中不存在的键进行索引时，会建立该键，对应的值为默认值
    bool f2 = (mymap.find(1) == mymap.end());
    cout << f2 << endl;
}
/*
输出：
1
0
*/