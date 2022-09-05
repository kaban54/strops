#include "strops.h"


int myputs (const char *str)
{
    if (str == NULL) return EOF;

    int  index = 0;

    while (*(str + index) != '\0')
        if (putchar (*(str + index++)) == EOF) return EOF;

    if (putchar('\n') == EOF) return EOF;

    return 0;
}


char *mystrchr (const char *str, int ch)
{
    if (str == NULL || !isfinite(ch)) return NULL;
    int index = 0;

    while (*(str + index) != ch)
        if (*(str + index++) == '\0') return NULL;

    return (char*)(str + index);
}


size_t mystrlen (const char *str)
{
    if (str == NULL) return 0;

    size_t index = 0;

    while (*(str + index++) != '\0');

    return index - 1;
}


char *mystrcpy (char *dest, const char *source)
{
    if (dest == NULL || source == NULL) return NULL;

    int index = 0;

    while (*(source + index) != '\0')
    {
        *(dest + index) = *(source + index);
        index++;
    }

    *(dest + index) = '\0';

    return dest;
}


char *mystrncpy (char *dest, const char *source, size_t n)
{
    if (dest == NULL || source == NULL || !isfinite(n)) return NULL;

    int  index      = 0;
    char end_source = 0;

    for(index = 0; index < n; index++)
    {
        if (*(source + index) == '\0')
            end_source = 1;

        if (end_source)
            *(dest + index) = '\0';

        else
            *(dest + index) = *(source + index);
    }

    return dest;
}


char *mystrcat (char *dest, const char *append)
{
    if (dest == NULL || append == NULL) return NULL;

    int index = 0;
    int phase = 0;

    while (*(dest + index++) != '\0');

    phase = index - 1;
    index = 0;

    while(*(append + index) != '\0')
    {
        *(dest + index + phase) = *(append + index);
        index++;
    }

    *(dest + index + phase) = '\0';

    return dest;
}


char *mystrncat (char *dest, const char *append, size_t n)
{
    if (dest == NULL || append == NULL || !isfinite(n)) return NULL;

    int index = 0;
    int phase = 0;
    char end_append = 0;

    while (*(dest + index++) != '\0');

    phase = index - 1;

    for(index = 0; index < n; index++)
    {
        if (*(append + index) == '\0')
            end_append = 1;

        if (end_append)
            *(dest + index + phase) = '\0';

        else
            *(dest + index + phase) = *(append + index);
    }

    return dest;
}

char *myfgets (char *str, size_t n, FILE *fp)
{
    if (str == NULL || fp == NULL || !isfinite(n)) return NULL;

    int ch    = 0;
    int index = 0;

    ch = fgetc(fp);
    if ((ch == EOF) return NULL;

    for (index = 0; index < n - 1; index++)
    {
        *(str + index) = ch;

        if (ch == '\n') break;

        if ((ch = fgetc(fp)) == EOF) break;
    }

    *(str + index + 1) = '\0';

    return str;
}

char *mystrdup (const char *str)
{
    if (str == NULL) return NULL;
    
    char *strd = 0;

    if ((strd = (char*)malloc(mystrlen(str))) == 0) return NULL;

    return mystrcpy(strd, str);
}

char *mygetline (char *str, size_t n, char sep)
{
    if (str == NULL || !isfinite(n)) return NULL;
    
    int ch    = 0;
    int index = 0;

    ch = fgetc(stdin);
    if (ch == EOF) return NULL;

    for (index = 0; index < n - 1; index++)
    {
        *(str + index) = ch;

        if (ch == sep) break;

        if ((ch = fgetc(stdin)) == EOF) break;
    }

    *(str + index + 1) = '\0';

    return str;
}