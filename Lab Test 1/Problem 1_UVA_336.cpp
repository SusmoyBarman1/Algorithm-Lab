#include <stdio.h>
#include <map>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int main() {
	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
    int n, test = 0, TTL;
    while(cin>>n && n) 
	{
        int i, j,x, y;
        int size = 0;
        
        map<int, int> r;
        vector<int> Link[40];
        
        while(n--) 
		{
            cin>>i>>j;
            //Adding level
            
            x = r[i];
            if(x == 0) 
			{
                r[i] = ++size;
                x = size;
            }
            y = r[j];
            if(y == 0) 
			{
                r[j] = ++size;
                y = size;
            }
            Link[x].push_back(y);
            Link[y].push_back(x);
        }
        
        while(scanf("%d %d", &x, &TTL) == 2) 
		{
            if(x == 0 && TTL == 0)
            {
            	break;
			}
    
    		// Using bfs to find the reachable values
    		
    		int max = 40;
            int visited[max] = {};
            
            // Extra element in bfs algorithm
			int distance[max] = {};
			int count = 0;
			
            y = x;
			x = r[x];
            queue<int> Q;
            
            Q.push(x);
			visited[x] = 1;
			distance[x] = 0;
            
            while(!Q.empty()) 
			{
                x = Q.front();
                if(distance[x] > TTL)
                    break;
                    
                count++;
                Q.pop();
                
                vector<int>::iterator i;
                
                for(i = Link[x].begin(); i != Link[x].end(); i++) 
				{
                    if(visited[*i] == 0) {
                        visited[*i] = 1;
                        distance[*i] = distance[x]+1;
                        Q.push(*i);
                    }
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++test, size-count, y, TTL);
        }
    }
    return 0;
}


