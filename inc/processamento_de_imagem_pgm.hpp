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

        int getCripStartInt(){
            int CripStart_int = atoi(CripStart.c_str());
            return CripStart_int;
        }

        int getCripLenghtInt(){
            int CripLenght_int = atoi(CripLenght.c_str());
            return CripLenght_int;
        }

        int getCipherInt(){
            int Cipher_int = atoi(Cipher.c_str());
            return Cipher_int;
        }

        void UncripMsg();



};
#endif