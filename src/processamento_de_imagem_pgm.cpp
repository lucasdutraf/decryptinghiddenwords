#include "processamento_de_imagem_pgm.hpp"
#include "processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <sstream>


using namespace std;

ProcessamentoDeImagemPGM::ProcessamentoDeImagemPGM(){
   
}
ProcessamentoDeImagemPGM::~ProcessamentoDeImagemPGM(){
   
}


void ProcessamentoDeImagemPGM::leitorImg(){
    
    char comentario;
    vector<char> imgVector;
    char conteudo;


    ifstream ImageIn;
    ImageIn.open(getPathIn());

    getline(ImageIn, id, '\n');
    ImageIn.get(comentario);
    getline(ImageIn, CripStart, ' ');
    getline(ImageIn, CripLenght, ' ');
    getline(ImageIn, Cipher, '\n');
    getline(ImageIn, LarguraImg, ' ');
    getline(ImageIn, AlturaImg, '\n');
    getline(ImageIn, TonsImg, '\n');


    if (ImageIn.is_open()){

        while(!ImageIn.eof()){
            ImageIn.get(conteudo);
            imgVector.push_back(conteudo);
        }

        ofstream Crip;
        Crip.open("criptografia.txt", ios::out);

        if (Crip.is_open()){
            for(int contador = getCripStartInt(); contador < getCripStartInt() +    getCripLenghtInt(); contador++){
                Crip << imgVector[contador];
            }
        }
        else{
            cout << "Não foi possivel abrir o arquivo de criptografia" << endl;
        }
        Crip.close();
    }

    else{
        cout << "Não foi possível abrir o arquivo" << endl;
    }
    ImageIn.close();
}

void ProcessamentoDeImagemPGM::UncripMsg(){
    ifstream Crip;
    int contador_crip = 0;
    int WithoutCrip = 0;
    char letras_criptografadas;

    Crip.open("criptografia.txt", ios::in);
    if(Crip.is_open()){
            while(contador_crip < getCripLenghtInt()){
                Crip.get(letras_criptografadas);

                if(letras_criptografadas == '.' || letras_criptografadas == '-' || letras_criptografadas == ' ' ){
                    WithoutCrip = (int)letras_criptografadas;
                }
                else{
                    if(islower(letras_criptografadas)){
                        if(((int)letras_criptografadas - getCipherInt()) < 97){
                            WithoutCrip = ((int)letras_criptografadas - getCipherInt() ) + 26;
                        }
                        else {
                            WithoutCrip = (int)letras_criptografadas - getCipherInt();
                        }
                    }
                    else{
                        if(((int)letras_criptografadas - getCipherInt()) < 65){
                            WithoutCrip = ((int)letras_criptografadas - getCipherInt()) + 26;
                        }
                        else {
                            WithoutCrip = (int)letras_criptografadas - getCipherInt();
                        }
                    }
                }
                cout << (char)WithoutCrip;
                WithoutCrip = 0;
                contador_crip++;
            }
            cout << endl;

    }
    else{
        cout << "Arquivo de criptografia inacessível" << endl;
    }
    Crip.close();
}