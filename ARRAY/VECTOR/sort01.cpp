#include<iostream>
#include<vector>
using namespace std;
// void sort01(vector<int>& v){
//     int cout0 =0;
//     int cout1=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0){
//             cout0++;
//         }else{
//             cout1++;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<cout0){
//             v[i]=0;
//         }else v[i]=1;
//     }
    
// }
void sort01(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        if(i==0){
            i++;
        }
        else if(j==1){
            j--;
        }
        else{
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}