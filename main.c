//
//  main.c
//  Print File
//
//  Created by Алексей Баринов on 30.11.2017.
//  Copyright © 2017 Era Company. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
    char string[255], *ps = NULL;
    FILE *f;
    int sizze = 0, pos = 0;
    f = fopen(argv[1], "r");
    if (f == NULL)
    {
        while (f == NULL) {
            printf("Неверный путь к файлу\n");
            exit(1);
        }
    }
    while (fgets(string, sizeof(string), f))
    {
        ps = fgets(string, sizeof(string), f);
        pos++;
        printf("%s\n", ps);
    }
    rewind(f);
    while ((fgetc(f)) != EOF)
        sizze++;
    fclose(f);
    printf("Написано %d записей, всего %d байт\n", pos, sizze);
    return 0;
}
