#include<iostream>
#include<cmath>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int add(int a , int b){
    return a+b;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        int i=1;
    for(int j=1;j<=n;j++){
        i=i*j;
    }
    return i;
    }
}
int combination(int n , int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    // pattern(4);
    // cout<<add(9,2)<<endl;
    // cout<<sqrt(9);
    // int n,r;
    // cout<< "enter n";
    // cin>>n;
    // cout<< "enter r";
    // cin>>r;
    // int nfact=fact(n);
    // int rfact=fact(r);
    // int nrfact=fact(n-r);
    
    cout<<combination(5,4);

    
}