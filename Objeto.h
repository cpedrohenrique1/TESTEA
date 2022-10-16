#ifndef OBJETO_H_
#define OBJETO_H_

class Objeto{
    private:
        int *n = new int;
        string *nome = new string;
    public:
        Objeto();
        ~Objeto();
        void setN(int);
        int getN();
        void setNome(string);
        string getNome();
};

Objeto::Objeto(){
    *n = 1;
    *nome = "";
}

Objeto::~Objeto(){
    delete n;
    n = nullptr;
    delete nome;
    nome = nullptr;
}

void Objeto::setN(int nmr){
    *n = nmr;
}

int Objeto::getN(){
    return *n;
}

void Objeto::setNome(string name){
    *nome = name;
}

string Objeto::getNome(){
    return *nome;
}

#endif