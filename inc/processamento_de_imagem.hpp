#ifndef PROCESSAMENTO_DE_IMAGEM_HPP
#define PROCESSAMENTO_DE_IMAGEM_HPP
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <istream>


using namespace std;

class ProcessamentoDeImagem{
    private:
        char id;
        string caminhoEntrada;
        string ArmazenamentoImg;
        string caminhoSaida;
    
    public:
    
        ProcessamentoDeImagem();
    
        void setPathIn(string caminhoEntrada);
        string getPathIn();

        void setPathOut(string caminhoSaida);
        string getPathOut();

        void setArmazenamento(string ArmazenamentoImg);
        string getArmazenamento();

        void leitorImg(string ArmazenamentoImg);


};
#endif
