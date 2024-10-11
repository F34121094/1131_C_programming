#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int up, down;
    FILE *file = fopen(argv[1],"r");
    int a,b,c,d;
    fscanf(file, "%d %d %d %d", &a, &b, &c ,&d);
	fclose(file);
	up = a*d+b*c;
	down = d*b;
	FILE *fptr = fopen("answer.txt","w");
    fprintf(fptr,"%d/%d",up,down);
    fclose(fptr); 
    return 0;
}
