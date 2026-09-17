#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string temp=s;
    sort(s.begin(),s.end());
    if(temp==s)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(temp[i]!=s[i])
            {
                for(int j=i+1;j<n;j++)
                {
                    if(s[i]==temp[j])
                    {
                        cout<<i+1<<" "<<j+1<<endl;
                        break;
                    }
                }
                break;
            }
        }
    }
}