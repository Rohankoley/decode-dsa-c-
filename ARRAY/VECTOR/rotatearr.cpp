#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
     cout<<a[i]<<"  ";
   }

}
void reversepart(int i , int j, vector<int>& v){
    while(i<=j){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
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
   int k;
   cout<<"enter k";
   cin>>k;
   if(k>n){
    k=k%n;
   }
   reversepart(0,v.size()-1-k ,v);
   reversepart(v.size()-k ,v.size()-1 ,v);
   reversepart(0,v.size()-1,v);


   display(v);
   

    
}