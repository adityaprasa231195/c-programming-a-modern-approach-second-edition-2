#include <stdio.h>
#include <stdlib.h>

int main(){


    int width,length,height,dimension,volume,weight;
    height=8;
    length=12;
    width=10;
    volume=height*length*width;
    
    printf("Dimensions: %dx%dx%d\n", length, width, height);  
    printf("volume is :%d\n",volume);
    weight = (volume + 165) / 166;
    printf("Dimensional weight (pounds): %d\n", weight);


   system("pause");

    return 0;
}