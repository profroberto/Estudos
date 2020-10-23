#include <bits/stdc++.h>
using namespace std;
void lista(priority_queue <int, vector<int>, greater<int> > pq);
int main(){
	//--------------------------------------------------------------------
	cout << "\nInvertendo a prioridade...\n";
	priority_queue<int, vector<int>, greater<int> > pq;
	cout << "Inserindo os elementos {5 15 10 25 2} na fila\n";
	pq.push(5);
	pq.push(15);
	pq.push(10);
	pq.push(25);
	pq.push(2);
	cout << "Listando a fila de prioridades de menor para o maior...\n";
	lista(pq);
}
void lista(priority_queue <int, vector<int>, greater<int> > pq){
	cout << "\n---------------------------------------------------\n";
	while(!pq.empty()){
		cout << "\t" << pq.top();
		pq.pop();
	}
	cout << "\n---------------------------------------------------\n";
}



