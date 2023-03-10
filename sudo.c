#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int sudo_map(char *filepath) {
    char buffer[90];
    int x = 0;
    int **map;

    int fd = open(filepath, O_RDONLY);
    long int size = read(fd, buffer, 90);
    if (size == -1)
        return 84;

    map = malloc(9 * sizeof(int *));
    if (map == NULL)
        return 84;

    while (x < 9) {
        map[x] = malloc(9 * sizeof(int));
        if (map[x] == NULL)
            return 84;
        ++x;
    }

    if (buffer[0] == '\0')
        return 84;
    buffer[size] = '\0';
    printf("%s\n", buffer);
    close(fd);
    for(int i = 0; i < 9; ++i){
      free(map[i]);
    }
    free(map);

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("%s\n", "Too Few Arguments");
        return 84;
    }
    if (sudo_map(argv[1]) == 84) {
      printf("%s\n", "Error with the file");
      return 84;
    }
    return 0;
}
