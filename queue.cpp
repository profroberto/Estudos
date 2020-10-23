/*
FILA
Uma queue é um container que implementa o conceito de FIFO (First In First Out),
o primeiro que entra é o primeiro que sai.
As princiais funções suportadas por uma queue são:
empty()
size()
front()
back()
push_back() // push()
pop_front() // pop()
*/
#include <bits/stdc++.h>
//#include<queue>
using namespace std;
int main(){
    queue<int> fila;
    fila.push(50);
    fila.push(40);
    fila.push(20);
    fila.push(80);
    fila.push(10);
    //Tamanho
    cout << fila.size() << endl;
    //listando
    while(!fila.empty()){
		cout << fila.front() << " ";
		fila.pop();
    }

}
