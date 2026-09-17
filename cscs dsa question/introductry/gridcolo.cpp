
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    vector<char> te={'A','B','C','D'};
    vector<vector<char>>temp(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char q;
            cin>>q;
            char t='Z',p='Z';
            if(i-1>=0)
            {
                t=temp[i-1][j];
            }
            if(j-1>=0)
            {
                p=temp[i][j-1];
            }
            for(int a=0;a<4;a++)
            {
                if(te[a]!=p&&te[a]!=t&&te[a]!=q)
                {
                    temp[i][j]=te[a];
                    break;
                }
            }
            cout<<temp[i][j];
        }
        cout<<endl;
    }
}