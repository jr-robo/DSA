#include<iostream>

using namespace std;

int main(){
	
	int a[100]={34,78,89,90,35,21,12,31,2,67};
	int i,j;
	for(i=0;i<10;i++){
	
	for(j=0;j<9;j++){
		if(a[j]>a[j+1]){
			int temp;
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	}
	
	for(i=0;i<9;i++){
		cout<<a[i]<<endl;
	}
	return 0;\
}
