#include<iostream>
using namespace std;
#include <climits>
int main(){
    int m,n;
    cout<<"enetr row number"<<endl;
    cin>>m;
    cout<<"enetr column number"<<endl;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int tarr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tarr[i][j]=arr[j][i];
        }
        cout<<endl;
         
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<tarr[i][j]<<" ";
        }
        cout<<endl;
         
    }
    
}