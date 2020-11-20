#include<iostream>
using namespace std;

int main()
{
    int a[3] /* 这里可以不用写= */ {1, 2, 3};
    for(auto x : a) cout << x << endl;

    cout << endl;
    int b[5]; // 不进行初始化时，b中元素不确定
    for(auto x : b) cout << x << endl;
    
    cout << endl;
    int c[5] = {1}; // 初始化数组的部分元素时，其余元素填充默认值
    for(auto x : c) cout << x << endl;
}
/*
1        
2        
3        

0        
0        
268501009
0        
13961064

1
0
0
0
0

*/