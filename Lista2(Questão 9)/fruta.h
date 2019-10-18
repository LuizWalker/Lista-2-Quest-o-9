#include <iostream>
#ifndef FRUTA_H
#define FRUTA_H
using namespace std;

class Fruta{

    protected:

    string nome;
    string cor;

    public:

    Fruta(string name,string color);
    Fruta();

    void setNome(string n);
    void setCor(string c);

    string getNome();
    string getCor();
};

#endif