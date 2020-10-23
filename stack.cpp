/*
	Uma pilha (Stack) � um container da STL do tipo
	LIFO (Last In First Out). Os elementos de uma pilha
	s� podem ser manipulados pelo topo.
	As fun��es associadas a Stack s�o:
	empty() - Retorna se a pilha est� ou n�o vazia - complexidade O(1)
	size() - Retorna o tamanho da pilha - complexidade O(1)
	top() - Retorna uma refer�ncia ao elemento do topo da pilha - complexidade O(1)
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
Balanceando n�meros
*/
