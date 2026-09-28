#include <bits/stdc++.h>
using namespace std;

#define f(i, s, e) for (long long i = s; i < e; i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define ub(hei, num) upper_bound(hei.begin(), hei.end(), num) - hei.begin()
#define lb(hei, num) lower_bound(hei.begin(), hei.end(), num) - hei.begin()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> temp(n, vector<char>(m));
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        vector<vector<char>> prev(n, vector<char>(m));

        int a, b;
        bool f = false;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> temp[i][j];
                if (temp[i][j] == 'A')
                {
                    a = i;
                    b = j;
                }
            }
        queue<pair<int, int>> q;
        q.push({a, b});
        vis[a][b] = true;
        vector<int> dr = {0, 0, -1, 1};
        vector<int> dc = {-1, 1, 0, 0};
        vector<char> dir = {'L', 'R', 'U', 'D'};
        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            int i = it.first, j = it.second;
            for (int o = 0; o < 4; o++)
            {
                int row = i + dr[o];
                int col = j + dc[o];
                if (row > -1 && row < n && col > -1 && col < m)
                {
                    if (temp[row][col] == 'B')
                    {

                        a = row;
                        b = col;
                        f = true;
                        prev[row][col] = dir[o];
                        break;
                    }
                    if (!vis[row][col] && temp[row][col] == '.')
                    {
                        prev[row][col] = dir[o];
                        vis[row][col] = true;
                        q.push({row, col});
                    }
                }
            }
            if(f)
            break;
        }
        if (f)
        {
            string ans="";
            while(temp[a][b]!='A')
            {
                ans+=prev[a][b];
                if(prev[a][b]=='L')
                {   
                    b++;
                }
                else if(prev[a][b]=='R')
                {
                    b--;
                }
                else if(prev[a][b]=='U')
                {
                    a++;
                }
                else
                {
                    a--;
                }
            }
            reverse(ans.begin(),ans.end());
            cout<<"YES"<<endl;
            cout<<ans.size();
            cout<<endl<<ans<<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}