#ifndef UI_HPP
#define UI_HPP
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class UI {
    
    public:
        UI();
        ~UI();

        void InterfaceInicial();

        void PedeTipoDeImagem();

        void MostraCriptografia();

        void Despedida();
};
#endif