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
 
    while(1) {
        cout << n << " ";
        if(n == 1) break;
        if(n & 1) n = n*3+1;
        else n /=2;
    }
 
    return 0;
}