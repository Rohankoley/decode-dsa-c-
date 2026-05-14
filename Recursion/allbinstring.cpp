#include<iostream>
#include<vector>
#include<string>
using namespace std;
int n=4;
void gen(string s){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    gen(s+'0');
    if(s.length()==0||s[s.length()-1]!='1'){
        gen(s+'1');
    } 
    
}
int main(){
    gen("");
   
}