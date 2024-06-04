#include <stdio.h>

  int main()
  {
    //geting a int beteween 1 and 8 from the user:
      int option =0;
      do {
      printf("Enter a number from 1 to 8: \n");
      scanf("%d", &option);

      } while(option < 1 || option > 8);

      // creating loop for pyramid
      for ( int i =0 ; i < option ; i++){
      
       // spaces before
       for (int j =0; j < (option - 1 - i); j++){
        printf(" ");
       } 
       
       //loop "#"
       for (int k = 0; k < i+1; k++){
         printf("#");        
       }
       
        printf("  ");

         //loop 2 "#"
       for (int k = 0; k < i+1; k++){
         printf("#");        
       }
        
       printf("\n");

      }
  }
  