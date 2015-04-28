#ifndef SERVICOS_H	
#define SERVICOS_H

#include <iostream>
#include <stdlib.h>
#define MAX 50

using namespace std;

class Servicos {
public:
	int lerMatriz();
	void escolherDimensao();
	void gerarMatrizPrincipal(int,int);
	void alterarMatriz(float );
	void gerarMatrizL();
	void gerarMatrizU();
    void alterarMatrizB(int ,int );
    void determinarY(int, int,int,int[][MAX] );
    void determinarX(int, int,int[]);
 
};

#endif /* SERVICOS_H */
