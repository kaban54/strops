#include "strops.h"

int main(void)
{
    const char append[] = "append";
    const char source[] = "source";

    char dest1[100] = "dest1";
    char dest2[100] = "dest2";
    char dest3[100] = "dest3";
    char dest4[100] = "dest4";

    size_t n = 4;

    myputs_test    (source);

    mystrchr_test  (source, 'r');

    mystrlen_test  (source);

    mystrcpy_test  (dest1, source);

    mystrncpy_test (dest2, source, n);

    mystrcat_test  (dest3, append);

    mystrncat_test (dest4, append, n);
}
