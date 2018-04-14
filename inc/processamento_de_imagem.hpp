#ifndef PROCESSAMENTO_DE_IMAGEM_HPP
#define PROCESSAMENTO_DE_IMAGEM_HPP
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <istream>
#include <ctype.h>


using namespace std;

class ProcessamentoDeImagem{
    private:
        char id;
        string caminhoEntrada;
        string ArmazenamentoImg;
        string caminhoSaida;
    
    public:
    
        ProcessamentoDeImagem();
        ~ProcessamentoDeImagem();
    
        void setPathIn(string caminhoEntrada);
        string getPathIn();

        void leitorImg(string ArmazenamentoImg);


};
#endif
