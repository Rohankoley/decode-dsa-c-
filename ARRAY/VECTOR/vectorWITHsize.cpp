#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> v(5);
    // cout<<v.size()<<" "<<v.capacity();
    
    
    vector<int> v(5,7);//each element have value 7
    cout<<v.size()<<" "<<v.capacity()<<endl;
    cout<<v[3];
    
} 