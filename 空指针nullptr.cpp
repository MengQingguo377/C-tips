#include<iostream>
using namespace std;

int main()
{
    int *p = nullptr; // 尽量使用nullptr代表空指针进行初始化
    int a[] = {1,2,3,4};
    p = a;
    while(p != a + 4)
        cout << *p++ << endl; // ++的优先级高于*
}