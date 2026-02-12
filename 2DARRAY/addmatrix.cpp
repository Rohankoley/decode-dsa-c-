#include<iostream>
using namespace std;
#include <climits>
int main(){
    int a[2][3]={1,2,3,4,5,6};
    int b[2][3]={1,2,3,4,5,6};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[i][j]=a[i][j]+b[i][j];
        }
         
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
         
    }
}