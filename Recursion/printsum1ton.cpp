#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    else return n+sum(n-1);

}
int pow(int a ,int b){
    if(b==0) return 1;
    int ans =pow(a,b/2);
    if(b%2==0) return ans*ans;
    else return ans*ans*a;
}
int main(){
    int a =pow(2,3);
    cout<<a<<endl;
}