#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        long long n,a,b;
        cin>>n;
        long long ans=0;
        while(n%6==0)
       { n/=6;
    ans++;}
        while(n%3==0)
       { n/=3;
    ans+=2;}
        if(n==1)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}