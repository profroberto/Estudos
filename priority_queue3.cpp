#include <bits/stdc++.h>
using namespace std;
struct Pessoa{
	int idade;
	int th;
};
struct menor_idade{
	bool operator()(const Pessoa& p1, const Pessoa& p2){
		return p1.idade > p2.idade;//Menor idade
	}
};
struct maior_th{
	bool operator()(const Pessoa& p1, const Pessoa& p2){
		return p1.th < p2.th; //Maior tempo de habilitação
	}
};
void lista(priority_queue <Pessoa, vector<Pessoa>, menor_idade> pq );
void lista2(priority_queue <Pessoa, vector<Pessoa>, maior_th> pq2 );
int main(){
	//Sem acentos!
	cout << "\nCriando um criterio proprio...\n";
	priority_queue<Pessoa, vector<Pessoa>, menor_idade> pq;
	priority_queue<Pessoa, vector<Pessoa>, maior_th> pq2;
	cout << "Inserindo os elementos {(25,7),(30,10),(26,5),(50,30),(65,15)} na fila \n";
	struct Pessoa p[5];
	p[0].idade=25;
	p[0].th=7;

	p[1].idade=30;
	p[1].th=10;

	p[2].idade=26;
	p[2].th=5;

	p[3].idade=50;
	p[3].th=30;

	p[4].idade=65;
	p[4].th=15;

	for(int i=0; i<5; i++)pq.push(p[i]);
	cout << "Listando a fila de prioridades de menor idade...";
	lista(pq);
	//preenchendo a lista 2
	for(int i=0; i<5; i++)pq2.push(p[i]);
	cout << "Listando a fila de prioridades de maior tempo de habilitacao...";
	lista2(pq2);
}
void lista(priority_queue <Pessoa, vector<Pessoa>, menor_idade> pq){
	cout << "\n---------------------------------------------------\n";
	while(!pq.empty()){
		struct Pessoa aux = pq.top();
		cout << "(" << aux.idade << "," << aux.th << ")" << "\t";
		pq.pop();
	}
	cout << "\n---------------------------------------------------\n";
}
void lista2(priority_queue <Pessoa, vector<Pessoa>, maior_th> pq2){
	cout << "\n---------------------------------------------------\n";
	while(!pq2.empty()){
		struct Pessoa aux = pq2.top();
		cout << "(" << aux.idade << "," << aux.th << ")" << "\t";
		pq2.pop();
	}
	cout << "\n---------------------------------------------------\n";
}


