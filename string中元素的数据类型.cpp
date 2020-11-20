#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main()
{
    string s = "abcd";
    cout << (typeid(s[2])==typeid(char)) << endl; // 输出：1
    cout << (typeid(s[2])==typeid(string)) << endl; // 输出：0
    // 说明string中元素的数据类型是char
}