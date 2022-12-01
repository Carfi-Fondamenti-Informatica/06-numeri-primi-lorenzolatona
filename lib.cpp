//
// Created by Lorenzo Latona Schettini on 01/12/2022
//
#include "lib.h"

bool numeroprimo(int f,int g){
    f--;
    if (f>1){
        if (g%f==0) {
            return false;
        }else{
            numeroprimo(f,g);
        }
    }else {
        return true;
    }
}
