#include "processamento_de_imagem.hpp"
#include "processamento_de_imagem_pgm.hpp"
#include "processamento_de_imagem_ppm.hpp"
#include "ui.hpp"
#include <iostream>
#include <string>

int main (int argc, char ** argv){

    ProcessamentoDeImagemPGM * process1 = new ProcessamentoDeImagemPGM();
    UI * inter = new UI();
    inter->InterfaceInicial();
    string Path;
    inter->RecebeImagem();
    cin >> Path;
    process1->setPathIn(Path);
    process1->leitorImg();
    inter->MostraCriptografia();
    process1->UncripMsg();
    inter->Despedida();
    inter->Sinceridade();


    delete inter;
    delete process1;


    return 0;
}