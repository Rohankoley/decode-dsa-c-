#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6]={5,-4,12,3,1,4};
    int n=6;
    int i=1;
    while(i<n){
        int j=i;
        while(j>=1){
            if(arr[j]>arr[j-1]){
                break;
            }
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;

        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}