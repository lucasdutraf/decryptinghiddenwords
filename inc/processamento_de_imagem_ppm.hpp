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
    public:
    
        ProcessamentoDeImagemPPM();
        ProcessamentoDeImagemPPM(getPathIn());
        ~ProcessamentoDeImagemPPM();
    
        void leitorImg(string ArmazenamentoImg);


};
#endif