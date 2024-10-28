#include "tv.h"
#include <iostream>
#include <string.h>

using namespace std;

void calculaMaior(tv a, tv b){
    
    if(a.getPreco() > b.getPreco()){
        cout << "----------------------------------------" << endl;
        cout << "A Tv mais cara e: " << endl;
        a.imprimir();
        
    }else{
        cout << "----------------------------------------" << endl;
        cout << "A Tv mais cara e: " << endl;
        b.imprimir();
    }
}

int main(int argc, char** argv) {
    
    tv t1, t2;
    
    t1.preencher();
    t2.preencher();
    
    
    calculaMaior(t1, t2);
    
    return 0;
}
