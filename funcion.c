 #include <stdio.h>

 float sumar(float num1,float num2)
 {
     float totalsumar;
     totalsumar= num1 + num2;
     return totalsumar;
 }
 float restar(float num1,float num2)
 {
     float totalrestar;
     totalrestar= num1-num2;
     return totalrestar;
 }
 float multiplicar(float num1, float num2)
 {
     float totalmultiplicar;
     totalmultiplicar= num1*num2;
     return totalmultiplicar;
 }
 float division(float num1, float num2)
 {
     float totaldivision;
     if(num2==0)
     {
         printf("error dos operadores de la division son cero\n");
         return 0;
     }
     else
     {
         totaldivision=num1 / num2;
     }
     if(totaldivision !=0)
     {
         printf("la division es %.2f \n\n", totaldivision);
     }
     return totaldivision;
 }
    int factorial(int num1)
    {
        int totalfactorial;
        if(num1<0)
        {
            printf("error numero negativo en factorial \n");
            return 0;
        }
        else if(num1==0)
            return 1;
        totalfactorial = num1*factorial(num1-1);
        return totalfactorial;
    }
    float totales(float num1, float num2)
    {
        int factiacu;
        float suma, resta, mult,div;

        suma= sumar(num1,num2);
        resta= restar(num1, num2);
        mult = multiplicar(num1,num2);
        div= division(num1, num2);
        factiacu = factorial(num1);

    printf("la suma es %.2f\n", suma);
    printf("la resta es %.2f\n", resta);
    printf("la multiplicacion es %.2f\n", mult);
    if(div != 0)
    {
        printf("la division es %.2f\n", div);

    }
    if(factiacu != 0)

    {
        printf("el fac es %d es %d\n",(int)num1,factiacu);

    }
    return 0;
    }
