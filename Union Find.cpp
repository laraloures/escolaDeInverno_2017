#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

#define MAXE 109
// o union find tem que virar uma arvore
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef set<int> si;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef map<string,int> msi;
typedef map<ii,int> mi;

class UnionFind {
	public:
		vector<int> p, rank; // rank é a maior altura do conjunto, p é o pai
		UnionFind(int n){
			p.resize();
			rank.assign(n, 0);
			for(int i = 0; i < n ; i++){
				p[i] = i;
			}
		}
		
		int findSet(int i){ //procura quem é o cara que é pai dele mesmo, esse é o cara do conjunto
			if(p[i] == i) return i;
			return (p[i] = findSet(p[i])); // para ja criar uma ligação direta entre o vertice e o pai do seu conjunto (diminuir o tamanho do grafo)
		}
		
		bool isSameSet(int i, int j){
			return findSet(i) == findSet(j);
		}
		
		void unionSet(int i, int j){
			if(isSameSet(i, j)) return;
			int x = findSet(i);
			int y = findSet(j);
			if(rank[x] > rank[y]){
				p[y] = x;
				return;
			}
			p[x] = y; // caso o rank[y] seja igual ao rank[x]
			if(rank[x] == rank[y]) rank[y]++;
		}
};