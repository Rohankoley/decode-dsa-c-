#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a){
    a[3]=100;
    
}

void change1(vector<int>& a){
    a[3]=100;
    
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(90);
    v.push_back(17);
    v.push_back(40);
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change1(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
}