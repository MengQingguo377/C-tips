#include<iostream>
using namespace std;

int main()
{
    int a = 17, b = -17; 
    int c = 4, d = -4;
    cout << (a & 1); // 按位与运算，奇数为true，偶数为false
    cout << (b & 1);
    cout << (c & 1);
    cout << (d & 1);
}