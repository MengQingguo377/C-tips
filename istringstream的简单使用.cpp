#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string s = "123 234 345";
    string ss;
    istringstream is(s); // 将s转化为字符串流
    while (is >> s)
    {
        cout << s << endl;
    }
}
// 输出：
// 123
// 234
// 345