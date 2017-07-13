#include <bits/stdc++.h>
using namespace std;
string x, y;
bool m(int meio){
	string s;
	int cont= 0;
	for(int j = 0;j<y.size();j++){
		for(int i = 0;i<meio;i++){
			s+= y[j];
		}
	}
	for(int j = 0;j<x.size();j++){
		if(x[j] == s[cont])cont++;
	}
	return (cont == s.size());
}
int busca(int t){
	int ini= 1, fim =t, meio, maior = 0;
	while(ini<= fim){
		meio = (ini+fim)/2;
		if(m(meio)){
			if(maior < meio){
				maior = meio;
			}
			ini = meio+1;
		}
		else fim = meio-1; 
	}
	return maior;

}
int main(){
	int a;
	cin >> a;
	getchar();
	for(int i = 0;i<a;i++){
		cin >> x >> y;
		int t = x.size()/y.size();
		int r = busca(t);
		cout << r << endl;	
	}

}