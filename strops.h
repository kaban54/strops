#ifndef STROPS_H
#define STROPS_H

#include <stdio.h>



int myputs(const char *str);

char *mystrchr (const char *str, int ch);

size_t mystrlen (const char *str);

char *mystrcpy (char *dest, const char *source);

char *mystrncpy (char *dest, const char *source, size_t n);

char *mystrcat (char *dest, const char *append);

char *mystrncat (char *dest, const char *append, size_t n);


void myputs_test (const char *str);

void mystrchr_test (const char *str, int ch);

void mystrlen_test (const char *str);

void mystrcpy_test (char *dest, const char *source);

void mystrncpy_test (char *dest, const char *source, size_t n);

void mystrcat_test (char *dest, const char *append);

void mystrncat_test (char *dest, const char *append, size_t n);


#endif
