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

vector <int> v;

int main(){
	int x;
	while(scanf("%d", &x) != EOF){
		/*v.pb(x);
		v.insert(v.end(),x);*/
		vector<int>::iterator it; // para acessar o vetor
		for(it = v.begin();it != v.end();it++){
			if(*it >= x){
				break;
			}
		} // poderia utilizar o menor tambem, nesse caso como vai ser construido para ser sequencial então não tem problema
		v.insert(it, x); //insert (posicao onde voce insere, o valor que voce quer inserir);
		int mid = v.size()/2;
		int ans;
		if(v.size() % 2 == 0){
			ans = (v[mid] + v[mid-1])/2;
		} else {
			ans = v[mid];
		}
		printf("%d\n", ans);
	}
	return 0;
}

/*	Casdastrar:
	uva online judge
	codeforces
	uri online judge
	codepit
	spoj br
	-----------------
	http://www.cplusplus.com/reference/stl/
*/