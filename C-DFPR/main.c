//
//  main.c
//  C-DFPR
//
//  Created by Workstation on 19/07/16.
//  Copyright © 2016 Workstation. All rights reserved.
//

#include <stdio.h>
#include "actividad2.h"
#include "evidencia_aprendizaje.h"
#include "actividad2_palabra_palidromo.h"
#include "evidencia_aprendizaje_orden_burbuja.h"
#include "programa_modificado_de_la_unidad2_promedio.h"
#include "LlamadasTelefonicas.h"
#include "evidencia_aprendizaje_promedio-positivos_promedio-total.h"
#include "evidencia_aprendizaje_unidad6.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    
    while(1){
        int menu;
        printf("Menu principal!\n");
        printf("1.- Unidad 3, Actividad 2 Promedio de 4 calificaciones\n");
        printf("2.- Unidad 3, Evidencia de aprendizajeformula general\n");
        printf("3.- Unidad 4,actividad2 Lamadas telefonicas\n");
        printf("4.- Unidad 4, Evidencia de aprendizaje\n");
        printf("5.- Unidad 5,actividad2 palabra palindromo\n");
        printf("6.- Unidad 5,Evidencia de aprendizaje,Ordenamiento burbuja\n");
        printf("7.- Unidad 5,Autorreflexiones. Actividad 2 modificada (Promedio de4 calificaciones)\n");
        printf("8.- Unidad 6,Evidencia de aprendizaje\n");
        printf("9.- Salir\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:
                actividad2();
                break;
            case 2:
                evidencia_aprendizaje();
                break;
            case 3:
                llamadasTelefonicas();
                break;
            case 4:
                solicitar_numeros_enteros();
                break;
            case 5:
                actividad2_paindromo();
                break;
            case 6:
                ordenamiento_burbuja();
                break;
            case 7:
                actividad2_promedio_modificado();
                break;
            case 8:
                evidencia_aprendizaje_unidad6();
                break;
            case 9:
                salir();
                break;
            default:
                break;
        }
    }
    
    return 0;
}

int salir(){
    exit(0);
}
