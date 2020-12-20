#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    int max = -1;      // if there is no argument, this will make infinity loop till you run out of memory
    int mb = 0;
    char* buffer;
    int esc;

    if(argc > 1)
        max = atoi(argv[1]);

/* allocating memory on heap by malloc(10 MB) and use memset to fill those allocated memory */
    while((buffer=malloc(1024*1024*10)) != NULL && mb != max) {
        memset(buffer, 0, 1024*1024*10);
        mb += 10;
        printf("Allocated %d MB\n", mb);
    }
    
    printf("Press enter to exit");
    if (esc = getchar())
	exit(0);
    return 0;
}
