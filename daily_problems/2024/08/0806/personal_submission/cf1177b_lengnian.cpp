#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using i128 = __int128;
using ull = unsigned long long;
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
#define fir(i, a, b) for (int i = a; i <= b; i++)
#define pqi priority_queue<int> // 优先队列

#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    cin >> k;
    int x = 9;
    for (int i = 1;; k -= i++ * x, x *= 10)
    {
        if (k <= i * x)
        {
            x = (x / 9) + (--k / i);
            while (++k % i != 0)
            {
                x /= 10;
            }
            return cout << x % 10, 0;
        }
    }
    return 0;
}
