#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
     cout<<a[i]<<"  ";
   }

}
int main(){
   vector<int> v;
   int n;
   cout<<"enter vector size"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    int m;
    cin>>m;
    v.push_back(m);
   }
   int i=0;
   int j=v.size()-1;
//    while(i<=j){
//     int temp =v[i];
//     v[i]=v[j];
//     v[j]=temp;
//     i++;
//     j--;
//    }
for(int i=0,j=v.size()-1;i<=j;i++,j--){
    v[i]=v[i]+v[j];
    v[j]=v[i]-v[j];
    v[i]=v[i]-v[j];
}
// reverse(v.begin(),v.end());


   display(v);
   

    
}