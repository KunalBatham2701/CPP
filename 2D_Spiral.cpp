#include<bits/stdc++.h>
using namespace std;

int main()
{  int col,row,a[100][100];
   cout<<"enter number of row\t";
   cin>>row;
   cout<<"enter number of col\t";
   cin>>col;
   for(int i=0 ; i<row ; i++)
      for(int j=0 ; j<col ; j++)
         cin>>a[i][j];
   
   int cstart=0,cend=col-1,rstart=0,rend=row-1;
   while(rstart<=rend && cstart<=cend)
   {  for(int i=cstart ; i<=cend ; i++)
         cout<<a[rstart][i]<<" ";
      rstart++;
      for(int i=rstart ; i<=rend ; i++)
         cout<<a[i][cend]<<" ";
      cend--;
      for(int i=cend ; i>=cstart; i--)
         cout<<a[rend][i]<<" ";
      rend--;
      for(int i=rend ; i>=rstart ; i--)
         cout<<a[i][cstart]<<" ";
      cstart++;
   }
   cout<<endl;

   for(int i=0 ; i<row ; i++)
   {  for(int j=0 ; j<col ; j++)
         cout<<a[i][j]<<" ";
      cout<<endl;
   }
   return 0;
}