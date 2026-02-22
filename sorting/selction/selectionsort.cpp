#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6]={5,-4,12,3,1,4};
    int n=6;
    int i=0;
    while(i<n){
        int mini=i;
        int min=arr[i];
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}