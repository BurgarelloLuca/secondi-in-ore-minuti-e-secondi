#include <iostream>
#include<stdio.h>
int main() {
int ore,minuti,secondi;
    int restoOre,restoMinuti;
    printf("inserire i secondi");
    scanf("%d",&secondi);
    ore=secondi/3600;
    printf("%i ore\n",ore);
    restoOre=secondi%3600;
    minuti=restoOre/60;
    printf("%i minuti\n",minuti);
    restoMinuti=restoOre%60;
    secondi=restoMinuti;
    printf("%i secondi",secondi);
}
