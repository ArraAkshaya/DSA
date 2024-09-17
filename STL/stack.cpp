//Last in first out

#include<stdio.h>
#include<bits/stdc++.h>
#include<utility>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;

    stack<int> st1,st2;
    st1.swap(st2);
    return 0;
}