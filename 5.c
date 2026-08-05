#include <stdio.h>
#include <string.h>   

#define PRAISE "What a super marvelous name!"

int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%39s", name);

    printf("Hello, %s. %s\n", name, PRAISE);

    printf("Your name of %zu letters occupies %zu memory cells.\n",
           strlen(name), sizeof name);

    printf("The phrase of praise has %zu letters ",
           strlen(PRAISE));

    printf("and occupies %zu memory cells.\n",
           sizeof PRAISE);

    return 0;
}
