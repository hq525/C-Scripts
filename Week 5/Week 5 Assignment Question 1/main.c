#include <stdio.h>
void insertChar(char *str1, char *str2, char ch);
int main()
{
 char a[80],b[80];
 char ch;

 printf("Enter a string: \n");
 gets(a);
 printf("Enter a character to be inserted: \n");
 ch = getchar();
 insertChar(a,b,ch);
 printf("insertChar(): ");
 puts(b);
 return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
    int i, j, len;
    i = 0;
    len = 0;
    while (str1[i]!='\0'){
        len++;
        i++;
    }
    j = 0;
    for (i=0;i<len;i++) {
        if ((i%3==0)&&(i!=0)) {
            str2[j] = ch;
            j++;
            str2[j] = str1[i];
        }
        else {
            str2[j] = str1[i];
        }
        j++;
    }
    if (len%3==0) {
        str2[j] = ch;
        str2[j+1] = '\0';
    }
    else
        {str2[j] = '\0';}
}
