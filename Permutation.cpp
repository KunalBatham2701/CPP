#include<bits/stdc++.h>
using namespace std;
void printpermutation(vector<int> &ds , vector<int> &nums , vector<vector<int>> &ans , int freq[])
{  if(ds.size()==nums.size())
   {  ans.push_back(ds);
      return ;
   }
   for(int i=0 ; i<nums.size() ; i++)
   {  if(!freq[i])
      {  ds.push_back(nums[i]);
         freq[i]=1;
         printpermutation(ds,nums,ans,freq);
         freq[i]=0;
         ds.pop_back();
      }
   }
}
int main()
{  vector<int> nums={3,2,1,5},ds;
   int freq[nums.size()]={0};
   vector<vector<int>> ans;
   printpermutation(ds,nums,ans,freq);
   for(auto it:ans)
   {  for(auto it1:it)
         cout<<it1<<" ";
      cout<<endl;
   }
   cout<<"akku";
   return 0;
}