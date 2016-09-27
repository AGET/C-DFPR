//
//  actividad2_palabra_palidromo.c
//  C-DFPR
//
//  Created by Workstation on 26/09/16.
//  Copyright © 2016 Workstation. All rights reserved.
//

#include "actividad2_palabra_palidromo.h"

void actividad2_paindromo()
{
    
    char palabraIntroducida[500];
    int cantidad;
    int palindromo;
    
    palindromo = 0;
    
//    pedimos una palabra a el usuario y la guardamos en palabraIntroducida
    
    printf( "ingrese la palabra:\n");
    scanf("%s",palabraIntroducida);
    
//    contamos el tamanio de la cadena
    cantidad = strlen(palabraIntroducida);
    
//    declaramos dos arreglos del tamanio de la cadena
    char palabraEnArreglo[cantidad];
    char palabraEnArregloAlrevez[cantidad];
    
//    introducimos cada caracter de la palabra introducida en un arreglo
    for (int i = 0; i < cantidad; i++ ){
        palabraEnArreglo[i] =  palabraIntroducida[i];
    }
    
//    del arreglo que teniamos movemos cada uno de sus elementos de manera inverza
    for( int i = 0 ; i < cantidad; i++){
        palabraEnArregloAlrevez[(cantidad-1)-i] = palabraEnArreglo[i];
    }
    
//    iteramos sobre todos los elementos de los dos arreglos comparndo cada indice
    for (int i = 0; i < cantidad; i++ ){
        if (palabraEnArregloAlrevez[i]!=palabraEnArreglo[i]){
//            encaso de que un indice no sea igual esto quiere decir que la palabra no es palindroma y salimos del ciblo
            palindromo = 0;
            break;
        }else{
//            en caso de ser palindroma lo establecemos con un 1
            palindromo = 1;
        }
    }
    
//    comparamos el resultado final para mostrar el resultado
    if(palindromo == 1){
        printf("\nEs palindromo\n\n");
    }else{
        printf("\nNo es palindromo\n\n");
    }
    
 
}
