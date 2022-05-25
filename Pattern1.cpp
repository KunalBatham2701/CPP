#include<iostream>
using namespace std;
int factorial(int n)
{  int fact=1;
   while(n>0)
   {  fact=fact*n;
      n--;
   }
   return(fact);
}
int main()
{  int col,row,val,check=0;
   cout<<"enter number of rows/col\t";
   cin>>row;
   for(int i=0 ; i<row ; i++)
   {  for(int j=0 ; j<row ; j++)
      { if(check==0)
         {  for(int k=row-i-1 ; k>0 ; k--)
                cout<<" \t";
         }
         if(i>=j)
         { val=factorial(i)/(factorial(j)*factorial(i-j));
           cout<<val<<"\t\t";
           check=1;
         }
      }cout<<endl;  
      check=0;
   }
   return 0;
}