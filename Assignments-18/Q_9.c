/*Write a function to reverse a string word wise. 
(For example if the given string is “Mysirg Education Services” then 
the resulting string should be “Services Education Mysirg” )*/

#include <stdio.h>
#include <string.h>

void wordwiseReverse(char string[], int length);

int main() {
    char str[31];

    printf("Enter a string(Max Characters 30): ");
    gets(str);

    wordwiseReverse(str, strlen(str));
    printf("\nAfter reversing the given string word wise: %s", str);

    return 0;
}

void wordwiseReverse(char str[], int len) {
    int i, j, k, l;
    char str2[31];

    for(k=0, l=len, i=len-1; i>=0; i--)
	{
		if (str[i]==' ') {
		 	for(j=i+1; j<l; j++)
                str2[k++]=str[j];  

            str2[k++] = str[i];         
			l = i;	
		}

		if (i == 0) {
			for(j=i; j<l; j++)
			    str2[k++] = str[j];
		}						
	}

    for(i=0; i<len; i++)
        str[i] = str2[i];
}