
#include <bits/stdc++.h>
using namespace std;
void solve(long long &count,vector<vector<char>>&temp,vector<int>&col,vector<int>&row,vector<int>&diar,vector<int>&dial,int i,int j)
{
    if(i==8)
    {
        count++;
        return;
    }
    for(int a=0;a<8;a++)
    {
        if(temp[i][a]!='*')
        {
            if(col[a]==0&&diar[i+a]==0&&dial[a-i+8]==0)
            {
                col[a]=1;
                diar[i+a]=1;
                dial[a-i+8]=1;
                solve(count,temp,col,row,diar,dial,i+1,a+1);
                col[a]=0;
                diar[i+a]=0;
                dial[a-i+8]=0;
            }
        }
    }
}
int main()
{
    vector<int>row(8,0),col(8,0),diar(16,0),dial(16,0);
    vector<vector<char>>temp(8,vector<char>(8));
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>temp[i][j];
        }
    }
    long long count=0;
    solve(count,temp,col,row,diar,dial,0,0);
    cout<<count<<endl;
}