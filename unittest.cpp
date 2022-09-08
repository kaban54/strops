#include "strops.h"

const int STR_SIZE = 100;
const char *INPUT_FILE1 =   "fgets_test.txt";
const char *INPUT_FILE2 = "getline_test.txt";

void unittest()
{
    printf ("\n");

    puts_test();

    strlen_test();

    strchr_test();

    strcpy_test();

    strncpy_test();

    strcat_test();

    strncat_test();

    fgets_test();

    strdup_test();

    getline_test();
}


void puts_test()
{
    printf ("myputs test:\n");
    printf (" myputs: ");
    myputs ("test string");
    printf (" puts:   ");
    puts   ("test string");
    printf ("\n");
}

void strlen_test()
{
    printf ("mystrlen test:");

    printf ("\n test 1:");
    printf (strlen ("test string") == mystrlen ("test string") ? "OK" : "failed");

    printf ("\n");
}

void strchr_test()
{
    const char *str = "abcde";
    char ch1 = 'c', ch2 = 'f';
    printf ("mystrchr test:");

    printf ("\n test 1:");
    printf (strchr (str, ch1) == mystrchr (str, ch1) ? "OK" : "failed");

    printf ("\n test 2:");
    printf (strchr (str, ch2) == mystrchr (str, ch2) ? "OK" : "failed");

    printf ("\n test 3:");
    printf (mystrchr (NULL, ch2) == NULL             ? "OK" : "failed");

    printf ("\n");
}

void strcpy_test()
{
    char dest1    [STR_SIZE] = "1234567890";
    char dest1cpy [STR_SIZE] = "1234567890";
    char dest2    [STR_SIZE] = "123";
    char dest2cpy [STR_SIZE] = "123";
    const char *source       = "abcde"; 

    strcpy   (dest1,    source);
    mystrcpy (dest1cpy, source);

    strcpy   (dest2,    source);
    mystrcpy (dest2cpy, source);

    printf ("mystrcpy test:");

    printf ("\n test 1:");
    printf (strcmp (dest1, dest1cpy) == 0   ? "OK" : "failed");

    printf ("\n test 2:");
    printf (strcmp (dest2, dest2cpy) == 0   ? "OK" : "failed");

    printf ("\n test 3:");
    printf (mystrcpy (NULL, source) == NULL ? "OK" : "failed");

    printf ("\n test 4:");
    printf (mystrcpy (dest1, NULL)  == NULL ? "OK" : "failed");

    printf ("\n");
}

void strncpy_test()
{
    char dest1    [STR_SIZE] = "1234567890";
    char dest1cpy [STR_SIZE] = "1234567890";
    char dest2    [STR_SIZE] = "123";
    char dest2cpy [STR_SIZE] = "123";
    const char *source       = "abcde";  
    int n1 = 3, n2 = 5;

    strncpy   (dest1,    source, n1);
    mystrncpy (dest1cpy, source, n1);
    strncpy   (dest2,    source, n2);
    mystrncpy (dest2cpy, source, n2);

    printf ("mystrncpy test:");

    printf ("\n test 1:");
    printf (strcmp (dest1, dest1cpy) == 0   ? "OK" : "failed");

    printf ("\n test 2:");
    printf (strcmp (dest2, dest2cpy) == 0   ? "OK" : "failed");

    printf ("\n test 3:");
    printf (mystrncpy (NULL, source, n1) == NULL ? "OK" : "failed");

    printf ("\n test 4:");
    printf (mystrncpy (dest1, NULL, n1)  == NULL ? "OK" : "failed");

    printf("\n");
}

void strcat_test()
{
    char dest1    [STR_SIZE] = "dest";
    char dest1cpy [STR_SIZE] = "dest";
    const char *append       = "append";

    strcat   (dest1   , append);
    mystrcat (dest1cpy, append);

    printf ("mystrcat test:");    
    
    printf ("\n test 1:");
    printf (strcmp (dest1, dest1cpy) == 0   ? "OK" : "failed");

    printf ("\n test 3:");
    printf (mystrcat (NULL, append) == NULL ? "OK" : "failed");

    printf ("\n test 4:");
    printf (mystrcat (dest1, NULL)  == NULL ? "OK" : "failed");

    printf("\n");
}

