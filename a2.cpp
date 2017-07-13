#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define INT 0x3f3f3f3f // infinito
#define LINF 0x3f3f3f3f3f3f3f3fll
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii; //recebe dois valores 
typedef vector<ii> vii; // vector de pair
//make_pair("dado1", "dado2");

int main(){
	int n, m;
	while(scanf("%d %d", &n, &m) != EOF && (n | m)){
		set<int> jack, jill;
		for(int i = 0; i<n; i++){
			int x;
			scanf("%d", &x);
			jack.insert(x);
		}
		for(int i = 0; i<m; i++){
			int x; 
			scanf("%d", &x);
			jill.insert(x);
		}
		set<int>::iterator it;
		//vector<int> inter;
		int cont = 0;
		for(it = jack.begin();it!=jack.end();it++){
			int x = *it;
			if(jill.find(x) != jill.end()){ // retorna um it da posicao que existe o valor igual ao enviado, caso contrario retorna jill.end
				//inter.push_back(x); -> para mostrar os valores que vão ser repetidos
				cont++;
			}
		}
		print("%d\n", cont);
		/*
			caso nao desse para fazer a declaração dos set dentro do loop, teria que fazer isso no final
			jack.clear();
			jill.clear();
		*/
		
	}
	return 0;
}

//(n | m) == if(n == 0 && m == 0) break;
//vector.size  = retorna o tamanho da estrutura mas nao necessariamente a quantidade de elementos contidos nela, pode ter uns buracos
/* usando vector
	int main(){
	set<int> jill;
	vector<int> jack;
	//vector<int> jack(1000000000); // aloca o tamanho maximo que pode ter, mas nesse caso, nao teria como usar o jack.size pois o mesmo retornaria 1000000000 e nao a quantidade de elementos inseridos, ou as posicoes a
	int n, m;
	while(scanf("%d %d", &n, &m) != EOF && (n | m)){
		for(int i = 0; i<n; i++){
			int x;
			scanf("%d", &x);
			jack.pb(x); // so add um caracter de uma vez e sempre no final
		}
		for(int i = 0; i<m; i++){
			int x; 
			scanf("%d", &x);
			jill.insert(x);
		}
		set<int>::iterator it;
		//vector<int> inter;
		int cont = 0;
		for(int i = 0; i<jack.size(); i++){
			int x = *it;
			if(jill.count(jack[i])){
				cont++;
			}
		}
		print("%d\n", cont);
		
	}
	return 0;
	jill.empty() // caso size seja igual a 0, ele retorna true
	jill.erase(it) // apaga um elemento especifico
	jill.clear() // desaloca todo o espaco do stl e apaga todos os elementos contidos
}
*/