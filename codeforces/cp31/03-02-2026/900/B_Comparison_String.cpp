#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        n--;
        int n;
        cin>>n;
        string s;
        cin>>s;
         
        int cnt=1;
        bool f;
        if(s[0]=='>')
        f=false;
        else
        f=true;
        int ans=2;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='>')
            {
                if(!f)
                cnt++;
                else
                cnt=1;
                f=false;
            }
            else
            {
                if(f)
                cnt++;
                else
                cnt=1;
                f=true;
            }
           ans=max(cnt+1,ans);
        }
        cout<<ans<<endl;
    }
}