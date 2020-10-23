/*
Map - Um map da STL é um container para o armazenamento de pares ordenados,
do tipo chave, valor (first,second).
O map não aceita elementos duplicados.
A inserção de elementos duplicados não tem efeito algum.
*/
#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
int main(){
	//inserindo método a
	m["Ana"]= 10;
	m["Pedro"]= 20;
	m["Joaquim"]= 15;
	m["Joao Paulo"]= 20;
	//Listando com Iterador
	/*/map<string,int>::iterator it;
    for (it=m.begin(); it!=m.end(); ++it) cout << (*it).first << ", " << (*it).second <<endl;
	cout << m.size() << " elementos.\n-----------------------\n";
	/*/
	//Listando com o tipo auto
	for(auto p:m)cout << p.first << " - " << p.second << endl;
	cout << m.size() << " elementos.\n-----------------------\n";
	//inserindo método b
	m.insert(make_pair("Clara",15));
	m.insert(make_pair("Andre",18));

	//Listando com o tipo auto
	for(auto p:m)cout << p.first << " - " << p.second << endl;
	cout << m.size() << " elementos.\n-----------------------\n";

	//Editando de duas maneiras
	m.at("Ana") = 50;
	m["Clara"] = 25;

	//Listando com o tipo auto
	for(auto p:m)cout << p.first << " - " << p.second << endl;
	cout << m.size() << " elementos.\n-----------------------\n";

	//Busca
	string elem = "Ana";
	if(m.find(elem)!= m.end())cout << "Elemento encontrado!\n-----------------------\n";
	else cout << "Elemento Nao encontrado\n-----------------------\n";

	elem = "Sandra";
	if(m.find(elem)!= m.end())cout << "Elemento encontrado!\n-----------------------\n";
	else cout << "Elemento Nao encontrado\n-----------------------\n";

	//Apagando
	m.erase("Ana");
	m.erase("Pedro");
	m.erase("Roberto");

	//Listando com o tipo auto
	for(auto p:m)cout << p.first << " - " << p.second << endl;
	cout << m.size() << " elementos.\n-----------------------\n";

}
