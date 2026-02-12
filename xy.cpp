#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter n\n"<<endl;
    cin>> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i;k++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    
    return 0;
}