#include<iostream>
using namespace std;

int main()
{
    char ch = 'a';
    ch &= 0xDF; // 小写变大写
    cout << ch << endl; // 输出：A
    ch &= 0xDF; // 大写执行此操作还是大写
    cout << ch << endl; // 输出：A

    ch |= 0x20 ; // 大写变小写
    cout << ch << endl; // 输出：a
    ch |= 0x20 ; // 小写执行此操作还是小写
    cout << ch << endl; // 输出：a
}