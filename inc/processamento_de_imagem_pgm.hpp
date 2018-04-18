#ifndef PROCESSAMENTO_DE_IMAGEM_PGM_HPP
#define PROCESSAMENTO_DE_IMAGEM_PGM_HPP
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <istream>
#include <ctype.h>


using namespace std;

class ProcessamentoDeImagemPGM : public ProcessamentoDeImagem{    
    public:
    
        ProcessamentoDeImagemPGM();
        ProcessamentoDeImagemPGM(setPathIn(string caminhoEntrada));
        ~ProcessamentoDeImagemPGM();

        void setPathIn(string caminhoEntrada);
        string getPathIn();

        void leitorImg();

        void UncripMsg();



};
#endif