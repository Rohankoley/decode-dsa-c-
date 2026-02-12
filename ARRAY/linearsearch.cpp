#include <iostream>
using namespace std;

int main(){
    int n,x;
    cout<<"enter what to find";
    cin>>x;
    cout<< "enter the size of arr"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the  the element"<<endl;
    for(int k=0;k<n;k++){
       
        cin>>arr[k];
    }
    for(int j=0;j<n;j++){
        if(arr[j]==x){
            cout<<x<<"\n is present"<<endl;
            break;
        }
    }
   
    
}



