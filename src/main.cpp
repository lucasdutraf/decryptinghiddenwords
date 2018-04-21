#include "processamento_de_imagem.hpp"
#include "processamento_de_imagem_pgm.hpp"
#include "processamento_de_imagem_ppm.hpp"
#include "ui.hpp"
#include <iostream>

int main (int argc, char ** argv){

    ProcessamentoDeImagemPGM process1;
    UI inter;
    string Path;
    int seletor_main;
    inter.InterfaceInicial();
    inter.PedeTipoDeImagem();
    cin >> seletor_main;
    if (seletor_main == 1){
        inter.RecebeImagem();
        cin >> Path;
        process1.setPathIn(Path);
        process1.leitorImg();
        process1.UncripMsg();

    }
    else if (seletor_main == 2){

    }
    else {
        //break;
    }
    


    return 0;
}