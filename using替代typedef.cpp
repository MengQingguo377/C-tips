#include<iostream>
#include<vector>
using namespace std;

// C �����ṩ�� typedef �ؼ��֣�������ʹ������Ϊ����ȡһ���µ����� 
using LL = long long;
using myvec = vector<LL>;

int main()
{
	LL a;
	cin >> a;
	myvec arr {a}; // ���룺12 
	cout << arr[0]; // �����12 
}
