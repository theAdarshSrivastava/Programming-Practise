#include<bits/stdc++.h>
using namespace std;
void print(vector<int> vec)
{
    for(auto i:vec) 
    {
       cout <<i<<" ";
    }
}
void Reverse(vector<int> &v,int start,int end)
{
    while(start<end)
    {
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;   
    }
}
int main ()
{
   int i, j,temp,pass=0;
   vector<int> vec;
   int n;
   cin>>n;
   for(i = 0; i<n; i++) {
    int x;
    cin>>x;
    vec.push_back(x);
   }
   Reverse(vec,0,n-1);
   print(vec);
   return 0;
}
