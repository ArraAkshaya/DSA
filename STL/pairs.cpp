#include<stdio.h>
#include<bits/stdc++.h>
#include<utility>
using namespace std;

int main(){
    pair<int,int> p = {2,3};
    cout<<p.first<<endl;     //access first element
    cout<<p.second<<endl;    //access second element
    // we can also store pairs in pairs, like a nested pair
    pair<int,pair<int,int>> p2 = {1,{6,7}};
    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;

    pair<int,int> arr[] = {{1,2},{3,5},{5,2}};
    cout<<arr[1].second<<endl;
    return 0;
}