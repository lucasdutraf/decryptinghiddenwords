#include "processamento_de_imagem_ppm.hpp"
#include "processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>

using namespace std;


void ProcessamentoDeImagemPPM::setPathIn(string caminhoEntrada){
    this->caminhoEntrada = caminhoEntrada;
}
string ProcessamentoDeImagemPPM::getPathIn(){
    return caminhoEntrada;
}


void ProcessamentoDeImagemPPM::leitorImg(){
}