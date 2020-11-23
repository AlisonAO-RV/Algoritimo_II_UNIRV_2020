#include <bits/stdc++.h>

using namespace std;

void GrafoSimples(vector<int> G[], int m)
{
    int a, b;
    while (m--)
    {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
}

void MostrarArestas(vector<int> G[], int n)
{
    for (int u = 0; u < n; u++)
    {
        cout << u << ": ";
        for (auto v : G[u])
        {
            cout << v << " ";
        }
        cout << endl;
    }
}

void bfs(vector<int> G[], queue<int> q, int x, bool visited[], int distance[], int pi[])
{
    visited[x] = true;
    cout << x << " ";
    distance[x] = 0;
    q.push(x);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (auto u : G[s])
        {
            if (visited[u])
            {
                continue;
            }
            visited[u] = true;
            cout << u << " ";
            pi[u] = s;
            distance[u] = distance[s] + 1;
            q.push(u);
        }
    }
}
void zerarvisited(bool visited[], int n)
{
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
}
void zerarpi(int pi[], int n)
{
    for (int i = 0; i < n; i++)
    {
        pi[i] = -2;
    }
}
void zerarDistancia(int d[], int n)
{
    for (int i = 0; i < n; i++)
    {
        d[i] = INT_MAX;
    }
}
void imprimirVetor(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << ": " << v[i] << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> Grafo[n];
    GrafoSimples(Grafo, m);
    MostrarArestas(Grafo, n);
    queue<int> q;
    bool visited[n];
    zerarvisited(visited, n);
    int distance[n];
    zerarDistancia(distance, n);
    int pi[n];
    zerarpi(pi, n);
    pi[0] = -1;
    bfs(Grafo, q, 0, visited, distance, pi);
    cout << endl;
    imprimirVetor(distance, n);
    imprimirVetor(pi, n);
    return 0;
}