#include "fruta.h"

using namespace std;

Fruta::Fruta(string name,string color){
    setNome(name);
    setCor(color);
}

Fruta::Fruta(){

}

void Fruta::setNome(string n){
    nome = n;
}

void Fruta::setCor(string c){
    cor = c;
}

string Fruta::getNome(){
    return nome;
}

string Fruta::getCor(){
    return cor;
}