#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int beg,int mid,int end)
{  int l1=mid-beg+1,l2=end-mid;
   int left[l1],right[l2];
   for(int m=0 ; m<l1 ; m++)  left[m]=arr[beg+m];
   for(int m=0 ; m<l2 ; m++)  right[m]=arr[mid+m+1];
   int m=0,n=0,k=beg;
   while(m<l1 && n<l2)
   {  if(left[m]<right[n])
        arr[k++]=left[m++];
      else
        arr[k++]=right[n++];
   }
   while(m<l1) {arr[k++]=left[m++];}
   while(n<l2) {arr[k++]=right[n++];}
}
void mergesort(int arr[],int i,int j)
{  if(i<j){
    int mid=(i+j)/2;
    mergesort(arr,i,mid);
    mergesort(arr,mid+1,j);
    merge(arr,i,mid,j);
   }
   else 
    return;
}
int main()
{  int arr[]={21,3,10,11,50,14,23};
   int size=sizeof(arr)/sizeof(int);
   mergesort(arr,0,size-1);
   for(auto it:arr)
      cout<<it<<" ";
   return 0;
}