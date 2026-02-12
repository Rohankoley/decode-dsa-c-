#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[0]<<" ";

}