#ifndef TESTAOBJETO_H_
#define TESTAOBJETO_H_

#include "Objeto.h"

class TestaObjeto{
    private:
        Objeto *Obj = new Objeto;
    public:
        TestaObjeto();
        ~TestaObjeto();
        void menu();
};

TestaObjeto::TestaObjeto(){

}

TestaObjeto::~TestaObjeto(){
    delete Obj;
    Obj = nullptr;
}

void TestaObjeto::menu(){
    int flag;
    int entrada;
    string entradaNome;
    do{
        cout << "Insira N: ";
        cin >> entrada;
        Obj->setN(entrada);
        cout << "O numero N eh: " << Obj->getN() << "\n";
        cout << "insira nome: ";
        cin.ignore();
        getline (cin, entradaNome);
        Obj->setNome(entradaNome);
        cout << "O nome eh: " << Obj->getNome() << "\n";
        cout << "Para parar o programa digite 0\n";
        cin >> flag;
    }while(flag !=0);
}

#endif