//
//  LlamadasTelefonicas.c
//  C-DFPR
//
//  Created by Workstation on 26/09/16.
//  Copyright © 2016 Workstation. All rights reserved.
//

#include "LlamadasTelefonicas.h"

void llamadasTelefonicas() {
    //Declaracion de variables
    float costo;
    int clave, minutos;
    
    //Se muestra informacion al usuario
    printf ("----------------------------------\n");
    printf ("Clave 12 $2.00 por minuto \n");
    printf ("Clave 15 $2.20 por minuto \n");
    printf ("Clave 18 $4.50 por minuto \n");
    printf ("Clave 19 $3.50 por minuto \n");
    printf ("Clave 23 $6.00 por minuto \n");
    printf ("Clave 25 $6.00 por minuto \n");
    printf ("Clave 29 $5.00 por minuto \n");
    printf ("----------------------------------\n");
    
    //Asignamos el valor introducido de clave a la variable respectiva
    printf ("Introduce una clave \n");
    scanf ("%d", &clave);
    
    //Asignamos el valor introducido de minutos a la repectiva vaiable
    printf ("Introduce los minutos \n");
    scanf ("%d", &minutos); /*lectura de datos tipo flotante de minutos de la llamada*/
    
    //Hacemos uso de seleccion multiple para verificar que clave escribio el usuario
    switch(clave)
    {
        //Cada una de estas lineas son de multiplicacion de minutos por el respectivo precio y asignacion a costo
        case 12: costo = minutos * 2.00;
            break;
        case 15: costo = minutos * 2.20;
            break;
        case 18: costo = minutos * 4.50;
            break;
        case 19: costo = minutos * 3.50;
            break;
        case 23: costo = minutos * 6.00;
            break;
        case 25: costo = minutos * 6.00;
            break;
        case 29: costo = minutos * 5.00;
            break;
        default: printf ("Error en clave ingresada");
    }
    
    //Impresion del resultado en pantalla
    printf ("\nCosto de la llamada %.2f\n\n", costo);
    
}

