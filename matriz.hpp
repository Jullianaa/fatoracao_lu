#ifndef MATRIZ_H	
#define MATRIZ_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Matriz {
private:
    int linhas;
    int colunas;
    float *dados;
public:
	Matriz();
    Matriz(int, int, float* );
    
    int getLinhas();
    void setLinhas(int);
    int getColunas();
    void setColunas(int);
    float *getDados();
    void setDados(float*);
};

#endif /* Matriz_H */
