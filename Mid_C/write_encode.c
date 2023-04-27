#include <stdio.h>
int main(void) {
    FILE *fp;
    fp = fopen("zip.txt", "w+");
    fprintf(fp, "This writing was using fprintf\n"); // write the encode string version
    fclose(fp); 
    return 0;
}