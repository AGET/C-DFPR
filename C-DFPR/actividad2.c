//
//  actividad2.c
//  C-DFPR
//
//  Created by Workstation on 25/09/16.
//  Copyright © 2016 Workstation. All rights reserved.
//

#include "actividad2.h"


int actividad2() {
    // insert code here...
//    Declaracion de variables tipo float para usrlas con decimales
    float cal1,cal2,cal3,cal4;
//    imprimimos en pantalla lo que ncesitamos que se introdusca
    printf("\nCalificacion 1:\n");
    //    guardamos el dato introducido en la variable correspondiente usando el modificador &
    scanf("%f",&cal1);
    
//    imprimimos en pantalla lo que ncesitamos que se introdusca
    printf("Calificacion 2:\n");
    //    guardamos el dato introducido en la variable correspondiente usando el modificador &
    scanf("%f",&cal2);
    
    //    imprimimos en pantalla lo que ncesitamos que se introdusca
    printf("Calificacion 3:\n");
    //    guardamos el dato introducido en la variable correspondiente usando el modificador &
    scanf("%f",&cal3);
    
    //    imprimimos en pantalla lo que ncesitamos que se introdusca
    printf("Calificacion 4:\n");
//    guardamos el dato introducido en la variable correspondiente usando el modificador &
    scanf("%f",&cal4);
    
    //realizamos la operacion de suma y divicion de el resultado dentro de la funcion printf, en la cual tambien mostramos las calificaciones y el resultado
    //En el codigo .2f solo indicamos que queremos que muestre valores tipo float con dos decimales y el codigo \n es para hacer saltos de linea.
    printf("\n\n!!El promedio del alumno segun sus calificaciones %.2f, %.2f, %.2f, %.2f es: %.2f!! \n\n\n",cal1,cal2,cal3,cal4,((cal1+cal2+cal3+cal4)/4));
    
    return 0;
}
