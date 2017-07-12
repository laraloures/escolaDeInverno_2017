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

int count;
void dfs(int no){
	vis[no] = 1;
	count++;
	for(int i = 0; i < grafo[no].size();i++){
		int b = grafo[no][i];
		if(!vis[b]) dfs[b];
	}
}

int main() {
	int v, e, caso = 1;
	while(scanf("%d %d", &v, &e) && (v|e)){
		menset(vis,0, sizeof(vis)); // vetor, com o que voce quer inicializar, o tamanho que voce quer inicializar
		count = 0;
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
		dfs(1);
		//if(bfs(1) == v){
		if(count == v){
			printf("normal\n");
		} else {
			printf("falha\n");
		}
		printf("\n");
	}
	return 0;
}