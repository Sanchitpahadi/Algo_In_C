#include <stdio.h>
#include <stdlib.h>

typedef struct { int x; int y; } player;

typedef struct {       // remove the tag name 'charer' here
    player p;
    int p_health;
} charer;              // name goes here instead

int main()
{
    FILE *fp = fopen("sanc.bin", "wb");  // binary mode + .bin extension

    if (fp == NULL)
    {
        fprintf(stderr, "ERROR: could not open file for writing\n");
        return 1;      // return 1 on failure, not 0
    }

    charer *charr = malloc(sizeof(charer));

    if (charr == NULL)
    {
        fclose(fp);    // close file before returning on error
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        charr->p.x      = i;
        charr->p.y      = i + 1;
        charr->p_health = 20 + i;
        fwrite(charr, sizeof(charer), 1, fp);
    }

    fclose(fp);

    FILE *fpr = fopen("sanc.bin", "rb");
    if (fpr == NULL)
    {
        fprintf(stderr, "ERROR: could not open file for reading\n");
        free(charr);
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        fread(charr, sizeof(charer), 1, fpr);
        printf("x=%d y=%d health=%d\n", charr->p.x, charr->p.y, charr->p_health);
    }

    fclose(fpr);
    free(charr);       // free memory before exit
    return 0;
}