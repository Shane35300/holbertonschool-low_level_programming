#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s filename ...\n", argv[0]);
        return 1;
    }
    char *path = getenv("PATH");
    if (path == NULL) {
        perror("getenv failed");
        return 1;
    }
    char *dir = strtok(path, ":");
    while (dir != NULL) {
        for (int i = 1; i < argc; i++) {
            char full_path[1024]; // Utilisez une taille appropriée
            snprintf(full_path, sizeof(full_path), "%s/%s", dir, argv[i]);
            struct stat file_info;
            if (stat(full_path, &file_info) == 0) {
                printf("%s\n", full_path);
            }
        }
        dir = strtok(NULL, ":");
    }
    return 0;
}
