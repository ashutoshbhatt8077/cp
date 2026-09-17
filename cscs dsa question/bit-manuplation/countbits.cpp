#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()// Function to count bits in an integer
{
    ll n;// Number till which we have to count bits
    cin>>n;
    ll count = 0;
    ll i = 0;
    while ((1LL << i) <= n) {
        ll totalPairs = (n + 1) / (1LL << (i + 1));// Count of complete pairs of 0s and 1s
        count += totalPairs * (1LL << i);// Each pair contributes i bits

        ll remainder = (n + 1) % (1LL << (i + 1));// Remainder after counting complete pairs
        count += max(0LL, remainder - (1LL << i));// Count bits in the remainder
        i++;
    }
    cout<<count<<endl; // Return the total count of bits
}
long long solve1(long long n) {
    if (n == 0) return 0;

    long long x = log2(n); // highest set bit position
    long long part1 = ((1LL << (x - 1)) * x); // sum till previous powers
    long long part2 = (n - (1LL << x)) + 1; // contribution from MSB set
    return part1 + part2 + solve1(n - (1LL << x));
}

int main()
{
   // solve(); // Call the solve function
    ll n;
    cin>>n;
   cout<<solve1(n)<<endl;
    return 0; // Return 0 to indicate successful execution
}