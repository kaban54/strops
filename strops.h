#ifndef STROPS_H
#define STROPS_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int myputs(const char *str);

char *mystrchr (const char *str, int ch);

size_t mystrlen (const char *str);

char *mystrcpy (char *dest, const char *source);

char *mystrncpy (char *dest, const char *source, size_t n);

char *mystrcat (char *dest, const char *append);

char *mystrncat (char *dest, const char *append, size_t n);

char *myfgets (char *str, int num, FILE *fp);

char *mystrdup (const char *str);

void unittest();


#endif
