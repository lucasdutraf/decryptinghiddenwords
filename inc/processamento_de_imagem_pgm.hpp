#ifndef PROCESSAMENTO_DE_IMAGEM_PGM_HPP
#define PROCESSAMENTO_DE_IMAGEM_PGM_HPP
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <istream>
#include <ctype.h>
#include "processamento_de_imagem.hpp"


using namespace std;

class ProcessamentoDeImagemPGM : public ProcessamentoDeImagem {    
    public:
    
        ProcessamentoDeImagemPGM();
        ~ProcessamentoDeImagemPGM();

        void leitorImg();

        int getCripStartInt();

        int getCripLenghtInt();

        int getCipherInt();

        void UncripMsg();



};
#endif