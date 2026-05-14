 #include<iostream>
using namespace std;
int partition(int arr[],int st,int end){
	int pivotelement =arr[(st+end)/2];
	int count=0;
	for(int i=st;i<=end;i++){
        if(i==(st+end)/2) continue;
		if(arr[i]<=pivotelement) count++;
	}
	int pivot=count+st;
	swap(arr[(st+end)/2],arr[pivot]);
	int i=st;
	int j=end;
	while(i<pivot&&j>pivot){
		if(arr[i]<arr[pivot]) i++;
		else if(arr[j]>arr[pivot]) j--;
		else if(arr[i]>arr[pivot]&&arr[j]<=arr[pivot]){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}

	}
	return pivot;
}
int kthsmall(int arr[],int st,int end,int k){
	
	int pi=partition(arr,st,end);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return kthsmall(arr,pi+1,end,k);
	else return kthsmall(arr,st,pi-1,k);
	
}
int main(){
	int arr[]={5,1,8,2,7,6,3,4};
    int k=6;
	int n= sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
    cout<<endl;
	cout<<kthsmall(arr,0,n-1,k);
    
	
}