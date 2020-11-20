#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main()
{
	unordered_map<int, int>map1 {{1,1}, {2,2}, {4,4}};
	map<char, char>map2 {{'a','A'}, {'b','B'}, {'c','C'}};
	cout << map1[1] << " " << map1[2] << " " << map1[4] << " " << endl; // 1 2 4
	cout << map2['a'] << " " << map2['b'] << " " << map2['c'] << " " << endl; // A B C
} 
