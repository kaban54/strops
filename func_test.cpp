#include "strops.h"


void myputs_test (const char *str)
{
    printf ("myputs test:\n");
    myputs (str);
}

void mystrchr_test (const char *str, int ch)
{
    printf ("mystrchr test:\n");
    printf ("%c \n", *(mystrchr(str, ch)));
}

void mystrlen_test (const char *str)
{
    printf ("mystrlen test:\n");
    printf ("%d \n", mystrlen(str));
}

void mystrcpy_test (char *dest, const char *source)
{
    printf ("mystrcpy test:\n");
    printf ("%s \n", mystrcpy(dest, source));
}

void mystrncpy_test (char *dest, const char *source, size_t n)
{
    printf ("mystrncpy test:\n");
    printf ("%s \n", mystrncpy(dest, source, n));
}

void mystrcat_test (char *dest, const char *append)
{
    printf ("mystrcat test:\n");
    printf ("%s \n", mystrcat(dest, append));
}

void mystrncat_test (char *dest, const char *append, size_t n)
{
    printf ("mystrncat test:\n");
    printf ("%s \n", mystrncat(dest, append, n));
}
