#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"

int main() {
   
    
int v[5] = {2,3,6,4,7};

printf("Array: ");
printArray(v,5);

printf("Soma: ");
printf("%d\n", sum(v,5));

printf("Média: ");
printf("%.2lf\n", mean(v,5));

printf("Variação: ");
printf("%.2lf\n", variance(v,5));

printf("Desvio padrão: ");
printf("%.2lf\n", standardDeviation(v,5));

return EXIT_SUCCESS;
}
