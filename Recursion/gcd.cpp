#include<iostream>
#include<vector>
#include<string>
using namespace std;
int hcf(int a,int b){
    int r=b%a;
    if(r==0) return a;
    hcf(r,a);

}
int main(){
    int a=45;
    int b=27;
    
    cout<<hcf(a,b);
   
}