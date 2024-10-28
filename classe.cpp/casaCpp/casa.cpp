#include <string.h>
#include "casa.h"

casa::casa() {
    
    this->endereco = "";
    this->area = 0.0;
    this->numQuartos = 0.0;
    this->preco = 0.0;
   
}

casa::casa(casa &outro) {
    
    this->endereco = outro.getEndereco();
    this->area = outro.getArea();
    this->numQuartos = outro.getNumQuartos();
    this->preco = outro.getPreco();
    
}

    void casa::setEndereco(string endereco){
        this->endereco = endereco;
        
    }
    string casa::getEndereco(){
        return this->endereco;
    }
    
    void casa::setArea(float area){
        this->area = area;
    }
    float casa::getArea(){
        return this->area;
    }
    
    void casa::setNumQuartos(int numQuartos){
        this->numQuartos = numQuartos;
    }
    int casa::getNumQuartos(){
        return this->numQuartos;
    }
    
    void casa::setPreco(float preco){
        this->preco = preco;
    }
    float casa::getPreco(){
        return this->preco; 
    }
    
    void casa::preencher(){
        cout << "----------------------------------------" << endl;
        cout << "Endereco: ";
        cin >> this->endereco;
        cout << "Area: ";
        cin >> this->area;
        cout << "Numero de quartos: ";
        cin >> this->numQuartos;
        cout << "preco: ";
        cin >> this->preco;
    
    }
    
    void casa::imprimir(){
        
        
        cout << "Endereco: " << this->endereco << endl;
        cout << "Area: " << this->area << endl;
        cout << "Numero de quartos: " << this->numQuartos << endl;
        cout << "Preco: " << this->preco << endl;
        
    }


casa::~casa() {
}

