#include<iostream>


using namespace std;


binary_search(int start,int end,int a[],int search){
	int i,m;
	   while(start<end)
   {
   

     m=(start+end)/2;

    if(search==a[m])
	{
	cout<<"Value is found "<<a[m]<<" at position "<<m+1;
	break;
   }
   else if(search<a[m])
   {
	end=m-1;
   }
   else if(search>a[m])
   {
	start=m+1;
   }
   
  }
    if(start>end){
   	cout<<"Value is not found";
   }
}
int main(){


int  a[100]={1,2,3,4,5,6,7,8,9.10,11,12,13,14,15,16,17,18,19,20};
int start=0,end=19,i,search=16,m;

   // for(i=0;i<20;i++)
//   while(start<end)
//   {
//   
//
//     m=(start+end)/2;
//
//    if(search==a[m])
//	{
//	cout<<"Value is found "<<a[m]<<" at position "<<m+1;
//	break;
//   }
//   else if(search<a[m])
//   {
//	end=m-1;
//   }
//   else if(search>a[m])
//   {
//	start=m+1;
//   }
//   
//  }
//    if(start>end){
//   	cout<<"Value is not found";
//   }
   
//*********using function***************//

binary_search(start,end,a,search);
return 0;
}
