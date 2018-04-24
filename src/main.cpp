#include "processamento_de_imagem.hpp"
#include "processamento_de_imagem_pgm.hpp"
#include "processamento_de_imagem_ppm.hpp"
#include "ui.hpp"
#include <iostream>

int main (int argc, char ** argv){

    /*ProcessamentoDeImagemPGM * process1 = new ProcessamentoDeImagemPGM();
    UI * inter = new UI();
    string Path;
    //int seletor_main;
    inter->InterfaceInicial();
    inter->PedeTipoDeImagem();
    //cin >> seletor_main;
    //if (seletor_main == 1){
        inter->RecebeImagem();
        cin >> Path;
        process1->setPathIn(Path);
        process1->leitorImg();
        inter->MostraCriptografia();
        process1->UncripMsg();

    //}
    //else if (seletor_main == 2){

    //}
    //else {
        //break;
    //}
    inter->Despedida();
    
    delete inter;
    delete process1;*/

    ProcessamentoDeImagemPPM * process2 = new ProcessamentoDeImagemPPM();
    process2->leitorImg();

    return 0;
}