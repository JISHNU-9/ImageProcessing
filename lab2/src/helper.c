//

# include<stdio.h>
# include<stdlib.h>

# include"helper.h"


void print_exit(char *s) {
    fprintf(stderr, "%s\n", s);
    exit(1);
}

float max(float a, float b) {
    if (a>=b) {
        return a;
    }
    else {
        return b;
    }
}
