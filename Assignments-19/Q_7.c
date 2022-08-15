/*From the list of IP addresses, check whether all ip addresses are valid.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValidIpString(char []);
int isIpAddress(char []);

int main()
{
    char ips[20][30];
    int i, n, valid;

    printf("Enter how many Ip addresses you want to store (Max 20) ? ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nEnter IP%d : ", i+1);
        fflush(stdin);
        scanf("%[^\n]", ips[i]);
    }

    valid = 1;
    for(i=0; i<n; i++) {       
        if (!isIpAddress(ips[i])) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("\nAll Ip addresses are valid.");
    else
        printf("\nNot all Ip addresses are valid.");

    return 0;
}

int isValidIpString(char ip[]) {
    int i, dot=0;
    
    for(i=0; ip[i]; i++) {
        if(!((ip[i] >= '0' && ip[i] <= '9') || (ip[i] == '.')))
            return 0;
        if(ip[i] == '.')
            dot++;
    }
    
    if(dot != 3) return 0;
    
    return 1;
}

int isIpAddress(char ip[]) {
    int i, j, num;
    char tmp[30]; 
    
    if(isValidIpString(ip)) {
        i = -1;
        do {
            j=0, i++;
            while(ip[i] != '.' && ip[i] != '\0')
                tmp[j++] = ip[i++];
            tmp[j] = '\0';

            if (tmp[0] == '\0') {
                return 0;
            } else {
                num = atoi(tmp);
                if (!(num >= 0 && num <= 255))
                    return 0;
            }
        } while(ip[i] != '\0');

        return 1;
    }
    else
        return 0;
}


