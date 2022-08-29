#include "strops.h"


int myputs (const char *str)
{
    int  index = 0;

    while (*(str + index) != '\0')
        if (putchar (*(str + index++)) == EOF) return EOF;

    if (putchar('\n') == EOF) return EOF;

    return 0;
}


char *mystrchr (const char *str, int ch)
{
    int index = 0;

    while (*(str + index++) != ch)
        if (ch == '\0') return NULL;

    return (char*)(str + index - 1);
}


size_t mystrlen (const char *str)
{
    size_t index = 0;

    while (*(str + index++) != '\0');

    return index - 1;
}


char *mystrcpy (char *dest, const char *source)
{
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