#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    // v.at(2)=12;
    // cout<<v[2];
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int j=0;j<v.size();j++){
        cout<<v.at(j)<<" ";
    }
    cout<<endl;
      
}