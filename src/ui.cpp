#include "ui.hpp"
#include <iostream>
#include <fstream>

using namespace std;

UI::UI(){   
}
UI::~UI(){
}

void UI::InterfaceInicial(){
    cout << "\n\n\nBEM-VINDO AO DESCRIPTOGRAFADOR DE MENSAGENS ESCONDIDAS EM ARQUIVOS .PGM E .PPM\n\n\n" << endl;
}

void UI::PedeTipoDeImagem(){
    cout << "Por favor, digite o tipo de imagem desejado para achar e descriptografar a mensagem escondida : " << endl;
    cout << "(Digite 1 para .pgm " << "ou" << " digite 2 para .ppm)\n\n\n" << endl;
}

void UI::RecebeImagem(){
    cout << "Digite o caminho da sua imagem\n" << endl;
}

void UI::MostraCriptografia(){
    cout << "A mensagem escondida na sua imagem é: \n\n";
}

void UI::Despedida(){
    cout << "\n\nFIM DO PROGRAMA, MUITO OBRIGADO POR USÁ-LO" << endl;
    cout << "\n\n\nFeito por: Lucas Dutra Ferreira do Nascimento\n\n\n" << endl;
}