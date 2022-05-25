#include <bits/stdc++.h>
using namespace std;
int main()
{  long long int x=0;
   int num,y,count=0;
   do
   {  cout<<"enter the number\t";
      cin>>num;
      x|=(1<<num);
      cout<<"press 1 to enter more data\t";
      cin>>y;
   } while (y==1);
   //to print the all element
   cout<<endl;
   while(x){
       if(x&1)
         cout<<count<<" ";
       x>>=1;
       count++;
   }
   return 0;
}