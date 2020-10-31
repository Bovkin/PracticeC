/* Caesar shift */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define JUMP 3

char *encrypt (char *string){
    char encrypts[100] = {};

    int i;
    i = 0;

    while(string[i] != '\0'){
        
        if(toupper(string[i]) >= 65 || toupper(string[i]) <= 90){
            if(toupper(string[i]+JUMP) > 90){
                encrypts[i] = string[i]+JUMP-26;
            }else if(string[i] == 32){
                encrypts[i] = string[i];
            }else{
                encrypts[i] = string[i]+JUMP;
            }
        }
        i++;
    }
    return encrypts;
}

char *decrypt(char *string){
    char decrypts[100] = {};

    int i;
    i = 0;

    while(string[i] != '\0'){
        
        if(toupper(string[i]) >= 65 || toupper(string[i]) <= 90){
            if(toupper(string[i]+JUMP) > 90){
                decrypts[i] = string[i]-JUMP+26;
            }else if(string[i] == 32){
                decrypts[i] = string[i];
            }else{
                decrypts[i] = string[i]-JUMP;
            }
        }
        i++;
    }
    return decrypts;
}

int main(){
    char string[100], *criptografa[100] = {}, cripAux[100] = {};

    puts("Insert a word");
    scanf("%[^\n]s", string);

    strcpy(cripAux, encrypt(string));

    printf("String encrypted: %s\n", encrypt(string));

    printf("String decrypted: %s\n", decrypt(cripAux));

}