#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    int m;
    cin>>m;
    for(int i=0;i<=m;i++){
        int curr=1;
        for(int j =0;j<=i;j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);//ncr+1 ==ncr *n-r/r+1
            
        }
        cout<<endl;
    }
    
    
}