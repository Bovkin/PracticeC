/* Caesar shift */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define JUMP 5

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
    strcpy(string, encrypts);
    return string;
}

char *decrypt(char *string){
    char decrypts[100] = {};

    int i;
    i = 0;

    while(string[i] != '\0'){
        
        if(toupper(string[i]) >= 65 || toupper(string[i]) <= 90){
            if(toupper(string[i]-JUMP) > 90){
                decrypts[i] = string[i]-JUMP+26;
            }else if(string[i] == 32){
                decrypts[i] = string[i];
            }else{
                decrypts[i] = string[i]-JUMP;
            }
        }
        i++;
    }
    strcpy(string, decrypts);
    return string;
}

void menu(){
    printf(ANSI_COLOR_BLUE "\t************************* \n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_BLUE "\t      W E L C O M E \n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_BLUE "\t************************* \n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_GREEN "\tInsert a word: " ANSI_COLOR_RESET);
}


int main(){
    char string[100], *criptografa[100] = {}, cripAux[100] = {};

    menu();
    scanf("%[^\n]s", string);

    strcpy(cripAux, encrypt(string));

    printf(ANSI_COLOR_RED "\tString encrypted:" ANSI_COLOR_RESET "%s\n" , cripAux);

    printf(ANSI_COLOR_BLUE "\tString decrypted:" ANSI_COLOR_RESET "%s\n", decrypt(cripAux));

}