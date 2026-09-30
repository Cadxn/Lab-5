#include <stdio.h>
#include "string.c"

int main(void){
string s1 = screate();
string s2 = screate();
string s3 = screate();

scopy(s1,"hi mom");
scopy(s2,"hello world");
scopy(s3,"hello world");


printf("s1 length = %d\n",slen(s1));
printString(s1); printf("\n");
sToUpper(s1); printString(s1);
printf("\n");
sToLower(s1); printString(s1);
printf("\n");

printf("%d\n", scmp(s2, s3));
printf("%d\n", scmp(s1, s2));

scopy(s1,"tjehjhehe ");
scopy(s2,"gjejjejej ");
scopy(s3,"EGRE 246");

scat(s1,s2);
printString(s1);
printf("\n");

scat(s1,s3);
printString(s1);
printf("\n");

printString(sToUpper(s1));
printf("\n");
printString(sToLower(s1));
printf("\n");

printf("%d\n", scmp(s2, s3));
printf("%d\n", scmp(s1, s2));

return 0;
}