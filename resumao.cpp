#include <bits/stdc++.h> //Biblioteca  STL
using namespace std;
//variáveis criadas aqui são globais e inicializadas.
//conjunto de variáveis e estruturas
///******************
//int a;
unsigned int a;  //inteiro sem sinal, não armazena números negativos
long long al;
float b;
string s;
char c;
vector<int> v;
int vetor[100];
vector <pair<string, int> > p;
set<int> l;
int m[10][10];
//******************
int main(){
    cout<<"Tamanho em bits das variaveis \n";
    cout << sizeof(a) << " " << sizeof(al); //tamanho em bits das variáveis
    //Vector
    cout << "\n------Vector-------\n";
    cout<< "Inserindo...\n";
    cout << 10 << endl << 5 << endl << 20;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);

    cout << "\n\nVerificando o tamanho do vetor...\n";
    cout << v.size();
    cout << "\n\nListando...\n";
    for (int i=0; i<v.size() ;i++ )
        cout << v.at(i) << " ";

    cout << "\n\nListando com iterador...\n";
    vector<int>::iterator it;
    for (it=v.begin(); it != v.end() ; it++)
        cout << *it << " ";

    cout << "\n\nOrdenando...\n";
    sort(v.begin(),v.end());
    for (it=v.begin(); it != v.end() ; it++)
        cout << *it << " ";

    cout << "\n\nProcurando...\n";
    it = find(v.begin(),v.end(),5);
    if(it != v.end())cout <<  "5 foi encontrado\n";
    else cout << "5 Nao foi encontrado\n";

    it = find(v.begin(),v.end(),12);
    if(it != v.end())cout <<  "12 foi encontrado\n";
    else cout << "12 Nao foi encontrado\n";

    cout << "\nRemovendo o ultimo elemento do vetor\n" ;
    v.pop_back();
    for (it=v.begin(); it != v.end() ; it++)
        cout << *it << " ";

    cout << "\n\nVerificando se o vetor esta vazio...\n";
    if(!v.empty())cout << "Nao esta vazio\n";
    else cout << "Esta vazio\n";

    cout << "\nApos o metodo clear...\n";
    v.clear(); //aqui o vetor foi esvaziado
    if(!v.empty())cout << "Nao esta vazio\n";
    else cout << "Esta vazio\n";


    cout << "\n\nSet\n";
    cout << "\Inserindo...\n";
    cout << 0 << endl << 1 << endl << 4 << endl;
    for ( int i = 0; i < 3; i++ )
        l.insert(i * i);

    cout << "\nListando\n";
    set<int>::iterator its;
    for(its=l.begin(); its!=l.end(); its++)
        cout << *its << " ";

    cout << "\nProcurando com o metodo find\n" ;
    its = find(l.begin(),l.end(),4);
    if(its != l.end())cout << "Elemento encontrado\n";
    else cout << "Elemento nao encontrado";

    its = find(l.begin(),l.end(),10);
    if(its != l.end())cout << "Elemento encontrado";
    else cout << "Elemento nao encontrado\n";

    cout << "\nProcurando com o metodo count\n" ;
    int r = l.count(4);
    if(r)cout << "Elemento encontrado\n";
    else cout << "Elemento nao encontrado";

    r = l.count(10);
    if(r)cout << "Elemento encontrado\n";
    else cout << "Elemento nao encontrado";


    cout << "\n\nRemovendo...\n";
    l.erase(4);
    cout << "Tamanho da lista apos a remocao do elemento 4: " << l.size();

    //Pair ****
    cout << "\n\nPair\n";
    p.push_back(make_pair("Ana",10));
    p.push_back(make_pair("Joao",15));
    p.push_back(make_pair("Pedro",25));

    for(int i=0; i<p.size();i++)
        cout << p.at(i).first << " " << p.at(i).second << endl;

    vector<pair <string,int> >::iterator itp;
    pair<string,int> aux;
    aux = make_pair("Ana",10);
    itp = find(p.begin(),p.end(),aux);
    if(itp!=p.end())cout << "Elemento encontrado." ;

    cout << "\n\n ---- Fim do resumo, boa prova!! ----- \n\n";

}
