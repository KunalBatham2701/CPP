#include <bits/stdc++.h>
using namespace std;
void rev(int num[],int i,int j)
{   int temp;
    if(i==j)
       return;
    else{
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
        rev(num,++i,--j);
    }
    
}
int main()
{  int num[]={1,2,3,4,5,6,7,8,9};
   int i=0,j=8;
   rev(num,i,j);
   for(auto it:num)
      cout<<it<<" ";
  return 0;
}