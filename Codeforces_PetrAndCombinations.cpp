#include <bits/stdc++.h>
using namespace std;
int main()
{  int n,x,sum=0,check=0;
   cin>>n;
   vector<int>vt;
   for(int i=0 ; i<n ; i++)
   {  cin>>x;
      vt.emplace_back(x);
   }
   for(int i=0 ; i<(1<<n) ; i++){
     sum=0;
     for(int j=0 ; j<n ; j++){
       if(i&(1<<j))
         sum=sum+vt[j];
       else
         sum=sum-vt[j];
     }
     if(sum%360==0){
       check=1;
       break;
     }
   }
   if(check==1)
       cout<<"yes";
   else
       cout<<"no";
   return 0;
}