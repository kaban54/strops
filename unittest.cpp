#include "strops.h"

const int STR_SIZE = 100;
const char *INPUT_FILE = "test_in.txt";

void unittest()
{
// myputs test--------------------------------------------------------------------------------------------
    printf("myputs test:\n");
    printf (" myputs:\n");
    myputs (" abc");
    printf (" puts:\n");
    puts   (" abc");
// -------------------------------------------------------------------------------------------------------

    printf("\n");

// mystrchr test------------------------------------------------------------------------------------------
    const char *str = "abcde";
    char ch1 = 'c', ch2 = 'f';
    printf("mystrchr test:\n ");
    printf(strchr(str, ch1) == mystrchr(str, ch1) ? "OK" : "failed");
    printf("\n ");
    printf(strchr(str, ch2) == mystrchr(str, ch2) ? "OK" : "failed");
// -------------------------------------------------------------------------------------------------------

    printf("\n\n");

// mystrlen test------------------------------------------------------------------------------------------
    printf("mystrlen test:\n ");
    printf(strlen("abcd") == mystrlen("abcd") ? "OK" : "failed");
// -------------------------------------------------------------------------------------------------------

    printf("\n\n");

// mystrcpy test------------------------------------------------------------------------------------------
    char dest1    [STR_SIZE] = "1234567890";
    char dest1cpy [STR_SIZE] = "1234567890";
    char dest2    [STR_SIZE] = "123";
    char dest2cpy [STR_SIZE] = "123";
    const char *source = "abcde"; 

    strcpy   (dest1,    source);
    mystrcpy (dest1cpy, source);
    strcpy   (dest2,    source);
    mystrcpy (dest2cpy, source);

    printf("mystrcpy test:\n");
    printf(" strcpy: %s\tmystrcpy: %s\n", dest1, dest1cpy);
    printf(" strcpy: %s\tmystrcpy: %s\n", dest2, dest2cpy);    
// -------------------------------------------------------------------------------------------------------

    printf("\n\n");

// mystrncpy test-----------------------------------------------------------------------------------------
    char dest3    [STR_SIZE] = "1234567890";
    char dest3cpy [STR_SIZE] = "1234567890";
    char dest4    [STR_SIZE] = "123";
    char dest4cpy [STR_SIZE] = "123";    

    strncpy   (dest3,    source, 3);
    mystrncpy (dest3cpy, source, 3);
    strncpy   (dest4,    source, 5);
    mystrncpy (dest4cpy, source, 5);

    printf("mystrncpy test:\n");
    printf(" strncpy: %s\tmystrncpy: %s\n", dest3, dest3cpy);
    printf(" strncpy: %s\t\tmystrncpy: %s\n", dest4, dest4cpy);
// -------------------------------------------------------------------------------------------------------

    printf("\n\n");

// mystrcat test------------------------------------------------------------------------------------------
    const char* append = "append";
    char dest5    [STR_SIZE] = "dest";
    char dest5cpy [STR_SIZE] = "dest";

    strcat   (dest5   , append);
    mystrcat (dest5cpy, append);

    printf("mystrcat test:\n");
    printf(" strcat: %s\tmystrcat: %s\n", dest5, dest5cpy);
// -------------------------------------------------------------------------------------------------------

    printf("\n\n");

// mystrncat test-----------------------------------------------------------------------------------------
    char dest6    [STR_SIZE] = "dest";
    char dest6cpy [STR_SIZE] = "dest";

    strncat   (dest6   , append, 4);
    mystrncat (dest6cpy, append, 4);

    printf("mystrncat test:\n ");
    printf(" strncat: %s\tmystrncat: %s\n", dest6, dest6cpy);
// -------------------------------------------------------------------------------------------------------

    printf("\n\n");

// myfgets test-------------------------------------------------------------------------------------------
    char str1 [STR_SIZE] = "";
    char str2 [STR_SIZE] = "";
    char str3 [STR_SIZE] = "";
    char str4 [STR_SIZE] = "";
    int  n1 = STR_SIZE, n2 = 3; 

    FILE *fp = fopen(INPUT_FILE, "r");

    fgets   (str1, n1, fp);
    myfgets (str2, n1, fp);
    fgets   (str3, n2, fp);
    myfgets (str4, n2, fp);

    fclose(fp);

    printf("myfgets test:\n");
    printf(" fgets: %s fmygets: %s", str1, str2);
    printf(" fgets: %s\tfmygets: %s\n", str3, str4);
// -------------------------------------------------------------------------------------------------------

    printf("\n\n");

// mystrdup test -----------------------------------------------------------------------------------------
    char str5 [STR_SIZE] = "abcdef";
    char str6 [STR_SIZE] = "abcdef";
    char *str5d = 0;
    char *str6d = 0;

    str5d =   strdup(str5);
    str6d = mystrdup(str6);

    printf("mystrdup test:\n");
    printf(" strdup: %s mystrdup: %s\n", str5d, str6d);
// -------------------------------------------------------------------------------------------------------

    printf("\n\n");
/*
// mygetline test-----------------------------------------------------------------------------------------
    int  n   = 0;
    char sep = 0;
    char str7 [STR_SIZE] = "";

    printf("mygetline test:\n enter n:");
    scanf("%d", &n);
    printf("\nenter separator:");
    scanf("%c", &sep);
    printf("\ninput:");

    mygetline(str7, n, sep);

    printf("\n%s", str7);

}
*/