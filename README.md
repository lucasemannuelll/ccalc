# ccalc

Uma calculadora simples em C para operações aritméticas básicas.

## Funcionalidades

- Adição, subtração, multiplicação e divisão.
- Tratamento de erros básico (divisão por zero, operadores inválidos).
- Construído com `clang` e gerenciado com `just`.

## Compilação

Para compilar o projeto, certifique-se de ter `just` e `clang` instalados e, em seguida, execute:

```bash
just build
```

Caso não possua o `just`, você pode compilar diretamente com o `clang` executando o seguinte comando dentro do diretório `src/`:

```bash
clang -Wall -Wextra -pedantic -std=c17 -o ccalc main.c entrada.c aritmetica.c
```

Ou, se preferir o `gcc`:

```bash
gcc -Wall -Wextra -pedantic -std=c17 -o ccalc main.c entrada.c aritmetica.c
```

## Uso

Execute o binário compilado:

```bash
./ccalc
```

Em seguida, siga as instruções para inserir dois números e um operador.
