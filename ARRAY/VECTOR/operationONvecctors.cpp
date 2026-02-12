#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<v[0]<<v[4]; //pop back se capacity updatye nhi hota 
//just size update hota hai garbage value print hota hai
}