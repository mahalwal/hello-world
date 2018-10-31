#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_cin() ios_base::sync_with_stdio(false)
const int INF = 214748360000;
const int MAX = 100002;
int n, m; // Keeps minimum distance to each node
vector<int> D(MAX, INF);//(2, INF);
vector<pair<int,int>> E[MAX]; // Adjacency list
vector<int> path(MAX, 0);//;(2, 0);

void dijkstra(int start, int end)
{
    // D.resize(n+1, INF);
    // path.resize(n+1, 0);
    for(int i = 1; i <= n; i++) D[i] = INF;
    D[1] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    // set<pair<int, int>> q;

    // q.insert({0,1});
    q.push({0,1});

    while(!q.empty())
    {
        pair<int,int> p = q.top();//*q.begin();
        // q.erase(q.begin());
        q.pop();

        int u = p.second, dist = p.first;
        if(dist > D[u]) 
            continue;

        for(pair<int,int> pr : E[u])
        {
            int v = pr.first;
            int next_dist = dist + pr.second;

            if(next_dist < D[v])
            {
                // q.erase({D[v], v});
                D[v] = next_dist;
                // q.insert({next_dist,v});
                q.push({next_dist, v});
                path[v] = u;
            }
        }
        if(u==end)
            break;
    }
    return;
}


main()
{

    fast_cin();
    cin.tie(0);

    int a, b, w, cur, j,temp;
    vector<int> ans;

    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        cin>>a>>b>>w;
        E[a].push_back({b, w});
        E[b].push_back({a, w});
    }
    dijkstra(1, n);

    if(path[n]==0) 
    {
        cout<<"-1";
        return 0;
    }

    cur = n;
    while(cur!=0) 
    {
        ans.push_back(cur);
        cur = path[cur];
    }

    reverse(ans.begin(), ans.end());
    for(auto i: ans) 
        cout <<i<< " ";

    return 0;
}