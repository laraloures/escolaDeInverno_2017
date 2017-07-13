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
	int n; // qtd de casos 
	scanf("%d", &n);
	bool flag = false;
	getchar(); //limpa o buffer de memoria que fica  o enter
	getchar(); // para ignorar a linha em branco
	while(n--){
		if(flag) printf("\n");
		map<string, int> mapa; //<nome do ponteiro, valor do ponteiro>
		string arv;
		int cont = 0;
		while(getline(cin, arv) && !arv.empty()){
			mapa[arv]++;
			cont++;
		}
		map<string, int>::iterator it;
		printf("%d", cont);
		for(it = mapa.begin(); it !=mapa.end();it++){
			//ordem lexicografa = ordem alfabetica = utiliza tabela ascii
			
			//printf("%s %.4lf\n", it->F.c_str(), (100.0*it->S)/cont); //
		}
	}
	return 0;
}