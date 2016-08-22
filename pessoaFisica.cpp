#include <string>
#include <iostream>
#include "pessoaFisica.hpp"

using namespace std;

void PessoaFisica::setCPF(string CPF){
	this-> CPF = CPF;
}

string PessoaFisica::getCPF(){
	return CPF;
}

void PessoaFisica::setRG(string RG){
	this-> RG = RG;
}
string PessoaFisica::getRG(){
	return RG;
}

void PessoaFisica::setEstadoCivil(string estadoCivil){
	this-> estadoCivil = estadoCivil;
}

string PessoaFisica::getEstadoCivil(){
	return estadoCivil;
}


