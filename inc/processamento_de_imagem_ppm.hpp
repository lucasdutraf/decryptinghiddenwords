#ifndef PROCESSAMENTO_DE_IMAGEM_PPM_HPP
#define PROCESSAMENTO_DE_IMAGEM_PPM_HPP
#include "processamento_de_imagem.hpp"
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <istream>
#include <ctype.h>
#include <string>
#include <sstream>


using namespace std;

class ProcessamentoDeImagemPPM : public ProcessamentoDeImagem{    
    
    protected:

        vector<unsigned char> r;
        vector<unsigned char> g;
        vector<unsigned char> b;
        unsigned int dimensions;
    
    public:
    
        ProcessamentoDeImagemPPM();
        ~ProcessamentoDeImagemPPM();

        unsigned int getAlturaUnsInt();
        unsigned int getLarguraUnsInt();
        
        void leitorImg();
        void UncripMsg();
    
};
#endif