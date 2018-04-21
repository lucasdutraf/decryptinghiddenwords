#include "ui.hpp"
#include <iostream>
#include <fstream>

using namespace std;

UI::UI(){   
}
UI::~UI(){
}

void UI::InterfaceInicial(){
    cout << "Bem-vindo ao leitor de imagens e descriptografador de mensagens escondidas em arquivos .ppm e .pgm\n\n\n" << endl;
}

void UI::PedeTipoDeImagem(){
    cout << "Por favor, digite o tipo de imagem desejado para achar e descriptografar a mensagem escondida : \n\n\n\n\n" << endl;
    cout << " Digite 1 para .pgm " << "ou" << " digite 2 para .ppm\n\n" << endl;
}

void UI::RecebeImagem(){
    cout << "Digite o caminho da sua imagem" << endl;
}

void UI::MostraCriptografia(){
    cout << "A mensagem escondida na sua imagem é : \n\n";
}

void UI::Despedida(){
    cout << "\n\n\nFim do programa, muito obrigado por usá-lo" << endl;
    cout << "\nFeito por: Lucas Dutra Ferreira do Nascimento" << endl;
}