#include<stdio.h>
#include<bits/stdc++.h>
#include<utility>
using namespace std;

int main(){
    priority_queue<int> pq; //keeps the largest number at the top - maximum heap.
    pq.push(3);
    pq.push(5);
    pq.push(2);
    pq.push(6);
    pq.push(1);

    cout<<pq.top()<<endl;
    cout<<pq.pop()<<endl;
    cout<<pq.top()<<endl;

    priority_queue<int , vector<int>,greater<int>>pq1;
    pq1.push(2);
    pq1.push(5);
    pq1.push(1);
    cout<<pq1.top()<<endl;
    return 0;
}