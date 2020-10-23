/*
Uma fila de prioridades (priority_queue) é um tipo de container
que permite uma ordenação baseada em criterios definidos pelo programador.
Desta forma, é possível definir, por meio de critérios personalizados, qual será o elemento do topo,
ou seja, o elemento de maior prioridade.
Operações suportadas:
	size()
	front()
	push_back()
	pop_back()
	empty()

*/
#include <bits/stdc++.h>
using namespace std;
void lista(priority_queue <int> pq);
int main(){
	priority_queue <int> pq;
	cout << "\nInserindo os elementos {5 15 10 25 2}\n";
	pq.push(5);
	pq.push(15);
	pq.push(10);
	pq.push(25);
	pq.push(2);
	cout << "Listando a fila de prioridades...\n";
	lista(pq);
	//--------------------------------------------------------------------
}
void lista(priority_queue <int> pq){
	cout << "\n---------------------------------------------------\n";
	while(!pq.empty()){
		cout << "\t" << pq.top();
		pq.pop();
	}
	cout << "\n---------------------------------------------------\n";
}


