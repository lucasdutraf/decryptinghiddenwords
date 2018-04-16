#include "inc/ui.hpp"
#include <iostream>
#include <fstream>

using namespace std;

UI::UI(){   
}
UI::~UI(){
}

void UI::InterfaceInicial(){
    cout << "Bem-vindo ao leitor de imagens e descriptografador de mensagens escondidas em arquivos .ppm e .pgm" << endl;
}

void UI::PedeTipoDeImagem(){
    cout << "Por favor, digite o tipo de imagem desejado para achar e descriptografar a mensagem escondida : " << endl;
    cout << " Digite 1 para .pgm " << "ou" << " digite 2 para .ppm" << endl;
}

void UI::MostraCriptografia(){
    cout << "A mensagem escondida na sua imagem é :";
}

void UI::Despedida(){
    cout << "Fim do programa, muito obrigado por usá-lo" << endl;
    cout << "Feito por: Lucas Dutra Ferreira do Nascimento" << endl;
}