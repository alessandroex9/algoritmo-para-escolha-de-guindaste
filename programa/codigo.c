#include<stdio.h>

float cal_peso () {

    float peso, volume, r;
    printf("Qual e o volume da carga: \n");
    scanf("%f", &volume);
    r = 25;
    peso = r * volume;
    return peso;
}

main () {

    float peso1;

    peso1 = cal_peso();

    if(peso1<=500){
        printf("O guindaste vai ser o G1\n");
        printf("Pois o peso e:%.2f", peso1);
    }
    else

    if(500<peso1<=1500){
        printf("O guindaste vai ser o G2\n");
        printf("Pois o peso e:%.2f", peso1);
    }
    else

    if(peso1>1500){
        printf("O guindaste vai ser o G3\n");
        printf("Pois o peso e:%.2f", peso1);
    }
    return 0;
}