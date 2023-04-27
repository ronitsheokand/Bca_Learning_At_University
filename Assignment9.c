//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int freq[26] = {0};
    int i, len;

    printf("Enter your name: ");
    scanf("%s",name);

    len=strlen(name);

    for(i=0;i<len;i++) {
        if(name[i]>='a'&&name[i]<='z') {
            freq[name[i]-'a']++;
        }
        else if(name[i]>='A'&&name[i]<='Z') {
            freq[name[i]-'A']++;
        }
    }

    printf("Frequency of each letter in the name:\n");
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("%c = %d\n",i+'a',freq[i]);
        }
    }

    return 0;
}
