#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    int max=INT_MIN;
    int secondmax=INT_MIN;
    cout<< "enter the size of arr"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the  the element"<<endl;
    for(int k=0;k<n;k++){
               cin>>arr[k];
    }
    for(int j=0;j<n;j++){
        if(arr[j]>max){
            secondmax=max;
            max=arr[j];
        }
    }
    cout<<secondmax;
   
    
}



