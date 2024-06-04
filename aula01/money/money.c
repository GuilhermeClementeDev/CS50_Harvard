#include <stdio.h>

void calcular(float troco);


int main(void)
{
  float valor = 0.0;

  printf("Informe o valor: ");
  scanf("%f", &valor);
  
  calcular(valor);

}

void calcular(float troco){
    int resultado, td;
    td = (int)(troco * 100);
    
    while(td > 0 ){
    
    if (td >= 50){
      resultado = td /50;
      printf("Moedas 0.5 = %d \n", resultado);
      td = td % 50;
    } else if(td >= 25){
      resultado = td /25;
      printf("Moedas 0.25 = %d \n", resultado);
      td = td % 25;
    } else if(td >= 10){
      resultado = td /10;
      printf("Moedas 0.10 = %d \n", resultado);
      td = td % 10;
    } else if(td >= 5){
      resultado = td /5;
      printf("Moedas 0.05 = %d \n", resultado);
      td = td % 5;
    } else if(td >= 1){
      resultado = td /1;
      printf("Moedas 0.01 = %d \n", resultado);
      td = td % 1;
    }
}
}