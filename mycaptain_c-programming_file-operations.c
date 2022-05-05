#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
     char sentence[1000];
     FILE *fptr;
    fptr = fopen("string.txt", "w");
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    printf("The sentence '%s' is saved in the file string.txt\n", sentence);
    fptr = fopen("string_rev.txt", "w"); 
    fprintf(fptr, "%s", strrev(sentence), stdin); 
     printf("The reverse sentence '%s' is saved in the file string_rev.txt\n", sentence); 
    fclose(fptr);
    return 0;
}

