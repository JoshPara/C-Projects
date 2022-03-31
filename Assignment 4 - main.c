//this program is to take the user entered sentence, read it, and count the number of alphabetic characters, the number of keystrokes, and the number of vowels

#include<stdio.h>
#include<ctype.h>
#define MAX_SCORE 10000

void display();

int main(void){
    char key[MAX_SCORE];
    int count, keystroke, alphabetic, vowels, target;
    puts("Enter a Sentence, Then Push Enter:\n");
    for(count = 0; count < MAX_SCORE; count++){
        scanf("%c", &key[count]);
        if(key[count] == '\n'){
            break;
            }
        }
    keystroke = count;
    alphabetic = 0;
    for(count = 0; count < MAX_SCORE; count++){
        if(isalpha(key[count]) == 1){
            ++alphabetic;
        }
        if(isalpha(key[count]) == 2){
            ++alphabetic;
        }
        if(key[count] == '\n'){
            break;
        }
    }
    vowels = 0;
    for(count = 0; count < MAX_SCORE; count++){
        if(key[count] == 'a'){
            ++vowels;
            }
        if(key[count] == 'e'){
            ++vowels;
            }
        if(key[count] == 'i'){
            ++vowels;
            }
        if(key[count] == 'o'){
            ++vowels;
            }
        if(key[count] == 'u'){
            ++vowels;
            }
        if(key[count] == 'A'){
            ++vowels;
            }
        if(key[count] == 'E'){
            ++vowels;
            }
        if(key[count] == 'I'){
            ++vowels;
            }
        if(key[count] == 'O'){
            ++vowels;
            }
        if(key[count] == 'U'){
            ++vowels;
            }
        if(key[count] == '\n'){
            break;
            }
        }
    display(keystroke, alphabetic, vowels);
    return 0;
    }


void display (int keystroke, int alphabetic, int vowels){
    puts("\n------------------------------------------");
    printf("\nThe Number of keystrokes = %i\n", keystroke);
    printf("The Number of Alphabetic Characters = %i\n", alphabetic);
    printf("The Number of Vowels = %i\n", vowels);
}


