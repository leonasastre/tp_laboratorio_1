#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funcion.h"

int main()
{
    float a=0.0;
    float b=0.0;
    float tot;
    int fact;
    int nfactor;
    int opcion=0;
                while(opcion <9)
                {
                    printf("\CALCULADORA UTN FRA:\n\n");
                    printf("1.calcular primer calculo (a=%.2f)\n\n",a);
                    printf("2.calcular segundo calculo (b=%.2f)\n\n",b);




                    //calcular la suma de dos numeros flotantes (float a,float b) retorna total suma;

                    printf("3.calcular suma (a+b)\n\n");


                    //calcular la resta de dos numeros flotantes (float c, float d) retorna el total resta;


                    printf("4.calcular resta (a-b)\n\n");


                    //calcular la multiplicacion de dos numeros flotantes(float e, float f) retorna el total   multiplicacion;


                    printf("5.calcular multiplicacion (a*b)\n\n");


                    //calcular la division de dos numeros flotantes(float g, float h) retorna el total division;


                    printf("6.calcular division (a/b)\n\n");
                    //calcular el factorial (a!) retorna el factorial (a!);


                    printf("7.calcular factorial (a!)\n\n");
                    //calcular todo los totales ( float i, float h) retorna 0;


                    printf("8.calcular todas las operaciones\n\n");
                    // al apretar 9 sale de la calculadora;
                    printf("9.salir\n\n");

                    printf("ingrese una opcion del menu:\n");
                    fflush(stdin);
                    scanf("%d",&opcion);
                    system("cls");

                                switch(opcion)
                                {
                                    case 1:printf("\nIngrese primer numero:\n");
                                    scanf("%f",&a);
                                    break;
                                    case 2:printf("\nIngrese segundo numero:\n");
                                    scanf("%f",&b);
                                    break;
                                    case 3: tot=sumar(a,b);
                                            printf("la suma es %.2f\n\n",tot);
                                            break;
                                    case 4: tot=restar(a,b);
                                       printf("la resta es %.2f \n\n",tot);
                                            break;
                                    case 5: tot=multiplicar(a,b);
                                       printf("la multiplicacion es %.2f\n\n",tot);
                                       break;
                                    case 6: tot=division(a,b);
                                          if(tot !=0)
                                          {
                                              printf("la division es %2.f \n\n",tot);

                                          }
                                          break;
                                    case 7: nfactor=(int)a;
                                           fact= factorial(nfactor);
                                           if(fact!=0)
                                           {
                                               printf("el factorial de: %d es %d \n\n",nfactor,fact);
                                           }
                                           break;
                                    case 8: tot=totales(a,b);
                                             break;
                                    case 9: printf("salir del sistema\n");
                                           break;
                                }

                }
    return 0;
}
