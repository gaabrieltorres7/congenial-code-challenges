# Dados para pesquisa

Um grupo de estudantes de Ciência de Computação precisa de alguns dados para fazer experimentos para seus estudos. Os dados em questão são apresentados como um conjunto de números e eles querem saber quantos desses números pertencem a cada classificação em relação ao módulo N, ou seja, para cada número, divide-se ele por N e classifica ele de acordo com o resto da divisão. Assim, se N for 5, teremos as categorias resto 0, resto 1, resto 2, resto 3 e resto 4. Então, se tivermos os números 4 e 7, o número 4 será classificado na categoria resto 4 (4 % 5) e o número 7 classificado na categoria resto 2 (7 % 5). Ajude esses estudantes, escrevendo um código que retorna os dados de que eles precisam, classificando todos os números do conjunto em relação ao módulo N.

## Entrada

Na primeira linha da entrada serão dados dois inteiros N (0 < N ≤ 20) e Q (0 < Q < 1000), que representam, respectivamente, o módulo N e a quantidade de números a serem classificados de acordo com os restos da divisão deles por N. Na linha seguinte serão dados os Q números inteiros R (0 ≤ R ≤ 10000) a serem classificados em relação ao módulo N.

## Saída

A saída é composta na primeira linha da frase “Mod N”, onde N é o módulo que está sendo utilizado na classificação. A seguir teremos N linhas, onde cada uma indica o valor da categoria módulo N e a quantidade de números analisados que pertencem a essa categoria, separados por “:”.

Atenção: As linhas com as categorias de módulo N devem estar em ordem crescente de acordo com a categoria, ou seja, primeiro o módulo 0, depois módulo 1, e assim sucessivamente até a categoria módulo N-1, como nos exemplos abaixo.

## Exemplo

| Entrada             | Saída                               |
| ------------------- | ----------------------------------- |
| 2 3 15 24 7         | Mod 2 0: 1 1: 2                     |
| 5 6 41 12 0 7 5 103 | Mod 5 0: 2 1: 1 2: 2 3: 1 4: 0      |
| 6 2 0 36            | Mod 6 0: 2 1: 0 2: 0 3: 0 4: 0 5: 0 |
