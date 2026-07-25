#include <stdio.h>
#include <stdlib.h>
#define inches_per_sec 166;

int main(){

    int width,length,height,dimension,volume,weight;

   printf("Enter width, length, and height: ");
   scanf("%d %d %d", &width, &length, &height);
 
    volume=height*length*width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);  
    printf("volume is :%d\n",volume);
    weight = (volume + 165) / inches_per_sec ;
    printf("Dimensional weight (pounds): %d\n", weight);

    int _a_bottles=22;
    printf("%d\n",_a_bottles);

    system("pause");


    return 0;
}