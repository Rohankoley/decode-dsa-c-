#include<iostream>
#include<cmath>
using namespace std;
 
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
    int m;
    cin>>m;
    for(int i=0;i<=m;i++){
        for(int j =0;j<=i;j++){
            cout<<combination(i,j)<<" ";

        }
        cout<<endl;
    }
    
    
}