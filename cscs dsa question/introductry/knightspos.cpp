#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 long long n;
 cin>>n;
 queue<pair<int,int>>q;
 vector<vector<int>>board(n,vector<int>(n,-1));
 board[0][0]=0;
 q.push({0,0});
 vector<int> dr={-2,-1,1,2};
 vector<int> dc={-1,2,-2,1};
 while(!q.empty())
 {
    queue<pair<int,int>>p;
    while(!q.empty())
    {
        auto it=q.front();
        int i=it.first;
        int j=it.second;
        for(int a=0;a<4;a++)
        {
            int row=i+dr[a];
            int col=j+dc[a];
            if(row<n&&col<n&&row>-1&&col>-1)
            {
                if(board[row][col]==-1)
                {
                    board[row][col]=board[i][j]+1;
                    p.push({row,col});
                }
            }
        }
        for(int a=0;a<4;a++)
        {
            int row=i+dc[a];
            int col=j+dr[a];
            if(row<n&&col<n&&row>-1&&col>-1)
            {
                if(board[row][col]==-1)
                {
                    board[row][col]=board[i][j]+1;
                    p.push({row,col});
                }
            }
        }
        q.pop();
    
    }
    q=p;
 }
 for(int i=0;i<n;i++)
 {
 for(int j=0;j<n;j++)
 {
    cout<<board[i][j]<<" ";
 }
 cout<<endl;
}
}