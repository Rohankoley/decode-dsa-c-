#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str.length()==1) break;
        if(i==0){
            if(str[i]!=str[i+1]) count++;
        }
        else if(i==str.length()-1){
            
            if(str[i]!=str[i-1]) count++; 
        }
        else if(str[i-1]!=str[i]&&str[i]!=str[i+1]){
            count++;
        }
        
    }
    cout<<count;
}