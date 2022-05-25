#include<bits/stdc++.h>
using namespace std;
void TOH(int n,char src,char dest,char aux)
{  if(n==1)
   {  cout<<src<<" to "<<dest<<endl;
      return ;
   }
   TOH(n-1,src,aux,dest);
   cout<<src<<" to "<<dest<<endl;
   TOH(n-1,aux,dest,src);
   return;
}
int main()
{  int n;
   char src='A',dest='B',aux='C';
   cout<<"enter number of rings\t";
   cin>>n;
   TOH(n,src,dest,aux);
   return 0;
}