void strncat_test()
{
    char dest1    [STR_SIZE] = "dest";
    char dest1cpy [STR_SIZE] = "dest";
    char dest2    [STR_SIZE] = "dest";
    char dest2cpy [STR_SIZE] = "dest";
    const char *append       = "append";
    int n1 = 4, n2 = 10;

    strncat   (dest1   , append, n1);
    mystrncat (dest1cpy, append, n1);
    strncat   (dest2   , append, n2);
    mystrncat (dest2cpy, append, n2);

    printf ("mystrncat test:");

    printf ("\n test 1:");
    printf (strcmp (dest1, dest1cpy) == 0    ? "OK" : "failed");

    printf ("\n test 2:");
    printf (strcmp (dest2, dest2cpy) == 0    ? "OK" : "failed");

    printf ("\n test 3:");
    printf (mystrncat (NULL, append, n1) == NULL ? "OK" : "failed");

    printf ("\n test 4:");
    printf (mystrncat (dest1, NULL, n1)  == NULL ? "OK" : "failed");

    printf("\n");
}

void fgets_test()
{
    char str1    [STR_SIZE] = "";
    char str1cpy [STR_SIZE] = "";
    char str2    [STR_SIZE] = "";
    char str2cpy [STR_SIZE] = "";
    int  n1 = STR_SIZE, n2 = 3; 

    FILE *fp = fopen(INPUT_FILE1, "r");

    fgets   (str1   , n1, fp);
    myfgets (str1cpy, n1, fp);
    fgets   (str2   , n2, fp);
    myfgets (str2cpy, n2, fp);

    printf ("myfgets test:");

    printf ("\n test 1:");
    printf (strcmp (str1, str1cpy) == 0      ? "OK" : "failed");

    printf ("\n test 2:");
    printf (strcmp (str2, str2cpy) == 0      ? "OK" : "failed");

    printf ("\n test 3:");
    printf (myfgets (NULL, n1,   fp) == NULL ? "OK" : "failed");

    printf ("\n test 4:");
    printf (myfgets (str1, n1, NULL) == NULL ? "OK" : "failed");

    printf("\n");

    fclose(fp);
}

void strdup_test()
{
    char str1 [STR_SIZE] = "abcdef";
    char str2 [STR_SIZE] = "abcdef";
    char *str1d = 0;
    char *str2d = 0;

    str1d =   strdup (str1);
    str2d = mystrdup (str2);

    printf ("mystrdup test:");

    printf ("\n test 1:");
    printf (strcmp (str1, str1d) == 0 ? "OK" : "failed");

    printf ("\n test 2:");
    printf (strcmp (str2, str2d) == 0 ? "OK" : "failed");

    printf ("\n test 3:");
    printf (mystrdup (NULL) == NULL   ? "OK" : "failed");

    printf("\n");

    free (str1d);
    free (str2d);
}

void getline_test()
{
    char sep1 = '\n';
    char sep2 =  ';';
    char str1 [STR_SIZE] = "";
    char str2 [STR_SIZE] = "";
    char str3 [STR_SIZE] = "";

    FILE *fp = fopen(INPUT_FILE2, "r");

    mygetline (str1, sep1, fp);
    mygetline (str2, sep2, fp);
    mygetline (str3, sep2, fp);

    printf ("mygetline test:");

    printf ("\n test 1:");
    printf (strcmp (str1, "test string 1") == 0  ? "OK" : "failed");

    printf ("\n test 2:");
    printf (strcmp (str2, "test string 2") == 0  ? "OK" : "failed");

    printf ("\n test 3:");
    printf (strcmp (str3, "test string 3") == 0  ? "OK" : "failed");

    printf ("\n test 4:");
    printf (mygetline (NULL, sep1, fp)   == NULL ? "OK" : "failed");

    printf ("\n test 5:");
    printf (mygetline (str1, sep1, NULL) == NULL ? "OK" : "failed");

    printf("\n");

    fclose(fp);
}