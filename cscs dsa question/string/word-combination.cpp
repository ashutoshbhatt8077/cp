#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve(int &count,map<string,int>&map,string &target,string current,int i,int n)
{
    if(i==n){
        return;
    }
    string temp;
    for(int j=i;j<n;j++)
    {
        temp+=target[j];
        if(map.find(temp)!=map.end())
        {
            if((current+temp)==target)
            {
                count=(count+1)%mod;
            }
            else{
            solve(count,map,target,current+temp,j+1);
            }
        }
    }
}
int main()
{
    string target;//the thing we have to create
    cin>>target;
    int n=target.size();//size of the target
    ll k;
    cin>>k;//length of the array from which we have to create the target
    map<string,int> str;//mapping  of strings
    for(int i=0;i<k;i++)//taking input of string
    {
        string it;
        cin>>it;
        str[it]=1;
    }
    int count=0;
    solve(count,str,target,"",0,n);//this funtion is for recursion of the string
    cout<<count<<endl;

}