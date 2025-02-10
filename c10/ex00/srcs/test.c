#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
    struct stat fileStat;
    
    if (stat("test.txt", &fileStat) == 0) {
        printf("File size: %ld bytes\n", fileStat.st_size);
        printf("Permissions: %o\n", fileStat.st_mode & 0777);
    } else {
        perror("stat");
    }

    return 0;
}

