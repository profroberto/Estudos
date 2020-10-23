/*
	Uma pilha (Stack) é um container da STL do tipo
	LIFO (Last In First Out). Os elementos de uma pilha
	só podem ser manipulados pelo topo.
	As funções associadas a Stack são:
	empty() - Retorna se a pilha está ou não vazia - complexidade O(1)
	size() - Retorna o tamanho da pilha - complexidade O(1)
	top() - Retorna uma referência ao elemento do topo da pilha - complexidade O(1)
	push(x) - Insere 'x' na pilha - complexidade O(1)
	pop() - Exclui o elemento do topo da pilha - complexidade O(1)
*/
#include<bits/stdc++.h>
using namespace std;
stack<int>p;
int main(){
	p.push(10);
	p.push(30);
	p.push(20);
	p.push(5);
	p.push(1);
	//tamanho da pilha
	cout << "Size: " << p.size();
	//topo da pilha
	cout << "\nTop: " << p.top();
	//Esta vazia?
	cout << "\nEmpty: " << p.empty();
	cout << "\nProcesso de desempilha...";
	while(!p.empty()){
		cout << "\nTop: " << p.top();
		p.pop();
		cout << "\n------";
	}
	cout << "\nSize: " << p.size();
	cout << "\nEmpty: " << p.empty();
	return 0;
}
/*
Balanceando números
*/
