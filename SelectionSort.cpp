#include<bits/stdc++.h>
using namespace std;
int main()
{  int size,temp;
   cout<<"enter the size\t";
   cin>>size;
   int arr[size];
   for(int i=0 ; i<size ; i++)
      cin>>arr[i];
   for(int i=0 ; i<size-1 ; i++)
   {  int min_index=i;
      for(int j=i+1 ; j<size ; j++)
      {  if(arr[j]<arr[min_index])
           min_index=j;
      }
      if(i!=min_index)
        swap(arr[min_index],arr[i]);
   }
    for(int i=0 ; i<size ; i++)
       cout<<arr[i]<<" ";
    return 0;
}