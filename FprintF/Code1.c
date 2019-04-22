#include<stdio.h>
void main()
{
FILE*P;
char C;
P = fopen("a.txt","W");
if(P == NULL)
{
printf("Can't open the file..");
exit(1);
}
printf("Enter the value of n");
scanf("%d", & n);
fprintf(p,n);
fclose(P);
}
