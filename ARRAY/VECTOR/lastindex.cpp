#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(90);
    v.push_back(17);
    v.push_back(40);
    v.push_back(10);
    v.push_back(40);
    v.push_back(1);
    int x=1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
    }
    

    
}