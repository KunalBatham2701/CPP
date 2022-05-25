#include<bits/stdc++.h>
using namespace std;

int main()
{   int n,x;
    cin>>n;
    vector<int>v1;
    for(int i=0 ; i<n ; i++){
       cin>>x;
       v1.emplace_back(x);
    }
  
    for(int i=0 ; i<(1<<n) ; i++)
    { for(int j=0 ; j<n ; j++){
         if(i&(1<<j))
           cout<<v1.at(j)<<" ";
       }
      cout<<endl;
    } 
    return 0;
}