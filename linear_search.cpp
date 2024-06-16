#include<iostream>

using namespace std;

linear_search(int a[],int n,int search){
	int i,k=0;
	for(i=0;i<n;i++){
	
	if(search==a[i]){
		cout<<"Value is found : "<<a[i]<<" at position : "<<i;
		k++;
		break;
	}
	
                   }
    if(k==0){
    	cout<<"Value is not found .";
	}
}

int main(){
//	int arr[100],i,n,x,k=0;
//	cout<<"Enter the size of range"<<endl;
//	cin>>n;
//	
//	cout<<"Enter the number: ";
//	for(i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	
//	cout<<"Enter the value you want to search :";
//	cin>>x;
//	
//	for(i=0;i<n;i++){
//		
//	if(x==arr[i])
//	{
//		cout<<"value is found  "<<arr[i]<<" at position "<<i+1;
//		k++;
//	}
//	
//	}
//	if(k==0)
//	{
//		cout<<"value is not found!!!";
//	}
//	
	
	
	
	
	// ************USING FUNCTION***************** //
	int arr[100],n,i,search;
	
	cout<<"Enter the size of array :"<<endl;
	cin>>n;
	cout<<"the size of array is :"<<n<<endl;
	
	cout<<"Enter tha value of arrays:";
	for(i=0;i<n;i++)
    {
	 
	  cin>>arr[i];
	
   }
   
   cout<<endl<<"Enter the Search number :";
   cin>>search;
   
   linear_search(arr,n,search);
   
	return 0;
}
