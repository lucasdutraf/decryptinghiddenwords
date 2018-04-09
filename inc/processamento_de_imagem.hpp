#ifndef PROCESSAMENTO_DE_IMAGEM_HPP
#define PROCESSAMENTO_DE_IMAGEM_HPP
#include <fstream>
#include <string>
using namespace std;

class ProcessamentoDeImagem{
    private:
        int largura, altura;
        char id;
        int ValorMaximo;
        string caminhoEntrada;
        string ArmazenamentoImg;
        string caminhoSaida;
    
    public:
        void setPathIn(string caminhoEntrada);
        string getPathIn();

        void setPathOut(string caminhoSaida);
        string getPathOut();

        void setArmazenamento(string ArmazenamentoImg);
        string getArmazenamento();

        void leitorImg(string ArmazenamentoImg);


};
#endif
