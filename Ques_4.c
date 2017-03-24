#include <stdio.h>
int main() {
    int i;
    unsigned int x = 0xAFD43109; 
    unsigned char *ptr = (char *) &x;
    for (i=0; i < sizeof(x); i++)
        printf("%x\t", ptr[sizeof(x)-i-1]);
    printf("\n");
    return 0;
}   
