#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,3,2,9,6};
    vector<int> v(5,0);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    int x=0;
    for(int i=0;i<5;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0;j<5;j++){
            if(v[j]==1) continue;
            else{
                if(arr[j]<min){
                    min=arr[j];
                    mindx =j;
                }

            }
        }
        arr[mindx]=x;
        x++;
        v[mindx]=1;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    

}