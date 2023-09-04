#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    char *command = NULL;
    size_t len = 0;
    ssize_t read;

    while ((read = custom_getline(&command, &len)) != -1) {
        printf("%s\n", command);
    }

    free(command);
    return 0;
}
