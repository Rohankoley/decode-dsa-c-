#include<iostream>
#include<string>
using namespace std;
void sus(string a,string b,int idx){
    if(idx==a.length()){
        cout<<b<<endl;
        return;
    }
    char ch=a[idx];
    sus(a,b+ch,idx+1);
    sus(a,b,idx+1);
}
int main(){
    string a ="abc";
    string b ="";
    sus(a,b,0);
   
}