#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int l,i;
    printf("\n\t Enter the String:");
    gets(str);
    l=strlen(str);
    printf("\n\tAfter Removing vowels from the string:");
    for(i=0;i<l;i++)
    {
        if(str[i]!='A'&& str[i]!='a'&&str[i]!='e'&&str[i]!='E'&&str[i]!='i'&&
           str[i]!='I'&&str[i]!='O'&&str[i]!='o'&&str[i]!='u'&&str[i]!='U')
        {
            printf("%c",str[i]);
        }
    }
}
