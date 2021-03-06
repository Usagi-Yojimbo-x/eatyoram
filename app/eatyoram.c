#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    int max = -1;      // if there is no argument, this will make 
    int mb = 0;	       // infinity loop till you run out of memory
    char* buffer;
    int esc;

    if(argc > 1)
        max = atoi(argv[1]);

/* allocating memory on heap by malloc(10 MB)
and use memset to fill those allocated memory */
    while((buffer=(char*)malloc(1024*1024*10)) != NULL && mb != max) {
        memset(buffer, 0, 1024*1024*10);
        mb += 10;
        printf("\rAllocated %d MB", mb);
	fflush(stdout);
    }
    
    printf("\nPress enter to exit");
    if (esc == getchar()){
	free(buffer);    // this will free only last 10MB
	exit(0);         // all the memory will be freed when program exit anyway
    }
    return 0;
}
