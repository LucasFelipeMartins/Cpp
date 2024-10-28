#include "tv.h"
#include <string.h>

tv::tv() {
    
    this->marca = "";
    this->tamanho = 0.0;
    this->resolucao = 0.0;
    this->preco = 0.0;
    
}

tv::tv(tv &outro) {
    
    this->marca = outro.getMarca();
    this->tamanho = outro.getTamanho();
    this->resolucao = outro.getResolucao();
    this->preco = outro.getPreco();
    
}

void tv::setMarca(string marca){
        this->marca = marca;
        
    }
    string tv::getMarca(){
        return this->marca;
    }
    
    void tv::setTamanho(float tamanho){
        this->tamanho = tamanho;
    }
    float tv::getTamanho(){
        return this->tamanho;
    }
    
    void tv::setResolucao(float resolucao){
        this->resolucao = resolucao;
    }
    float tv::getResolucao(){
        return this->resolucao;
    }
    
    void tv::setPreco(float preco){
        this->preco = preco;
    }
    float tv::getPreco(){
        return this->preco; 
    }
    
    void tv::preencher(){
        cout << "----------------------------------------" << endl;
        cout << "Marca: ";
        cin >> this->marca;
        cout << "Tamanho: ";
        cin >> this->tamanho;
        cout << "Resolucao: ";
        cin >> this->resolucao;
        cout << "preco: ";
        cin >> this->preco;
    
    }
    
    void tv::imprimir(){
        
        
        cout << "Marca: " << this->marca << endl;
        cout << "Tamanho: " << this->tamanho << endl;
        cout << "Resolucao: " << this->resolucao << endl;
        cout << "Preco: " << this->preco << endl;
        
    }

tv::~tv() {
}

