#include <bits/stdc++.h>
using namespace std;

void subset(int index,vector<int> &vt,int arr[],int size)
{  if(index==size){
     for(auto it:vt)
        cout<<it<<" ";
     cout<<endl;
     return;
   }
   vt.push_back(arr[index]);
   subset( index+1,vt,arr,size);
   vt.pop_back();
   subset( index+1,vt,arr,size);
}
int main()
{   int arr[]={1,2,3,3},size; 
    vector<int> vt;
    size=sizeof(arr)/sizeof(int);
    subset(0,vt,arr,size);
    return 0;
}