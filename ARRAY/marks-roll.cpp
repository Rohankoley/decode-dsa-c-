#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter no of student"<<endl;
    cin>>n;
    int marks[n];
    for(int k=0;k<n;k++){
        cout<<"enter the marks of roll no"<< k<<endl;
        cin>>marks[k];
    }
    for(int i=0;i<10;i++){
        if(marks[i]<35){

            cout<<"marks less thn 35"<<i<<endl;
        }
    }
}



