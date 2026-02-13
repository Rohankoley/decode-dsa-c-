#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"enter numbers of rows 1st matrix"<<endl;
    cin>>m;
    cout<<"enter numbers of colums of 1st matrix"<<endl;
    cin>>n;
    int p,q;
    cout<<"enter numbers of rows 2nd matrix"<<endl;
    cin>>p;
    cout<<"enter numbers of colums of 2nd matrix"<<endl;
    cin>>q;
    if(n==p){
        int a[m][n];
        int b[p][q];
        cout<<"enter elements of first matrix"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"enter elements of 2nd matrix"<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        int c[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }


    }
    else{
        cout<<"the matrix can not be multiply"<<endl;
    }
}