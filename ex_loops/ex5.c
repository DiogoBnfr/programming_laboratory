#include <stdio.h>
#include <string.h>

int main(void)
{
        char buffer[50];

        scanf("%s", buffer);
        if (strcmp(buffer, "sabado") == 0 || strcmp(buffer, "domingo") == 0)
                puts("Fim de semana");
        else 
                puts("Dia Útil");

        return 0;
}