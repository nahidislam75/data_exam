#include<bits/stdc++.h>

using namespace std;

int vis[10001];
int dis[10001];
vector<vector<int>> a(10001);

void dfs(int node, int d)
{
	vis[node]=1;
	dis[node]=d;

	for(auto child: a[node])
	{
		if(vis[child]==0) dfs(child, dis[node]+1);
	}
	return ;
}

int main()
{
	int n, m, x, y, i, sv;

	cout << "Number of vertex : ";
	cin >> n;

	cout << "Number of edge : ";
	cin >> m;

	while(m--)
	{
		cin >> x >> y;

		a[x].push_back(y);
		a[y].push_back(x);
	}
	cout << "Enter the source vertex : ";
	cin >> sv;

    cout << "Distance from " << sv << " vertex : " << endl;

	dfs(sv, 0);

	for(i=1; i<=n; i++)
	{
		if(dis[i]!=0) cout << sv << "->" << i << ": " << dis[i] << endl;
	}

	return 0;
}