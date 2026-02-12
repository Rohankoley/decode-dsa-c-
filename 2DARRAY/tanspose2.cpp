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
    int temp;
    if(m==n){
        for(int i=0;i<n;i++){
            for(int j=0+i;j<m;j++){
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
        }
        cout<<endl;
         
    }
    else cout<<"give square matrix";

    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
         
    }
    
}