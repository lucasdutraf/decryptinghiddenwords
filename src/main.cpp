#include "processamento_de_imagem.hpp"
#include "processamento_de_imagem_pgm.hpp"
#include "processamento_de_imagem_ppm.hpp"
#include "ui.hpp"
#include <iostream>

int main (){

    int escolha;
    UI * Interface = new UI();
    Interface->InterfaceInicial();
    Interface->PedeTipoDeImagem();

    cin >> escolha;
    if(escolha == 1){

    }
    else if (escolha == 2){

    }
    else{
        cout << "Digite somente 1 ou 2 " << endl;
    }

    Interface->MostraCriptografia();
    Interface->Despedida();



    delete Interface;
    return 0;
}