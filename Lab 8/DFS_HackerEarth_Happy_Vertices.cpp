#include <bits/stdc++.h>
using namespace std;

vector<int>graph[100001];
bool visited[100001];
int parent[100001];

void dfs(int s)
{
    int i;
    visited[s]=true;
    
    for(i=0;i<graph[s].size();i++)
    {
        if(visited[graph[s][i]]==false)
        {
            parent[graph[s][i]]=s;
            dfs(graph[s][i]);
        }
    }
}
int main()
{
    int n,m,ct=0,x,y;
    cin>>n>>m;
    
    for(int i=0;i<m;i++)
    {
       cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
 
        if(visited[i]==false)
        {
            parent[i]=-1;
            dfs(i);
        }
    }
 
    for(int i=1;i<=n;i++)
    {
        if( parent[i]!=-1)
        {
           if(parent[parent[i]]==-1)
           {
             if(graph[i].size()-1 > graph[parent[i]].size())
             {
                ct++;
             }
           }
           else
           {
               if(graph[i].size() > graph[parent[i]].size())
               {
                ct++;
               }
           }
 
        }
 
    }
    cout<<ct<<endl;
}

