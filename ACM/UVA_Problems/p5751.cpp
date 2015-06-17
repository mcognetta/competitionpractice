//5751 - Safety Grade

#include <stdlib.h>
#include <iostream>
#include <list>
using namespace std;


//do dfs to find if it is connected otherwise return 0
//return size of min cut
bool dfs(int r, int c, bool *g, bool *c)
{

	

	return false;
}

 main()
{
	int vertices, edges;

	while(cin >> vertices >> edges)
	{

		if(vertices == 0 || edges == 0)
		{
			cout << 0 << endl;
			continue;
		}

		int u,v;

		bool graph[vertices][vertices];
		bool check[vertices];
		for(int i = 0; i < edges, i++)
		{
			cin >> u >> v;
			graph[u][v] = 1;
			graph[v][u] = 1;
		}

	}

	bool g[10][5];
	dfs(g);
	return 0;
}