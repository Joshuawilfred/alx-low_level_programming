#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
 *_isupper - function that checks if a character is upperca
 *@c: tested character
 *Return: returns 1 if it is uppercase, 0 if not
 */

int _isupper(char c){
        if(c == toupper(c)){
                return 1;
        }else{
                return 0;
        }
}
int main(){
        char c;
        c = 'A';
        printf("%c : %d\n", c, _isupper(c));
        c = 'a';
        printf("%c : %d\n", c, _isupper(c));
        return 0;
}	
