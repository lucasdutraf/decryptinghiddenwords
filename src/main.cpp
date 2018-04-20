#include "processamento_de_imagem.hpp"
#include "processamento_de_imagem_pgm.hpp"
#include "processamento_de_imagem_ppm.hpp"
#include "ui.hpp"
#include <iostream>

int main (){

    ProcessamentoDeImagemPGM process1;
    UI inter;
    string Path;
    inter.RecebeImagem();
    cin >> Path;
    process1.setPathIn(Path);
    process1.leitorImg();
    process1.UncripMsg();

    return 0;
}