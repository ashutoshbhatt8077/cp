#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long i=s;i<e;i++)
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int,int>
#define si set<int>
#define sc set<char>
#define ub(hei,num) upper_bound(hei.begin(), hei.end(), num) - hei.begin()
#define lb(hei,num) lower_bound(hei.begin(), hei.end(), num) - hei.begin()

void bfs(vector<vector<bool>>&vis,vector<vector<char>>&temp,int in,int jn)
{
    queue<pair<int,int>> q;
    q.push({in,jn});
    vector<int> r={-1,1,0,0};
    vector<int> c={0,0,-1,1};
    while(!q.empty())
    {
        int i=q.front().first,j=q.front().second;
        q.pop();
        for(int a=0;a<r.size();a++)
        {
            int row=i+r[a];
            int col=j+c[a];
            if(row<vis.size()&&row>-1&&col<vis[0].size()&&col>-1)
            {
                if(!vis[row][col]&&temp[row][col]=='.')
                {
                    // cout<<row<<" "<<col<<endl;
                    q.push({row,col});
                    vis[row][col]=true;
                }
            }
        }
    }
    // cout<<"a"<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<char>> temp(n,vector<char>(m));
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>temp[i][j];
        int cnt=0;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j]&&temp[i][j]=='.')
            {
                
                vis[i][j]=true;
                bfs(vis,temp,i,j);
                cnt++;
            }
        }
        cout<<cnt<<endl;
        
    }

    return 0;
}