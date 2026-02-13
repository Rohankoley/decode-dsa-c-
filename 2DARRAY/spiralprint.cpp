#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"enter numbers of rows 1st matrix"<<endl;
    cin>>m;
    cout<<"enter numbers of colums of 1st matrix"<<endl;
    cin>>n;
    cout<<"enter elements of first matrix"<<endl;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    } 
    cout<<endl;
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        for(int i=minc;i<=maxc;i++){
            cout<<a[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr||minc>maxc) break;
        for(int j=minr;j<=maxr;j++){
            cout<<a[j][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr||minc>maxc) break;
        for(int k=maxc;k>=minc;k--){
            cout<<a[maxr][k]<<" ";
        }
        maxr--;
        if(minr>maxr||minc>maxc) break;
        for(int l=maxr;l>=minr;l--){
            cout<<a[l][minc]<<" ";
        }
        minc++;

    }

}