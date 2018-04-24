#include "ui.hpp"
#include <iostream>
#include <fstream>

using namespace std;

UI::UI(){   
}
UI::~UI(){
}

void UI::InterfaceInicial(){
    cout << "\n\n\nBEM-VINDO AO DESCRIPTOGRAFADOR DE MENSAGENS ESCONDIDAS EM ARQUIVOS .PGM \n\n\n" << endl;
}


void UI::RecebeImagem(){
    cout << "Digite o caminho da sua imagem, desde a raíz\n" << endl;
}

void UI::MostraCriptografia(){
    cout << "A mensagem escondida na sua imagem é: \n\n";
    cout << "----------------------MENSAGEM DESCRIPTOGRAFADA----------------------\n\n";
}

void UI::Despedida(){
    cout << "\n----------------------MENSAGEM DESCRIPTOGRAFADA----------------------\n\n";
    cout << "\n\nFIM DO PROGRAMA, MUITO OBRIGADO POR USÁ-LO" << endl;
    cout << "\n\n\nFeito por: Lucas Dutra Ferreira do Nascimento\n\n\n" << endl;
}

void UI::Sinceridade(){
    cout << "\n\nDevido a problemas técnicos as imagens .ppm não puderam ser descriptografadas apenas lidas :(\n\n" << endl;
}
