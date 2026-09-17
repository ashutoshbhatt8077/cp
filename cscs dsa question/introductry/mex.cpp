
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<vector<int>> temp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        temp[i][0] = i;
        temp[0][i] = i;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            vector<int> tem(2*n,-1);
           for(int a=0;a<=i;a++)
           {
            tem[temp[a][j]]=1;
           }
           for(int a=0;a<=j;a++)
           {
            tem[temp[i][a]]=1;
           }
           for(int a=0;a<tem.size();a++)
           if(tem[a]==-1)
           {
             temp[i][j]=a;
           temp[j][i]=a;
           break;
           }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}