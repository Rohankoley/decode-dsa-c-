#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter the  first string"<<endl;
    getline(cin,str);
    sort(str.begin(),str.end());
    string str1;
    cout<<"enter the  scnd string"<<endl;
    getline(cin,str1);
    sort(str1.begin(),str1.end());
    if(str==str1) cout<<true;
    else cout<<false;
}