#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

void addEdge(vector<int>* vec, int u, int v)
{
	vec[u].push_back(v);
	vec[v].push_back(u);
}

void printGraph(vector<int>* vec, int V)
{
	for (int count = 0; count < V; ++count)
	{
		cout << "Adjacency vertices of " << count << " is" << endl;

		for (auto elem: vec[count])
		{
			cout << elem << " ";
		}

		cout << endl;
	}
}

void bfs(vector<int>* vec, int V, int sourceNode)
{
	list<int> q;
	q.push_back(sourceNode);
	bool *visited = new bool[V];

	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}
	visited[sourceNode] = true;

	while(!q.empty())
	{
		int elem = q.front();
		q.pop_front();
		cout << elem << " ";

		for (auto node : vec[elem])
		{
			if (visited[node] == false)
			{
				q.push_back(node);
				visited[node] = true;
			}
		}
	}

	delete []visited;
}

void dfs(vector<int>* vec, int V, int sourceNode)
{
	bool *visited = new bool[V];
	stack<int> stackC;
	
	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}

	stackC.push(sourceNode);
	cout << endl;

	while(!stackC.empty())
	{
		int s = stackC.top();
		stackC.pop();

		if (visited[s] == false)
		{
			cout << s << " ";
			visited[s] = true;
		}

		for (auto elem : vec[s])
		{
			if (visited[elem] == false)
			{
				stackC.push(elem);
			}
		}
	}

	delete []visited;
}

int main(int argc, char *argv[])
{
	int V = 5;

	vector<int> vec[V];
	addEdge(vec, 0, 1);
    addEdge(vec, 0, 2);
    addEdge(vec, 1, 2);
    addEdge(vec, 2, 0);
    addEdge(vec, 2, 3);
    addEdge(vec, 3, 3);

	printGraph(vec, V);

	bfs(vec, V, 2);


	vector<int> vec1[V];
	addEdge(vec, 1, 0);
    addEdge(vec, 0, 2);
    addEdge(vec, 2, 1);
    addEdge(vec, 0, 3);
    addEdge(vec, 1, 4);
	dfs(vec, V, 0);
	return 0;
}