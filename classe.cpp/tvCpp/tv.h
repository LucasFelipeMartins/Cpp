#ifndef TV_H
#define TV_H

#include<iostream>
#include<string.h>

using namespace std;

class tv {
public:
    tv();
    tv(tv &outro);
    virtual ~tv();
    
    void setMarca(string marca);
    string getMarca();
    
    void setTamanho(float tamanho);
    float getTamanho();
    
    void setResolucao(float resolucao);
    float getResolucao();
    
    void setPreco(float preco);
    float getPreco();
    
    void preencher();
    void imprimir();
    
    
    
    
private:
    
    string marca;
    float tamanho;
    float resolucao;
    float preco;

};

#endif /* TV_H */

