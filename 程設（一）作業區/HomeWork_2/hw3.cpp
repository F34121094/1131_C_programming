#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char input1[100],input2[100];
    while (1) {
        printf("Please enter the name of the file to read from.\n");
        fgets(input1, sizeof(input1), stdin); // input file name (read)
        input1[strcspn(input1, "\n")] = 0;
        
        if (strcmp(input1, "exit") == 0) {
            break;
        }
        
        if (access(input1, F_OK) != 0){ // the file name of input is not exist
            printf("The file name does not exist.\n");
			continue;
        }
        FILE *file = fopen(input1,"r");
        int a,b,c,d;
        fscanf(file,"%d %d %d %d", &a,&b,&c,&d);
        fclose(file);
        int up = a*d+b*c;
		int down = d*b;
        printf("Please enter the name of the file to write the output to.\n");
        fgets(input2, sizeof(input2), stdin); // input file name (write)
        input2[strcspn(input2, "\n")] = 0;
        FILE *fptr = fopen(input2,"w");
        fprintf(fptr,"%d/%d",up, down);
        fclose(fptr);
        printf("Calculation complete!\n");
        // do something
    }

    return 0;
}
