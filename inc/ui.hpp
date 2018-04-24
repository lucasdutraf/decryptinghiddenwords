#ifndef UI_HPP
#define UI_HPP
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class UI {

    private:

        int tipoDeImg;
        char repeticao;
    
    public:
        UI();
        ~UI();

        void InterfaceInicial();

        void RecebeImagem();

        void MostraCriptografia();

        void Despedida();

        void Sinceridade();

};
#endif