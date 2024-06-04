#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>


int main(){

  // getting the string
   string text = get_string("Text:");

  int words = 1;
  int senteces = 0;
  int letters = 0;

  // counting number of words, phrases and letters
  for(int i = 0, n = strlen(text); i < n; i++ ){

  if((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122)){
    letters++;
   } else if (text[i] == 32){
     words++;
   } else if (text[i] == 46 || text[i] == 33 || text[i] == 63 ){
    senteces++;
   }
  }

  //calculation of formula:
  float L = letters/(float)words*100;
  float S = senteces/(float)words*100;

  int indice = round(0.0588 * L - 0.296 * S - 15.8);

  if(indice < 1){
   printf("Before Grade 1");
  }else if(indice >= 16){
   printf("Grade 16+");
  } else{
    printf("Grade %i", indice);
  }
}
