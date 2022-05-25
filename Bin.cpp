#include<iostream>
using namespace std;

int main()
{ int num,a[100],j=0,c,bin,arrlen=0,num2;
  cin>>num;
  num2=num;
  while(num2>0)
  {  arrlen++;
     num2=num2/2;
  }
 //cout<<arrlen;
 for(int i=0 ; i<=num ; i++)
  { c=i;
     if(c==0)
     {  for(int l=1 ; l<arrlen ; l++)
           cout<<" ";
        cout<<"0";
     }
     while(c>0)
     {  bin=c%2;
        a[j]=bin;
        c=c/2;
        j++;
     }
     for(int l=1 ; l<=arrlen-j ; l++)
        cout<<" ";
     for(int k=j-1 ; k>=0 ; k--)
        cout<<a[k];
     cout<<endl;
     j=0;
  }
}
