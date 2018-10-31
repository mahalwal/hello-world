#include <bits/stdc++.h>

using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define pii pair<int,int>
const int MAXN = 2e5+5;
// __uint128_t l, r;
// scanf("I64d %I64d", &l, &r);

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
      cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
      const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

const int MAXN = 1505;
vector <int> g[N+1];

int M, N;

bool maxbipartite(int bpGraph[][], int u, int )

int bipartite(int bpGraph[][])
{

}

int main()
{
    cin >> M >> N;

    int bpGraph[M][N];
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>bpGraph[i][j];
        }
    }

    bipartite(bpGraph);
}