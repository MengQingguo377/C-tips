#include<iostream>
using namespace std;

int main()
{
    cout << isalpha('A') << endl; // 1
    cout << isalpha('a') << endl; // 2
    cout << isalpha('1') << endl; // 0

    cout << isdigit('2') << endl; // 1
    cout << isdigit('a') << endl; // 0
}