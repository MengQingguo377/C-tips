#include<iostream>
#include<string>
#include<typeinfo> // 引入头文件
using namespace std;

struct Node
{
    int a;
    double b;
};

int main()
{
    int a;      cout << typeid(a).name() << endl;
    float b;    cout << typeid(b).name() << endl;
    double c;   cout << typeid(c).name() << endl;
    char ch;    cout << typeid(ch).name() << endl;
    string s;   cout << typeid(s).name() << endl;
    int *pa;    cout << typeid(pa).name() << endl;
    double *pd; cout << typeid(pd).name() << endl;
    string *ps; cout << typeid(ps).name() << endl;
    Node node;  cout << typeid(node).name() << endl;
    Node *pnode;  cout << typeid(pnode).name() << endl;
}

/*
输出结果:
i
f
d
c
Ss
Pi
Pd
PSs
4Node
P4Node
*/