#include "matriz.hpp"

using namespace std;

Matriz::Matriz() {
	Linhas =1;
	Colunas=1;
	Dados = 1;
}

Matriz::Matriz(int linhas, int colunas, float *dados) {	
	this->linhas=linhas;
	this->colunas=colunas;
	this->dados=dados;
}

int Matriz::getLinhas() {
	return this->linhas;
}

void Matriz::setLinhas(int linhas) {
	this->linhas = linhas;
}

int Matriz::getColunas() {
	return this->colunas;
}

void Matriz::setColunas(int colunas) {
	this->colunas = colunas;
}
float * Matriz::getDados() {
	return this->dados;
}

void Matriz::setDados(float *dados) {
	this->dados = dados;
}
