//
//  evidencia_aprendizaje.c
//  C-DFPR
//
//  Created by Workstation on 26/09/16.
//  Copyright © 2016 Workstation. All rights reserved.
//

#include "evidencia_aprendizaje.h"

int evidencia_aprendizaje ()
{
    
    float a,b,c,discriminante,x1,x2;
    
    //    Se pide el ingreso del dato
    printf("\n\ningrese valor para a:\n");
    //    se asigna lo introducido a dicha variable
    scanf("%f",&a);
    
    //    Se pide el ingreso del dato
    printf("ingrese valor para b:\n");
    //    se asigna lo introducido a dicha variable
    scanf("%f",&b);
    
    //    Se pide el ingreso del dato
    printf("ingrese valor para c:\n");
    //    se asigna lo introducido a dicha variable
    scanf("%f",&c);
    
    //    se realiza las operacionnes y se eleva  b al cuadrado
    discriminante = (b*b)-(4*a*c);
    //    se realiza la raiz cuadrada del discriminante con la funcion aqrt
    discriminante = sqrt(discriminante);
    //    se realizan las operaciondes de sumas, multiplicacion y divicion asignando el resultado a dicha variable
    x1 = (-b+discriminante)/(a*2);
    //    se realizan las operaciondes de sumas, multiplicacion y divicion asignando el resultado a dicha variable
    x2 = (-b-discriminante)/(a*2);
    //Se imprime el resultado
    printf("El resultado es: X1: %.3f X2: %.3f\n\n",x1,x2);

    return 0;   
}
