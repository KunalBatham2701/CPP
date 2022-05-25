#include<bits/stdc++.h>
using namespace std;
struct node{
    int max,min;
};
 node dac_max_min(int arr[],int i,int j)
 {  struct node s1,s2,s3;
    if(i==j){
     s1.max=s1.min=arr[i];
     return s1;
    }
    else if(j-i==1)
    { s1.max=arr[i]>arr[j]?arr[i]:arr[j];
      s1.min=arr[i]<arr[j]?arr[i]:arr[j];
      return s1;
    }
    else
    { int mid=(i+j)/2;
      s2=dac_max_min(arr,i,mid);
      s3=dac_max_min(arr,mid+1,j);
      s1.max=s2.max>s3.max?s2.max:s3.max;
      s1.min=s2.min<s3.min?s2.min:s3.min; 
      return s1;
    }
}
int main()
{  int arr[20]={-2,5,1,-10,20,13,75,12,52,11};
   int i=0,size=sizeof(arr)/sizeof(int);
   struct node result=dac_max_min(arr,i,size-1);
   cout<<"maximun element is: "<<result.max<<endl;
   cout<<"minimun element is: "<<result.min;
   return 0;
}