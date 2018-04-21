#ifndef PROCESSAMENTO_DE_IMAGEM_HPP
#define PROCESSAMENTO_DE_IMAGEM_HPP
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <istream>
#include <ctype.h>


using namespace std;

class ProcessamentoDeImagem {
    private:
        string caminhoEntrada;
    
    protected:

        string id, CripStart, CripLenght;
        string Cipher, LarguraImg, AlturaImg, TonsImg;
    
    public:
    
        //Contrutores e destrutores ------------------------------------------------

        ProcessamentoDeImagem();
        virtual ~ProcessamentoDeImagem() = 0;

        // Getters e Setters -------------------------------------------------------

        virtual void setId(string id);
        virtual string getId();

        virtual void setCripStart(string CripStart);
        virtual string getCripStart();

        virtual void setCripLenght(string CripLenght);
        virtual string getCripLenght();

        virtual void setCipher(string Cipher);
        virtual string getCipher();

        virtual void setLarguraImg(string LarguraImg);
        virtual string getLarguraImg();

        virtual void setAlturaImg(string AlturaImg);
        virtual string getAlturaImg();

        virtual void setTonsImg(string TonsImg);
        virtual string getTonsImg();
    
        virtual void setPathIn(string caminhoEntrada);
        virtual string getPathIn();

        // Outras funções -----------------------------------------------------------------------

        virtual void leitorImg();

        virtual void UncripMsg();


};
#endif
