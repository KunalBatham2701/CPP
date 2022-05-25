#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void modify(char *s)
{  
   int space=0,l=strlen(s);
   if(s[0]==' ')
      space=1;
   for(int i=0 ; i<l ; i++){
       while((s[i]==' ')&&(space==1)){
         for(int j=i ; j<l-1 ; j++)
            s[j]=s[j+1];
         s[l-1]='\0';
         l--;
       }
       if(s[i]!=' ')
         space=0;
       else if(s[i]==' ')
         space=1;
   }
}
int main()
{  char a[200];
   gets(a);
   modify(a);
   puts(a);
   return 0;
}