 #include<iostream>
 using namespace std;
 int fact(int n){
    int nfact=1;
    for(int i=2;i<=n;i++){
        nfact*=i;
    }
    return nfact;

 }
 int combination(int x,int y){
    int ncr = fact(x)/(fact(y)*fact(x-y));
 }

 int main(){
    int n;
    cout<<"enter n  "<<endl;
    cin>> n;
    int r;
    cout<<"enter r  ";
    cin>> r;
    // int nfact=1;
    // for(int i=2;i<=n;i++){
    //     nfact*=i;
    // }
    // int rfact=1;
    // for(int i=2;i<=r;i++){
    //     rfact*=i;
    // }
    // int nrfact=1;
    // for(int i=2;i<=n-r;i++){
    //     nrfact*=i;
    // }
    // int ncr;
    // ncr = nfact/(rfact *nrfact);
    // cout<<ncr<<endl;

    // int nfact=fact(n);
    // int rfact=fact(r);
    // int nrfact=fact(n-r);
    // int ncr =nfact/(nrfact*rfact);
    // cout<<ncr;


    cout<<combination(n,r);
    return 0;
}
  