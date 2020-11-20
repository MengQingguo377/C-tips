#include<iostream>
#include<queue>
using namespace std;

int main()
{
    vector<int>arr{1,2,3};

    priority_queue<int, vector<int>, greater<int> >pq1; // 值小的优先级高，越先输出
    for(int e : arr) pq1.push(e);
    while(!pq1.empty()) // 输出结果：1 2 3 
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;

    
    priority_queue<int, vector<int>, less<int> >pq2; // 值大的优先级高，越先输出
    for(int e : arr) pq2.push(e);
    while(!pq2.empty()) // 输出结果：3 2 1
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << endl;
    
    priority_queue<int>pq3; // 默认情况下是less
    for(int e : arr) pq3.push(e);
    while(!pq3.empty()) // 输出结果：3 2 1
    {
        cout << pq3.top() << " ";
        pq3.pop();
    }
}