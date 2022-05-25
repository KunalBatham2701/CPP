#include<bits/stdc++.h>
using namespace std;
void swap( int *a , int *b)
{  int temp;
   temp=*a;
   *a=(*b);
   *b=temp;
}
int partition(int arr[],int beg,int end)
{  int i=beg-1,j=beg,pivot;
   pivot=arr[end];
   while(j<end)
   {  if(arr[j]<pivot)
      { i++;
        swap(&arr[i],&arr[j]);
      }
      j++;
   }
   swap(&arr[i+1],&arr[end]);
   return (i+1);
}
void quicksort(int arr[],int beg,int end)
{  if(beg<end)
   {  int q=partition(arr,beg,end);
      quicksort(arr,beg,q-1);
      quicksort(arr,q+1,end);
   }
}
int main()
{ int arr[]={10,60,12,56,54,25,41};
  int size=sizeof(arr)/sizeof(int); 
  quicksort(arr,0,size-1);
  for(auto it:arr)
     cout<<it<<" ";
  return 0;
}