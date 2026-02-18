#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s ="rohankoley";
    vector <int> arr(26,0);
    for(int i=0;i<s.length();i++){
        int ascii=(int)s[i];
        arr[ascii-97]++;

    }
    int mx=0;
    for(int j=0;j<26;j++){
        if(arr[j]>mx) mx=arr[j];
    }
    for(int k=0;k<26;k++){
        if(arr[k]==mx) cout<<(char)(k+97)<<mx<<endl;
    }

}