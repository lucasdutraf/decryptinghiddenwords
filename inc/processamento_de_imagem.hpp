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
        string caminho;
    
    public:
        void setPath(string caminho);
        string getPath();

        void leArquivo();

        void 

        


};
#endif
