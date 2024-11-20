#include <bits/stdc++.h>

using namespace std;

void dfs(int node, unordered_map<int, list<int>> &adjList, unordered_map<int, int> &vis)
{
    stack<int> st;
    st.push(node);
    vis[node] = true;
    while(!st.empty())
    {
        int s = st.top();
        st.pop();
         cout << s << " ";
        
        for(auto i : adjList[s])
        {
            if(!vis[i])
            {
                st.push(i);
                vis[i] = true;
            }
        }
    }
}

int main()
{
    unordered_map<int, list<int>> adjList;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    
    unordered_map<int, int> vis;
    for(int i = 0; i < 5; i++)
    {
        if(!vis[i])
        {
            dfs(i,adjList,vis);
        }
    }
    return 0;
}

// 5 5 
// 1 0
// 0 2
// 2 1
// 0 3
// 1 4
