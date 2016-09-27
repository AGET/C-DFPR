//
//  evidencia_aprendizaje_orden_burbuja.c
//  C-DFPR
//
//  Created by Workstation on 26/09/16.
//  Copyright © 2016 Workstation. All rights reserved.
//

#include "evidencia_aprendizaje_orden_burbuja.h"

void ordenamiento_burbuja(){
    
//    Declarao las variables a utilizar
    int num[10];
    int aux;
    int n;
    n = 10;
//    Agrego valores a los campos del arreglo num
    for( int i = 0; i < n ; i ++){
        printf("Ingrese el número %d \n",i+1);
        scanf("%d",&num[i]);
    }
//    realizo tantas iteraciones como datos tengo en mi arreglo
    for( int i=1; i < n ;i++){
//        itero de nuevo hasta llegar al punto de la iteracion anterior
        for(int j=0; j < n-1-i; j++){
//            si encuentoro el dato donde me encuentro opsicionado actualmente es mayor lo asigno a un variable auxiliar
            if( num[j] > num[j+1] ){
				aux = num[j];
//                paso el dato menor en lugar de donde se encontraba el dato mas grande
				num[j] = num[j+1];
//                paso el dato mayor donde se encontraba el menor
				num[j+1] = aux;
            }
        }
    }

//    realizo iteraciones dsobre el arreglo para imprimir los datos
    printf("Los números ordenados asendentemente son:\n");
    for( int i = 0 ;i <  n; i++ ){
        printf ("%d => %d \n",i+1,num[i]);
    }
    printf("\n\n\n");
 
}
