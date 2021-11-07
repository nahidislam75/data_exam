#include<bits/stdc++.h>

using namespace std;

int vis[10001];
vector<vector<int>> a(10001);

void dfs(int node)
{
	vis[node]=1;

	cout << node << " ";

	for(auto child: a[node])
	{
		if(vis[child]==0) dfs(child);
	}
	return ;
}

int main()
{
	int n, m, x, y, i;

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
	for(i=1; i<=n; i++)
	{
		if(vis[i]==0) dfs(i), cout << endl;
	}

	return 0;
}