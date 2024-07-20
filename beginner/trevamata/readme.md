# Trevamata

Durante sua aventura pelas Terras-Selváticas, Bilbo Bolseiro e seus amigos anões precisarão enfrentar a Trevamata para chegar na Montanha Solitária. Porém, sabemos que essa não é uma tarefa fácil. Para conseguir atravessar a floresta eles não devem, em hipótese alguma, sair da trilha. Por isso, Gandalf convocou os alunos de programação da UFBA para ajudar Bilbo e seus amigos.

A Trevamata é terreno traiçoeiro e sua trilha, em alguns trechos, tem o caminho sendo galhos de grandes árvores, que tem um limite de peso. Assim, terão que passar um por um por esses trechos de galhos. Mas, se excedido, quebrado, desloca todos os viajantes para fora do percurso. Precisamos então que, dado o peso dos amigos de Bilbo, você diga se eles estão aptos para passar pela trilha com segurança. O peso do Bilbo será ignorado.

## Entrada

A primeira linha de entrada é composta por um inteiro ‘N’ (1 <= N <= 13), indicando a quantidade de amigos de Bilbo. As ‘N’ linhas seguintes contêm, cada uma, uma String Nome e um inteiro ‘K’ (30 <= K <= 150), que representam, respectivamente, o nome e o peso de cada amigo de Bilbo. Por fim, a última linha contém um inteiro ‘C’ (100 <= C <= 1000), indicando a capacidade total da estrada.

## Saída

Caso a capacidade da estrada não seja excedida, o programa deve imprimir a frase “Vamos todos encontrar a montanha!”, caso contrário, o programa deve imprimir a frase “Vamos virar almoço de aranhas gigantes!”.

## Exemplo

| Entrada                                                          | Saída                                   |
| ---------------------------------------------------------------- | --------------------------------------- |
| 7 Nori 30 Ori 37 Oin 42 Gloin 48 Bifur 45 Bofur 43 Bombur 63 150 | Vamos virar almoço de aranhas gigantes! |
| 6 Thorin 60 Balin 35 Dwalin 45 Fili 48 Kili 43 Dori 40 300       | Vamos todos encontrar a montanha!       |
