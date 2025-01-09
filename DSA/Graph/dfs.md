dfs(vertex, visited):
    1. mark the visited array 
    2. print the vertex
    3. for every adjlist[vertex]:
        if(!visited[vertex]):
            dfs(vertex, visited)
