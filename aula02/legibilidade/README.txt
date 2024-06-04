Implemente um programa que calcule o nível (representado 
a partir de uma série, como na escola) aproximado 
necessário para compreender algum texto, conforme a 
seguir.

$ ./readability
Texto: Parabéns! Hoje é seu dia. Você está indo para ótimos lugares! 
Você está com tudo!
Grade 3

O índice Coleman-Liau de um texto é projetado para mostrar qual nível 
escolar (EUA) é necessário para entender o texto. A fórmula é:

índice = 0,0588 * L - 0,296 * S - 15,8

Aqui, L é o número médio de letras por 100 palavras no texto e S é o 
número médio de sentenças por 100 palavras no texto.