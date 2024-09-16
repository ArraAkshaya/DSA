#include<stdio.h>
#include<bits/stdc++.h>
#include<utility>

using namespace std;

int main(){
    // vector<int> v1;
    // v1.push_back(1);  //one way to push element - most preferred(faster)
    // v1.emplace_back(2); //anther way to push element
    // v1.push_back(4);
    // v1.push_back(7);
    // cout<<v1[2]<<endl;

    // // another way to access elements in vectors - use iterators

    // vector<int>::iterator it = v1.begin(); //points to the begin of the vector

    // it++;
    // cout<<*(it)<<" ";
    // cout<<endl;

    // vector<int>::iterator it1 = v1.end(); //points to mem location right after the last element
    // // vector<int>::iterator it2 = v1.rend();//reverse end
    // // vector<int>::iterator it3 = v1.rbegin();//reverse begin

    // cout<<v1[0]<<" "<<v1.at(0); //same thing
    // cout<<endl;
    // cout<<v1.back()<<" ";
    // cout<<endl;

    // //to print the elements
    // for(vector<int>::iterator it = v1.begin();it!=v1.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // for(auto it = v1.begin();it!=v1.end();it++){  //short cut
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // for(auto it : v1){ //more shorter
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    vector<int>v = {1,2};
    v.insert(v.begin()+2,3); //inserts element at specified location
    for(auto it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+3,2,4);  //creates 2 copies of 4
    for(auto it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+4,700);
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+4); //erases the specified element
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> copy(2,50); //make two copies of 50
    v.insert(v.begin(),copy.begin(),copy.end());
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<v.size();

    v.clear();
    cout<<endl;
    cout<<v.empty();
    cout<<endl;
    return 0;
}