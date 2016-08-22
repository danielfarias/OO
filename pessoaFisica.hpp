#ifndef PESSOAFISICA_HPP
#define PESSOAFISICA_HPP

#include <string>
#include <iostream>
#include "pessoa.hpp"

class PessoaFisica:public Pessoa{

protected:
	string CPF;
	string RG;
	string estadoCivil;

public:
	PessoaFisica();
	PessoaFisica(string CPF, string RG, string estadoCivil);
	void PessoaFisica::setCPF(string CPF);
	string PessoaFisica::getCPF();
	void PessoaFisica::setRG(string RG);
	string PessoaFisica::getRG();
	void PessoaFisica::setEstadoCivil(string estadoCivil);
	string PessoaFisica::getEstadoCivil;
	
};

#endif
