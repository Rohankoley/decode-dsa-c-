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
void quicksort(int arr[],int st,int end){
	if(st>=end) return;
	int pivotidx=partition(arr,st,end);
	quicksort(arr,st,pivotidx-1);
	quicksort(arr,pivotidx+1,end);

}
int main(){
	int arr[]={5,1,8,2,7,6,3,4};
	int n= sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
	quicksort(arr,0,n-1);
    cout<<endl;
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
}