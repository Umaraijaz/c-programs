#include<stdio.h>
#include<string.h>
main(){
	char s[50];
	char n[50];
	printf("Enter a string:\n");
	gets(s);
	printf("Enter a string:\n");
	gets(n);
	printf("Added string : ");
	puts(strcat(s,n));
	printf("Copied string : ");
	puts(strcpy(n,s));
	printf("Reversed string : ");
	puts(strrev(s));
	printf("Length string : %d" , strlen(s));
	
}
