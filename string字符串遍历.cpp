#include<iostream>
#include<string>
using namespace std;

int main()

{
    string s = "sdffcgc";
    for(char x : s)
        cout << x;
    cout << endl;
    for(int i = 0; i < s.length(); i++)
        cout << s[i];
}

