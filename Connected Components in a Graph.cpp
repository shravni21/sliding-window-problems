#include <bits/stdc++.h>
using namespace std;

/*-----------hello-----------*/

/*A-Z==65-90  a-z==97-122*/

#define MOD 1000000007
#define PI 3.1415926535897932384626
#define f first
#define se second
#define pb push_back
#define eb emplace_back
#define um unordered_map
#define us unordered_set
#define deb(x) cout << #x << ' ' << x << endl
#define rfor(i, a, b) for (ll i = a; i >= b; i--)
#define sfor(i, a, b) for (ll i = a; i < b; i++)
#define rot(a, x) for (auto &a : x)
#define max_ele(a) *max_element(a.begin(), a.end())
#define min_ele(a) *min_element(a.begin(), a.end())
#define take_vector(a) \
    for (auto &x : a)  \
        cin >> x;
#define take_array(a, n)        \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> a[i];            \
    }
#define ssort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
vi v[100001];
int vis[100001];
void dfs(int node)
{
    vis[node] = 1;
    for (int child : v[node])
        if (!vis[child])
            dfs(child);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, a, b;
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        cin >> a >> b, v[a].push_back(b), v[b].push_back(a);
    }
    int cnt = 0;
    for(int i=1;i<=n;i++) if (!vis[i]) dfs(i), cnt++;
    cout << cnt << endl;

    return 0;
}