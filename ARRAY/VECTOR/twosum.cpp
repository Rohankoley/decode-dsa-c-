#include<iostream>
#include<vector>
using namespace std;

int main(){
   int x;
   cout<<"enter terget"<<endl;
   cin>>x;
   vector<int> v;
   int n;
   cout<<"enter vector size"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    int m;
    cin>>m;
    v.push_back(m);
   }
   cout<<v.size();
   for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==7){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
   }

    
}