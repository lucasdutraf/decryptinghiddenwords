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

ProcessamentoDeImagemPPM::ProcessamentoDeImagemPPM(){

}
ProcessamentoDeImagemPPM::~ProcessamentoDeImagemPPM(){

}

unsigned int ProcessamentoDeImagemPPM::getAlturaUnsInt(){
    unsigned long AlturaImg_int = stoul(AlturaImg, nullptr, 10);
    return AlturaImg_int;
}

unsigned int ProcessamentoDeImagemPPM::getLarguraUnsInt(){
    unsigned long LarguraImg_int = stoul(LarguraImg, nullptr, 10);
    return LarguraImg_int;
}

void ProcessamentoDeImagemPPM::leitorImg(){

    ifstream ImageIn;
    ImageIn.open(getPathIn(), ios::in);

    if (ImageIn.is_open()){

        char comentario;
        vector<unsigned int> imgVector;

        getline(ImageIn, id, '\n');
        ImageIn.get(comentario);
        getline(ImageIn, CripStart, ' ');
        getline(ImageIn, CripLenght, ' ');
        getline(ImageIn, Cipher, '\n');
        getline(ImageIn, LarguraImg, ' ');
        getline(ImageIn, AlturaImg, '\n');
        getline(ImageIn, TonsImg, '\n');

        dimensions = getAlturaUnsInt() * getLarguraUnsInt();

        r.reserve(dimensions);
        g.reserve(dimensions);
        b.reserve(dimensions);

        char auxiliar;

        for (unsigned int contador = 0; contador < dimensions; contador++){
            ImageIn.read(&auxiliar, 1);
            r[contador] = (unsigned char) auxiliar;
            ImageIn.read(&auxiliar, 1);
            g[contador] = (unsigned char) auxiliar;
            ImageIn.read(&auxiliar, 1);
            b[contador] = (unsigned char) auxiliar;
        }

        ofstream Crip;
        Crip.open("criptografia.txt", ios::out);

        if(Crip.is_open()){

        }
        else {
            cout << "Não foi possível abrir o arquivo de criptografia" << endl;
        }
        Crip.close();
    }
    else {
        cout << "Não foi possível abrir a imagem" << endl;
    }
    ImageIn.close();}

void ProcessamentoDeImagemPPM::UncripMsg(){

}