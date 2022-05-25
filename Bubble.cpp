#include<bits/stdc++.h>
using namespace std;
int main()
{  int size,temp;
   cout<<"enter the size\t";
   cin>>size;
   int arr[size];
   for(int i=0 ; i<size ; i++)
      cin>>arr[i];
   for(int i=1 ; i<size-1 ; i++)
   {  int flag=0;
      for(int j=0 ; j<=size-1-i ; j++)
      {  if(arr[j]>arr[j+1])
         {  swap(arr[j],arr[j+1]);
            flag=1;
         }
      }
      if(flag==0)
        break;
   }
    for(int i=0 ; i<size ; i++)
       cout<<arr[i]<<" ";
    return 0;
}