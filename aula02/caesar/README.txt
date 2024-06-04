Vamos escrever um programa chamado ceasar que permite criptografar mensagens usando a cifra de César. No momento em que o usuário executa o programa, ele deve decidir, fornecendo um argumento de linha de comando, qual deve ser a chave na mensagem secreta que fornecerá no tempo de execução. Não devemos necessariamente presumir que a chave do usuário será um número; embora você possa assumir que, se for um número, será um inteiro positivo.

Aqui estão alguns exemplos de como o programa pode funcionar. Por exemplo, se o usuário inserir uma chave de 1 e um texto simples de HELLO :

$ ./caesar 1
plaintext:  HELLO
ciphertext: IFMMP
Veja como o programa pode funcionar se o usuário fornecer uma chave 13 e um texto simples de hello, world : 

$ ./caesar 13
plaintext:  hello, world
ciphertext: uryyb, jbeyq
Observe que nem a vírgula nem o espaço foram "deslocados" pela cifra. Gire apenas caracteres alfabéticos!

Que tal mais um? Veja como o programa pode funcionar se o usuário fornecer uma chave 13 novamente, com um texto simples mais complexo: 

$ ./caesar 13
plaintext:  be sure to drink your Ovaltine
ciphertext: or fher gb qevax lbhe Binygvar
Observe que a caixa da mensagem original foi preservada. As letras minúsculas permanecem minúsculas e as maiúsculas permanecem maiúsculas.

E se um usuário não cooperar?

$ ./caesar HELLO
Usage: ./caesar key
Ou realmente não coopera?

$ ./caesar
Usage: ./caesar key
Ou mesmo ...

$ ./caesar 1 2 3
Usage: ./caesar key