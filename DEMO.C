#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ll long long

int main(void) {

    char text[1000][1000];   // store lines
    ll lines = 0;            // line counter

    printf("Simple Text Editor\n");
    printf("Type END to finish\n\n");

    while (1) {
        fgets(text[lines], 1000, stdin);

        // remove newline
        text[lines][strcspn(text[lines], "\n")] = 0;

        if (strcmp(text[lines], "END") == 0)
            break;

        lines++;
    }

    FILE *file = fopen("text.txt", "w");

    for (ll i = 0; i < lines; i++) {
        fprintf(file, "%s\n", text[i]);
    }

    fclose(file);

    printf("\nProgram has been successfully executed\n");

    return 0;
}
