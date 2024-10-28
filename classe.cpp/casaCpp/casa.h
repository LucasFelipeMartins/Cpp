#ifndef CASA_H
#define CASA_H

#include<iostream>
#include<string.h>

using namespace std;

class casa {
public:
    casa();
    casa(casa &outro);
    virtual ~casa();
    
    void setEndereco(string endereco);
    string getEndereco();
    
    void setArea(float area);
    float getArea();
    
    void setNumQuartos(int numQuartos);
    int getNumQuartos();
    
    void setPreco(float preco);
    float getPreco();
    
    void preencher();
    void imprimir();
    
private:

    string endereco;
    float area;
    int numQuartos;
    float preco;
    
};

#endif /* CASA_H */

