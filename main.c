#include "linkedList.h"
typedef struct {int x; int y;}player;

typedef struct  {
    player* p;
    int p_health;
}charer;

int writeInFile(const char *path,)
{
    FILE *fp = fopen(path,"w");


    fwrite(charr, sizeof(charer), 1, fp); 

    return 1;
}
int main()
{
    static FILE *fp = fopen("sanc.txt","w");

    if(fp == NULL)
    {
        return 0;
    }

    charer *charr = malloc(sizeof(charer));

    if(charr==NULL)
    {
        return 0;
    }

    for(int i=0;i<5;i++)
    {
        charr->p->x = i;
        charr->p->y = i+1;
        charr->p_health = 20 +i;
        fwrite(charr, sizeof(charer), 1, fp);  // write charer data
    }

   
    fclose(fp);

    FILE *fpr = fopen("sanc.txt", "rb");  // open in binary read mode

       for(int i=0;i<5;i++)
    {
        fread(charr,    sizeof(charer), 1, fpr);  // read charer data
        printf("x=%d y=%d health=%d\n", charr->p->x, charr->p->y, charr->p_health);
    }

    fclose(fpr);
    return 0;
}