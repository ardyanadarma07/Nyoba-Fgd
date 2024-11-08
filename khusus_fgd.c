#include <stdio.h>
#include <stdlib.h>

void main (){
    system("cls");
    printf ("Hello World");
    int a, b, total;
    printf ("masukkan angka 1 : ");
    scanf("%d", &a);
    printf("Masukkan angka 2 : ");
    scanf("%d", &b);
    total = a + b;
    printf("Total : %d", total);
}