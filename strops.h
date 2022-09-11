#ifndef STROPS_H
#define STROPS_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const size_t MAXLEN = 128;

// string functions --------------------------------------------------------------------------------------

int myputs(const char *str);

char *mystrchr (const char *str, int ch);

size_t mystrlen (const char *str);

char *mystrcpy (char *dest, const char *source);

char *mystrncpy (char *dest, const char *source, size_t n);

char *mystrcat (char *dest, const char *append);

char *mystrncat (char *dest, const char *append, size_t n);

char *myfgets (char *str, size_t n, FILE *fp);

char *mystrdup (const char *str);

char *mygetline (FILE *fp);

// test functions ----------------------------------------------------------------------------------------

void unittest();

void puts_test();

void strlen_test();

void strchr_test();

void strcpy_test();

void strncpy_test();

void strcat_test();

void strncat_test();

void fgets_test();

void strdup_test();

void getline_test();

// -------------------------------------------------------------------------------------------------------

#endif
