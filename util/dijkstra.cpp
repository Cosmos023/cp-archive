// Time: O((V + E) log V)
// Single Source Shortest Path

void dijkstra(int source, int n,
              vector<long long> &dist,
              vector<int> &parent,
              vector<pair<int, long long>> adj[])
{
    const long long INF = 1e18;

    // Initialize
    dist.assign(n, INF);
    parent.assign(n, -1);
    dist[source] = 0;

    // Min-heap: (distance, node)
    priority_queue<
        pair<long long, int>,
        vector<pair<long long, int>>,
        greater<pair<long long, int>>
    > pq;

    pq.push({0, source});

    while (!pq.empty())
    {
        auto [currentDist, u] = pq.top();
        pq.pop();

        // Skip outdated entries
        if (currentDist != dist[u])
            continue;

        // Relax edges
        for (auto [v, weight] : adj[u])
        {
            if (dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }
}


vector<int> get_path(int target, vector<int> &parent)
{
    vector<int> path;
    for (int v = target; v != -1; v = parent[v])
        path.push_back(v);

    reverse(path.begin(), path.end());
    return path;
}