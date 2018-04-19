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
        string caminhoEntrada;
    
    protected:

        string id, CripStart, CripLenght;
        string Cipher, LarguraImg, AlturaImg, TonsImg;
    
    public:
    
        //Contrutores e destrutores ------------------------------------------------

        ProcessamentoDeImagem();
        ~ProcessamentoDeImagem();

        // Getters e Setters -------------------------------------------------------

        void setId(string id);
        string getId();

        void setCripStart(string CripStart);
        string getCripStart();

        void setCripLenght(string CripLenght);
        string getCripLenght();

        void setCipher(string Cipher);
        string getCipher();

        void setLarguraImg(string LarguraImg);
        string getLarguraImg();

        void setAlturaImg(string AlturaImg);
        string getAlturaImg();

        void setTonsImg(string TonsImg);
        string getTonsImg();
    
        void setPathIn(string caminhoEntrada);
        string getPathIn();

        // Outras funções -----------------------------------------------------------------------

        void leitorImg();

        void UncripMsg();


};
#endif
