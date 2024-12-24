#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* print out an error message and exit */
void my_error(char *s)
{
    perror(s);
    exit(1);
}

/* Concatnate two strings.
 * Dynamically allocate space for the result.
 * Return the address of the result.
 */
char *my_strcat(char *s1, char *s2)
{
    // TODO
    int len1 = 0;
    int len2 = 0;
    //find length of s1 and s2
    while(s1[len1] != '\0'){
        len1++;
    }
    while(s2[len2] != '\0'){
        len2++;
    }
    //find memory spot
    char *result = malloc(len1 + len2 + 1);
    if(result == NULL){
        my_error("malloc"); //check error
    }
    //place s1 and s2 into result
    for(int i = 0; i < len1; i++){
        result[i] = s1[i];
    }
    for(int j = 0; j < len2; j++){
        result[len1 + j] = s2[j];
    }
    //add null terminator
    result[len1 + len2] = '\0';
    return result;
}

int main(int argc, char *argv[])
{
    char    *s;
    s = my_strcat("", argv[0]);
    for (int i = 1; i < argc; i ++) {
        char * s0 = s;
        s = my_strcat(s, argv[i]);
        free(s0);
    }

    printf("%s\n", s);
    free(s);
    return 0;
}
