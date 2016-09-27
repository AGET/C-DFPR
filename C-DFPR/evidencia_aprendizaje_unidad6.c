//
//  evidencia_aprendizaje_unidad6.c
//  C-DFPR
//
//  Created by Workstation on 26/09/16.
//  Copyright © 2016 Workstation. All rights reserved.
//

#include "evidencia_aprendizaje_unidad6.h"
//Declara las funciones a utilizar en el archivo
int factorial(int numero);

//Esta es la funcion principal, solo cambbie de nombre ya que el main lo ocupo de menu
int evidencia_aprendizaje_unidad6(){
    //Tenemos variables las cuales tienen un dato y la otra almacenara el resultado
    int valor = 4 ;
    int resultado;
    
//    pasamos 4 a la funcion factorial y lo asignamos a resultado
    resultado = factorial(valor);
    
//    imprimimos resultado
    printf("El factorial de %d es %d \n\n\n",valor,resultado);
    
//    finaliza la funcion mandando un al sistema
    return 0;
}

//funcion factorial
int factorial(int numero){
    int i;
    int devuelve = 1;
    
//    multiplica todos los numeros menores a numero entre si mismo
    for(i = 1; i <= numero; i++){
        devuelve = devuelve * i;
    }
    
//    devuelve el resultado de la multiplicacion
    return devuelve;
}
