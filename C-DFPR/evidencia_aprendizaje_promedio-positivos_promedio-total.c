//
//  evidencia_aprendizaje_promedio-positivos_promedio-total.c
//  C-DFPR
//
//  Created by Workstation on 26/09/16.
//  Copyright © 2016 Workstation. All rights reserved.
//

#include "evidencia_aprendizaje_promedio-positivos_promedio-total.h"
void solicitar_numeros_enteros(){
    int cantidad,cantidadMayoresACero;
    float promedioDePositivos,promedioTotal = 0;
    
    printf("Cuantos datos introducira?\n");
    scanf("%d",&cantidad);
    
    int numerosEnteros[cantidad];
    for( int i = 0 ; i < cantidad; i++){
        printf("Introdusca el numero %d:\n",i+1);
        scanf("%d",&numerosEnteros[i]);
    }
    for(int i = 0; i < cantidad; i++){
        if (numerosEnteros[i]>0 ){
            cantidadMayoresACero++;
            promedioDePositivos += numerosEnteros[i];
        }
        promedioTotal = promedioTotal + numerosEnteros[i];
    }
    promedioDePositivos = promedioDePositivos/cantidadMayoresACero;
    promedioTotal = promedioTotal/cantidad;
    printf("\n\nNumeros mayores a cero: %d\n", cantidadMayoresACero);
    printf("Promedio numeros positivos: %.2f\n", promedioDePositivos);
    printf("Promedio de todos los numeros: %.2f\n\n\n", promedioTotal);
}
