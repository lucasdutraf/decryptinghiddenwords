#include "processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>
#include <string>


using namespace std;

ProcessamentoDeImagem::ProcessamentoDeImagem(){
    string caminhoEntrada = " ";
}
ProcessamentoDeImagem::~ProcessamentoDeImagem(){
}

void ProcessamentoDeImagemPGM::setPathIn(string caminhoEntrada){
    cin >> this->caminhoEntrada = caminhoEntrada;
}
string ProcessamentoDeImagemPGM::getPathIn(){
    return caminhoEntrada;
}


void ProcessamentoDeImagemPGM::leitorImg(){
}
