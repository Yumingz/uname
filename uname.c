#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>

int main(int argc, char *argv[]) { 
    struct utsname ubuffer;

    // Check for proper usage
    if (argc != 1) {
        fprintf(stderr, "%s: Aborting, not enough arguments.\n", argv[0]);
        return (-1);
    }

    uname(&ubuffer);
    if(uname(&ubuffer)<0) {
	printf("Failed to uname");
    }
    else {
    	printf("System name: %s\n", ubuffer.sysname);
    }
    return 0;
}
