#include "casa.h"
#include <iostream>
#include <string.h>

using namespace std;

void calculaMaior(casa a, casa b){
    
    if(a.getPreco() > b.getPreco()){
        cout << "----------------------------------------" << endl;
        cout << "A Casa mais cara e: " << endl;
        a.imprimir();
        
    }else{
        cout << "----------------------------------------" << endl;
        cout << "A Casa mais cara e: " << endl;
        b.imprimir();
    }
}

int main(int argc, char** argv) {
    
    casa c1, c2;
    
    c1.preencher();
    c2.preencher();
    
    
    calculaMaior(c1, c2);
    
    return 0;
}

