#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n;
        cin>>n;
        vector<int>temp(n);
        vector<int> ans;
        for(auto &it:temp)cin>>it;
        for(int i=0;i<n;i++)
        {
            if(temp[i]!=i+1)
            {
                ans.push_back(temp[i]-(i+1));
            }
        }
        int an=ans[0];
        for(auto it:ans)an=gcd(an,it);
        cout<<an<<endl;
    }
}