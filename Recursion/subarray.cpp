#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subarray(vector<int> v,int arr[],int n,int indx){
    if(indx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subarray(v,arr,n,indx+1);
    if(v.size()==0||arr[indx-1]==v[v.size()-1]){
        v.push_back(arr[indx]); 
        subarray(v,arr,n,indx+1);
    }
    
}
int main(){
   int arr[]={1,2,3,4};
   int n=sizeof(arr)/sizeof(arr[0]);
   vector<int> v;
//    for(int i=0;i<n;i++){
//         for(int k=i;k<n;k++){
//             for(int j=i;j<=k;j++){
//                 cout<<arr[j];
//             }
//             cout<<endl;
//     }
    subarray(v,arr,n,0);
}