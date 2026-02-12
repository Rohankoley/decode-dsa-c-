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
   vector<int> v2(v.size());
   for(int i=0;i<v.size();i++){
    v2[i]=v[v.size()-1-i];
   }
//    for(int i=0;i<n;i++){
//     cout<<v2[i];
//    }
   display(v2);
   

    
}