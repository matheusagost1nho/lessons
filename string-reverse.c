#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main() {
       char string[50],string2[50];
       int a,b;

       printf("Type a word or phrase ");
       gets(string);

       b=strlen(string) - 1;

       for(a = 0; string[a] != '\0'; a++){
       string2[b] = string[a];
       b--;     
       }

       string2[a]='\0';

       strcpy(string, string2);
       printf("\n\nThe word or phrase in reverse is:\n%s\n\n",string);
system("pause");
}