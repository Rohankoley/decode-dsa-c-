#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> v(5);
    // for(int i=0;i<5;i++){
    //     cin>>v[i];
    // }
    // for(int j=0;j<5;j++){
    //     cout<<v[j];
    // }
    
    vector<int> v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int j=0;j<5;j++){
        cout<<v[j];
    }
    


    
}