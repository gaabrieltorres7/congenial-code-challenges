# Bloons TD

O Bloons TD 6 é um jogo de Tower Defense. Nessa modalidade, os jogadores têm como objetivo impedir que os inimigos percorram um mapa e invadam seu território. Para isso, é necessário pensar em torres de artilharia e armadilhas pelo caminho, para que todos sejam derrotados antes de chegar ao final do trajeto.

O BTD6 consiste em utilizar macacos para defender seu território contra balões. O jogo acontece em rodadas que ficam cada vez mais difíceis que a anterior, onde cada balão possui uma quantidade necessária de dano para estourar e cada macaco possui uma quantidade de dano por segundo que consegue causar.

Na rodada 100, todos os macacos posicionados no mapa enfrentam o Big Airship of Doom, abreviado para BAD, que é o balão mais poderoso do jogo e é necessário 28.000 de dano para estourá-lo.

## Entrada

A primeira linha consiste em um inteiro 'T' (15 <= T <= 30), representando o tempo, em segundos, necessário para o BAD cruzar o mapa na rodada 100. A linha seguinte contém um inteiro 'N' (1 <= N <= 10), representando a quantidade de macacos posicionados no mapa. Na linha seguinte serão dados 'N' inteiros 'X' (1 <= X <= 500), representando o dano por segundo que cada um dos 'N' macacos pode dar. Assim, todos os macacos dão dano em conjunto, por segundo, no BAD.

## Saída

Você deverá imprimir "Macacos venceram!", caso os macacos estourem o BAD antes de ele invadir o território, ou "O BAD venceu!", caso contrário.

## Exemplo

| Entrada                  | Saída             |
| ------------------------ | ----------------- |
| 30 4 200 250 120 100     | O BAD venceu!     |
| 20 5 200 500 150 200 350 | Macacos venceram! |
