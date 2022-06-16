#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define MAX_MSG_LEN  80

void get_msg(char sentenceChar[], int *alphabet){
    // Inserts numbers into the sentenceChar[] array
    char input = ' '; int i = 0; int numAlphaCharacters = 0;
printf("Enter a message: ");
while(input != '\n'){
    if(numAlphaCharacters > MAX_MSG_LEN){break;}
    scanf("%c",&input);
    if(isalpha(input)){
        sentenceChar[i] = input;
        numAlphaCharacters++;
        i++;
    }
}
*alphabet = numAlphaCharacters;
}

bool palindrome(char sentenceChar [], int numAlphaCharacters){
    // Sets the sentence to all lowercase and tests the output
    int i = 0;
   while(i < numAlphaCharacters){
       if(sentenceChar[i]>=65&&sentenceChar[i]<=90)
           sentenceChar[i]=sentenceChar[i]+32;
       i++;
    }
printf("\n");
   // Reverses the sentence
char reverseSentence [numAlphaCharacters];
strcpy(reverseSentence,sentenceChar);
for(int p = 0; p < numAlphaCharacters; p++){
reverseSentence[p] = sentenceChar[numAlphaCharacters-1-p];
}




            // Compares the sentences to see if palindrome
    if (strcmp(sentenceChar, reverseSentence) == 0) {
        
        return true;
    }
    else {
       
        return false;
    }

}

int main (void) {
    int x = 0;
    int *y = &x;
    char sentence[MAX_MSG_LEN];
    get_msg(sentence,y);
    if(palindrome(sentence,x)){
        printf("Palindrome");
    }
    else{printf("Not palindrome");}


}


