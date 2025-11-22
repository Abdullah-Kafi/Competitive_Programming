///In the name of ALLAH, The Most Gracious and The Most Merciful
///Praise be to ALLAH

#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int sz = 0;
int ar[sz];
using ll = long long;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<int, int>> vpii;
typedef pair<int, int> pii;
typedef vector<bool> vbl;
typedef vector<pair<ll, ll>> vpll;
typedef pair<ll, ll> pll;
#define mem(var, x) memset((var), (x), sizeof(var))
#define PQ priority_queue
#define ff first
#define ss second
#define pb push_back
#define MP make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define el "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testCase int __; cin >> __; while(__--)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

vi path;
bool cycle;

vbl visited(100000, 0); 
vi adjList[100000];
vi parent(100000, -1);

void bfs(int src)
{
    queue<int> q; 
    q.push(src);

    visited[src] = true;
    parent[src] = -1;

    while (!q.empty())
    {
        int prnt = q.front();
        path.push_back(prnt);
        q.pop();

        for(int child : adjList[prnt])
        {
            if(visited[child] && child != parent[prnt])
            {
                cycle = true;
            }
            if(!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parent[child] = prnt;
            }
        }
    }
}

int main()
{
    int n, e; cin >> n >> e;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    cycle = false;
    bfs(1);
    
    if(cycle)
    {
        cout << "Cycle Ditected" << endl;
        for(auto x: path) cout << x << " ";
    }
    else cout << "Cycle not Ditected" << endl;
    return 0;
}