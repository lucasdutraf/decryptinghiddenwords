#include "processamento_de_imagem_ppm.hpp"
#include "processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <sstream>


using namespace std;

ProcessamentoDeImagemPPM::ProcessamentoDeImagemPGM(){

}
ProcessamentoDeImagemPPM::~ProcessamentoDeImagemPGM(){

}

void ProcessamentoDeImagemPPM::leitorImg(){
    char comentario;
    vector<char> imgVector;
    char conteudo;


    ifstream ImageIn;
    ImageIn.open(getPathIn());

    getline(ImageIn, id, '\n');
    ImageIn.get(comentario);
    getline(ImageIn, CripStart, ' ');
    getline(ImageIn, CripLenght, ' ');
    getline(ImageIn, Cipher, '\n');
    getline(ImageIn, LarguraImg, ' ');
    getline(ImageIn, AlturaImg, '\n');
    getline(ImageIn, TonsImg, '\n');

}

void ProcessamentoDeImagemPPM::Uncrip(){

}