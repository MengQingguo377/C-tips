#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>arr(10, 1);
	cout << arr.size() << endl; // 10 
	arr.clear();
	cout << arr.size() << endl; // 0
}
