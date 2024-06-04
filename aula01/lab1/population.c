#include <stdio.h>
#include <math.h>

int calculation(int start , int final);

int main()
{
  int inicial_p = 0;
  int final_p = 0;
  int years = 0;
  
  //getting initial population
  do{
 
  printf("Start size:");
  scanf("%i", &inicial_p);
 
  }while(inicial_p <= 8);
 
 //getting final population
  do{
 
  printf("End size:");
  scanf("%i", &final_p);
 
  }while(final_p < inicial_p);
 
  //calling the calculation function
   years = calculation( inicial_p, final_p);
  
  //Printing the number of years
  printf("Years: %i\n", years);

}

// Calculation of the number of years until the limit
int calculation(int start , int final){
  int new_lhamas =0;
  int dead_lhamas =0;
  int years = 0; 
  
  do{
  new_lhamas = round(start/3);
  dead_lhamas = round(start/4);
 
  start += new_lhamas - dead_lhamas ;
  years++;
  }while(start < final);

  printf("Total lhamas after: %i\n", start);

  return years;
} 