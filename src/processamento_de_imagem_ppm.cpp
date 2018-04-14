#include "processamento_de_imagem_ppm.hpp"
#include "processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>

using namespace std;


void ProcessamentoDeImagemPGM::setPathIn(string caminhoEntrada){
    this->caminhoEntrada = caminhoEntrada;
}
string ProcessamentoDeImagemPGM::getPathIn(){
    return caminhoEntrada;
}


void ProcessamentoDeImagemPGM::leitorImg(){
}