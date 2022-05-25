#include<bits/stdc++.h>
using namespace std;
int main()
{ int num,rem,base;
  string a;
  cout<<"Enter the number(in decimal number system)\t";
  cin>>num;
  cout<<"Enter the base in which you want to do conversion\t";
  cin>>base;
  int i=0;
  while(num>0)
  {  rem=num%base;
     if(rem>9)
       a[i]=55+rem; 
     else 
       a[i]=48+rem;
     i++;
     
     num=num/base;
  }
 
  for(int j=i-1 ; j>=0 ; j--)
     cout<<a[j];
   return 0;
}