#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s="ABXYZYDG";
    string str="";
    int n=s.length();
    for(int j=0;j<n;j++){
        if(s[j]>='X'){
            str.push_back(s[j]);
        }
    }
    
    for(int i=0;i<str.length()-1;i++){
        bool flag=true;
        for(int j=0;j<str.length()-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    
}