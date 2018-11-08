   
#include <bits/stdc++.h>
using namespace std;
   
long long V,M,k,s;
//long long graph[100001][100001];
vector<long long>graph[100005];
   
// A utility function to find the vertex with minimum distance value, from 
// the set of vertices not yet included in shortest path tree 
long long minDistance(long long dist[], bool sptSet[]) 
{ 
   // Initialize min value 
   long long min = INT_MAX, min_index; 
   
   for (long long v = 0; v < V; v++) 
        if (sptSet[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v; 
   
   return min_index; 
}

// Function that implements Dijkstra's single source shortest path algorithm 
// for a graph represented using adjacency matrix representation 
void dijkstra(long long src) 
{ 
    long long dist[V];     // The output array.  dist[i] will hold the shortest 
                      // distance from src to i 
   
    bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest 
                     // path tree or shortest distance from src to i is finalized 
   
    // Initialize all distances as INFINITE and stpSet[] as false 
    for (long long i = 0; i < V; i++) 
        dist[i] = INT_MAX, sptSet[i] = false; 
   
    // Distance of source vertex from itself is always 0 
    dist[src] = 0; 
   
     // Find shortest path for all vertices 
    for (long long count = 0; count < V-1; count++) 
    { 
    	// Pick the minimum distance vertex from the set of vertices not 
    	// yet processed. u is always equal to src in the first iteration. 
    	long long u = minDistance(dist, sptSet); 
   
    	// Mark the picked vertex as processed 
    	sptSet[u] = true; 
   
    	// Update dist value of the adjacent vertices of the picked vertex. 
    	for (long long v = 0; v < V; v++) 
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX  
            	                           && dist[u]+graph[u][v] < dist[v]) 
            	dist[v] = dist[u] + graph[u][v]; 
	}
} 
   
int main() 
{ 
	cin>>V>>M>>k>>s;
	long long containing_area[k];
	
	for(long long i=0;i<k;i++)
	{
		long long a;
		scanf("%lld",&a);
		containing_area[i] = a;
	}
	
    //long long graph[V][V];
    for(long long i=0;i<V;i++)
    {
    	for(long long j=0;j<V;j++)
    	{
    		graph[i].push_back(999999);
    	//	graph[i][j] = 9999999;
		}
	}
    
    for(int i=0;i<M;i++)
    {
    	long long u,v,d;
    	scanf("%lld%lld%lld",&u,&v,&d);
    	graph[u].push_back(999999);
    	graph[v].push_back999999;
    //	graph[u][v] = d;
    //	graph[v][u] = d;
	}
   	long long from,to;
   	scanf("%lld%lld",&from,&to);
    dijkstra(from); 
    
   // if(graph[from][to]<=x)
   cout<<"Distance is: "<<graph[from][to]<<endl;
   
    return 0; 
} 
