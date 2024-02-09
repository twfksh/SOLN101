#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define rep(i,n) for(int i = 0; i < n; i++)
#define in_range(i,x,n) for(int i = x; i < n; i++)
#define endl "\n"
 
int32_t main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n; cin >> n;
    int sum = 0;
    rep(i,n-1) {
        int x; cin >> x;
        sum += x;
    }
    cout << (n*(n+1))/2 - sum << endl;
 
    return 0;
}