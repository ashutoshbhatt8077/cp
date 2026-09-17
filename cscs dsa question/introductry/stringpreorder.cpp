
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    long long left=1,right=0;
    bool f=true;
    for(long long i=left;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            long long j=i+1;
            while(j<s.size()&&s[j]==s[i])
            {
                j++;
            }
            if(j==s.size())
            {
                cout<<-1<<endl;
                f=false;
            }
            swap(s[i],s[j]);
        }
    }
    cout<<s<<endl;
}