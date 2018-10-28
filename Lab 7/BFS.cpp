#include<bits/stdc++.h>
using namespace std;

int visited[400];
int level[100];
vector<int>ed[400];

void BFS(int st)
{
	queue<int>q;
	q.push(st);
	visited[st] = 1;
	level[st] = 0;
	
	cout<<"Visited Nodes: "<<st<<" ";
	
	while(!q.empty())
	{
		int f = q.front();
		q.pop();
		for(int i=0;i<ed[f].size();i++)
		{
			cout<<" size of f = "<<ed[f].size()<<" ";
			int v = ed[f][i];
			if(!visited[v])
			{
				cout<<v<<" ";
				visited[v] = 1;
				q.push(v);
				level[v] = level[f] + 1;	
			}	
		}
	}
	cout<<endl;
}

int main()
{
	int parent;
	int child;
	int test;
	
	cin>>test;
	
	while(test--)
	{
		cin>>parent>>child;
		ed[parent].push_back(child);	
	}
	for()
	
	for(int i=0;i<400;i++)
	{
		visited[i] = 0;
		level[i] = 0;
	}
	
	int start;
	cin>>start;
	
	BFS(start);
	
	return 0;
}
