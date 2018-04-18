#include "processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>
#include <string>


using namespace std;

//Contrutores e destrutores ------------------------------------------------

ProcessamentoDeImagem::ProcessamentoDeImagem(){
    string caminhoEntrada = " ";
}
ProcessamentoDeImagem::~ProcessamentoDeImagem(){
}

// Getters e Setters -------------------------------------------------------

void ProcessamentoDeImagem::setId(string id);{
    this->id = id;
}
string ProcessamentoDeImagem::getId();{
    return id;
}

void ProcessamentoDeImagem::setCripStart(string CripStart);{
    this->CripStart = CripStart;
}
string ProcessamentoDeImagem::getCripStart();{
    return CripStart;
}

void ProcessamentoDeImagem::setCripLenght(string CripLenght);{
    this->CripLenght = CripLenght;
}
string ProcessamentoDeImagem::getCripLenght();{
    return CripLenght;
}

void ProcessamentoDeImagem::setCipher(string Cipher);{
    this->Cipher = Cipher;
}
string ProcessamentoDeImagem::getCipher();{
    return Cipher;
}

void ProcessamentoDeImagem::setLarguraImg(string LarguraImg);{
    this->LarguraImg = LarguraImg;
}
string ProcessamentoDeImagem::getLarguraImg();{
    return LarguraImg;
}

void ProcessamentoDeImagem::setAlturaImg(string AlturaImg);{
    this->AlturaImg = AlturaImg;
}
string ProcessamentoDeImagem::getAlturaImg();{
    return AlturaImg;
}

void ProcessamentoDeImagem::setTonsImg(string TonsImg);{
    this->TonsImg = TonsImg;
}
string ProcessamentoDeImagem::getTonsImg();{
    return TonsImg;
}

void ProcessamentoDeImagemPGM::setPathIn(string caminhoEntrada){
    cin >> this->caminhoEntrada = caminhoEntrada;
}
string ProcessamentoDeImagemPGM::getPathIn(){
    return caminhoEntrada;
}

// Outras funções -----------------------------------------------------------------------

void ProcessamentoDeImagemPGM::leitorImg(){
}

void UncripMsg(){
    
}