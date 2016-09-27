//
//  programa_modificado_de_la_unidad2_promedio.c
//  C-DFPR
//
//  Created by Workstation on 26/09/16.
//  Copyright © 2016 Workstation. All rights reserved.
//

#include "programa_modificado_de_la_unidad2_promedio.h"
void actividad2_promedio_modificado() {
    // insert code here...
    //    Declaracion de variables tipo float para usrlas con decimales
    float calificaciones[4];
    float suma,resultado;
    
    //    imprimimos en pantalla lo que ncesitamos que se introdusca con l aayuda de un for
    for(int i = 0; i < sizeof(*calificaciones); i++){
        printf("Calificacion %d:\n",i+1);
        scanf("%f",&calificaciones[i]);
    }
    
//    dumamos todas las calificaciones
    for(int i = 0; i< sizeof(*calificaciones); i++){
//        comprobamos que sea una calificacion valida
        if(calificaciones[i] > 0){
            suma += calificaciones[i];
        }else{
            printf("Hay una calificacion invalida");
            break;
        }
        
    }
//    Realizamos la divicion entre la suma y la cantidad de datos
    resultado = suma/sizeof(*calificaciones);
    
    printf("El promedio de las calificaciones:\n");
    //Con l ayuda de un for imprimimor todos los datos del arreglo los cuales son las calificaciones
    for(int i = 0; i< sizeof(*calificaciones); i++){
        printf("%.2f\n",calificaciones[i]);
    }
    
//    imprimimos el resultado
    printf("Es : %.2f\n",resultado);
}
