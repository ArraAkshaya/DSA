//first in first out

#include<stdio.h>
#include<bits/stdc++.h>
#include<utility>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    cout<<q.pop()<<endl;
}