#include <dirent.h>
#include <stdio.h>

int main(int argc, char *args[]) {
    DIR *dir;
    struct dirent *ent;

    if ((dir = opendir(args[1])) == NULL) {
        printf("Napaka!\n");
        return 1;
    }

    while ((ent = readdir(dir)) != NULL) {
       printf("%s\n", ent->d_name);
    }

}
