#include<stdio.h>
float soma(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mult(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}
int main(){
    float x, y;
    int op;
    printf("° + - x /\n");
    printf("° MENU :>\n");
    printf("*************\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite a operacao desejada:\n");
    scanf("%d",&op);
    switch(op){
        case 1:
            printf("Digite o primeiro numero:\n");
            scanf("%f",&x);
            printf("Digite o segundo numero:\n");
            scanf("%f",&y);
            printf("Resultado: %.2f\n", soma(x,y));
            break;
        case 2:
            printf("Digite o primeiro numero:\n");
            scanf("%f",&x);
            printf("Digite o segundo numero:\n");
            scanf("%f",&y);
            printf("Resultado: %.2f\n", sub(x,y));
            break;
        case 3:
            printf("Digite o primeiro numero:\n");
            scanf("%f",&x);
            printf("Digite o segundo numero:\n");
            scanf("%f",&y);
            printf("Resultado: %.2f\n", mult(x,y));
            break;
        case 4:
            printf("Digite o primeiro numero:\n");
            scanf("%f",&x);
            printf("Digite o segundo numero:\n");
            scanf("%f",&y);
            if(y == 0){
                printf("Nao eh possivel dividir por zero!\n");
            }else{
                printf("Resultado: %.2f\n", div(x,y));
            }
            break;
        default:
            printf("Operacao invalida, tente novamente.\n");
    }
    return 0;
}
