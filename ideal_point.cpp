#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int start=0;int end=0;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        if(l==k) 
        start++;
        if(r==k)
         end++;

    }
    if(start>0 && end>0)
    {
       
            cout<<"YES\n";
        
    }
    else
    {
        cout<<"NO\n";
    }
}

    return 0;
}