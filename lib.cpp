//
// Created by Lorenzo Latona Schettini on 01/12/2022
//
#include "lib.h"

bool numero_primo(int f,int g){
    f--;
    if (f>1){
        if (g%f==0) {
            return false;
        }else{
            numero_primo(f,g);
        }
    }else {
        return true;
    }
}
