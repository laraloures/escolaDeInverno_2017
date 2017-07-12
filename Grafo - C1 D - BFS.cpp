#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

#define MAXE 109

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef set<int> si;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef map<string,int> msi;
typedef map<ii,int> mi;

// criar uma lista para cada um dos vertices
vector<int> grafo[110]; // vetores de vector
int vis[110]; // vertices - tem que ser a quantidade de arestas/ tem que resetar em cada caso
int bfs(int s){
	queue<int> q;
	vis[s] = 1;
	int count = 1;
	q.push(s);
	while(!q.empty()){
		int a = q.front();
		q.pop;
		for(int i = 0; i < grafo[a].size(); i++){
			int b = grafo[a][i];
			if(vis[b]) continue;
			count++;
			vis[b] = 1;
			q.push(b);
		}
	}
	return count;
}
int main() {
	int v, e, caso = 1;
	while(scanf("%d %d", &v, &e) && (v|e)){
		menset(vis,0, sizeof(vis)); // vetor, com o que voce quer inicializar, o tamanho que voce quer inicializar
		for(int i=0;i<=100;i++){
			grafo[i].clear();
		}
		for(int i=0;i<e;i++){
			int a,b;
			scanf("%d %d", &a, &b);
			grafo[a].pb(b);
			grafo[b].pb(a);
		}
		printf("Teste %d\n", caso++);
		if(bfs(1) == v){
			printf("normal\n");
		} else {
			printf("falha\n");
		}
		printf("\n");
	}
	return 0;
}
/*
1 - 2
2 - 1 3 6
3 - 2 4
4 - 3 5
5 - 4 6 1 
6 - 5 2 
*/