#include<bits/stdc++.h>

using namespace std;

int vis[10001];
int lev[10001], cnt=0;
vector<int> a[10001];
queue<int> q;

void bfs(int node)
{
    vis[node]=1;
    q.push(node);

    while(!q.empty())
    {
        for(int child: a[q.front()])
        {
            if(vis[child]==0)
            {
                q.push(child);
                vis[child]=1;
                lev[child]=lev[q.front()]+1;
            }
        }
        q.pop();
    }
    return ;
}

int main()
{
	int n, m, i, k, x, y, root, des;

    cout << "Vertex number : " << endl;
    cin >> n;
    cout <<"Edges number : " << endl;
    cin >> m;

    while(m--)
    {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    cout << "Root node : " << endl;
    cin >> root;
    cout << "Tergated node : " << endl;
    cin >> des;

    bfs(root);

    cout << "Minimum edge distance : " << lev[des] << endl;

	return 0;
}