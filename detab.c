#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
    int c,sit;
    while ((c=getchar())!=EOF)
    {
        if (c=='\t') {
                if (sit==OUT){
                    sit=IN;
                    putchar(' ');
                }
        }
        else {
                sit=OUT;
                putchar(c);
        }
    }
}
