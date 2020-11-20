#include<iostream>
#include<string>
using namespace std;

int main()
{   
    string s = "asdf123";
    cout << s.substr(4) << endl; // 从4位置（包含4）起截取之后的所有字符成一个字串
    // 运行结果：123
    cout << s.substr(1, 4) << endl; // 从1位置（包含1）起截取4个字符组成的字串
    // 运行结果：sdf1

    int a = 12; double b = 13.12; 
    s = to_string(a); 
    cout << s << endl; // 运行结果：12
    s = to_string(b); 
    cout << s << endl; // 运行结果：13.120000

    s = "14.12";
    int aa = stoi(s); 
    float bb = stof(s); 
    double cc = stod(s); 
    cout << aa << endl; // 运行结果：14
    cout << bb << endl; // 运行结果：14.12
    cout << cc << endl; // 运行结果：14.12
}