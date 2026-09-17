
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int fp(int x,vector<int> &p)
{
    if(x<0)return -1;
    if(p[x]==x)return x;
    return p[x]=fp(p[x],p);
}
int main()
{
    long long n, m;
    cin >> n >> m;
    vector<int> temp(n), vis(n, -1);
    for (int i=0;i<n;i++)
      {
        cin>>temp[i];
        vis[i]=i;
      }
    sort(temp.begin(), temp.end());
    for(int i=0;i<m;i++)
    {
        ll tem;
        cin>>tem;
        int left=0,right=n-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(temp[mid]<=tem)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        right=fp(right,vis);
        if(right==-1)
        cout<<-1<<endl;
        else
        {
            cout<<(vis[right]==-1?-1:temp[vis[right]])<<endl;
        vis[right]=fp(right-1,vis);
    }
    }
}