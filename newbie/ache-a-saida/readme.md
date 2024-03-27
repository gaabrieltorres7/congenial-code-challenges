# Ache a saída

Em um mundo pós-apocalíptico, Thomas acorda sem memória em uma comunidade com outros garotos que também tiveram suas memórias apagadas. Pouco tempo depois, ele descobre que está preso em um enorme labirinto cheio de criaturas mortais, os verdugos, e que a única forma de se salvar é encontrando a saída. Trabalhando em equipe, Thomas e os garotos conseguiram desvendar parte do labirinto e estão prestes a escapar. No entanto, eles não têm muito tempo antes que as criaturas os encontrem, por isso eles precisam da sua ajuda para encontrar a saída.

![labirinto](https://github.com/gaabrieltorres7/congenial-code-challenges/assets/98062444/c777645a-bcd2-4847-bf63-bcc45de042c9)

## Tarefa

Sua tarefa é: sabendo que o ponto verde na imagem representa Thomas, e o vermelho um verdugo, faça um programa que indique se a direção informada por Thomas representa a saída do labirinto, a partir da imagem acima.

## Entrada

Duas strings, "A" e "B", que podem ser apenas "esquerda" ou "direita", representando respectivamente as diferentes direções que Thomas poderá seguir.

## Saída

"Achou" caso as direções representem o caminho da saída. "Morreu" caso as direções levem a um verdugo. "Tente novamente" caso as direções não levem a nenhum dos dois.

| Entrada           | Saída           |
| ----------------- | --------------- |
| direita esquerda  | Achou           |
| direita direita   | Tente novamente |
| esquerda esquerda | Morreu          |
| esquerda direita  | Tente novamente |
