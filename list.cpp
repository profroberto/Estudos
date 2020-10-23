/*
Lists are sequence containers that allow constant time insert and erase
operations anywhere within the sequence, and iteration in both directions.
cplusplus.com
 - Inser��o e remo��o em tempo constante O(1) (do in�cio ou do fim);
 - Permite Itera��o;
 - Permite acesso ao primeiro e ao �ltimo elemento em tempo constante O(1);
 - Permite push e pop para as duas pontas da lista;
 - Aceita Find, Sort e Merge;
 */
#include <bits/stdc++.h>
using namespace std;
void info(list<int>l);
int main(){
	list<int> lista;
	//Inserindo no fim da lista;
	cout << "Trabalhando com listas C++ 11, by Prof.Roberto.";
	cout << "\n---------------------------------------------";
	cout << "\nInserindo no fim da lista (10,20,15)";
	lista.push_back(10);
	lista.push_back(20);
	lista.push_back(15);
	//Informa��es
	info(lista);
	cout << "\n--------------------------------------";

	//Inserindo no In�cio da lista;
	cout << "\nInserindo no inicio da lista (5,8,12).";
	lista.push_front(5);
	lista.push_front(8);
	lista.push_front(12);
	//Informa��es
	info(lista);
	cout << "\n---------------------------------------";

	//Inserindo em uma posi��o...
	cout << "\nInserindo [50 em inicio+1] [100 em fim-1] [11 apos encontrar o 10]";
	lista.emplace(++lista.begin(),50);
	lista.emplace(--lista.end(),100);
	auto x = find(lista.begin(),lista.end(),10);
	if(x != lista.end())lista.emplace(++x,11);
	info(lista);
	cout << "\n---------------------------------------";

	//Removendo do in�cio e do fim
	cout << "\nRemovendo o primeiro e ultimo elementos";
	lista.pop_front();
	lista.pop_back();
	info(lista);
	cout << "\n---------------------------------------";

	//Erase usa ponteiro (iterador)
	cout << "\nRemovendo o elemento [inicio+1]";
	lista.erase(++lista.begin());
	info(lista);
	cout << "\n---------------------------------------";

	//Remove usando valor
	cout << "\nRemovendo o elemento [10]";
	lista.remove(10);
	info(lista);
	cout << "\n----------------------------------------";

	//Removendo do fim...
	cout << "\nRemovendo item a item a partir do fim....";
	while(!lista.empty()){
		cout << "\nElemento do fim.: " << lista.back();
		cout << "\nTamanho da lista: " << lista.size();
		lista.pop_back();
	}
	cout << "\n----------------------------------------\n";
	info(lista);
	cout << "\n----------------------------------------\n";
	cout << "F I M";

}

void info(list<int>minha_lista){
	cout << "\nListando..." << endl;
	for(auto l:minha_lista)cout << l << " ";
	cout << "\nElemento do inicio: " << minha_lista.front();
	cout << "\nElemento do fim...: " << minha_lista.back();
	cout << "\nTamanho da lista..: " << minha_lista.size();
	string resp = minha_lista.empty()? "Sim" : "Nao";
	cout << "\nLista vazia.......: " << resp;
}
