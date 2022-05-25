#include<bits/stdc++.h>
using namespace std;

int main()
{   vector<int> vt;
    int n,x,op,count=0;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        vt.emplace_back(x);
    }
    for(auto it:vt)
       op=op^it;
    while(op)
    { if(op&1)
        break;
      count++;
      op>>=1;
    }
    int x1=0,x2=0;
    for(auto it:vt)
    {  if(it&(1<<count)){
         x1^=it;
        }  
       else{
         x2^=it;
       }
    }
    cout<<x1<<x2;   
    return 0;
}