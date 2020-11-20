#include<iostream>
#include<vector>
using namespace std;

// C 语言提供了 typedef 关键字，您可以使用它来为类型取一个新的名字 
using LL = long long;
using myvec = vector<LL>;

int main()
{
	LL a;
	cin >> a;
	myvec arr {a}; // 输入：12 
	cout << arr[0]; // 输出：12 
}
