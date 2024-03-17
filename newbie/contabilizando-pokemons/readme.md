# Contabilizando pokemons

A Pokédex, também conhecida como Poké-Agenda, é uma enciclopédia virtual portátil de alta tecnologia que os treinadores Pokémon transportam para registrar todas as espécies diferentes de Pokémon que são encontradas durante a sua viagem como treinadores.

O novo modelo de Pokédex está sendo desenvolvido e registra monstrinhos das regiões de Kanto, Johto e Hoenn. Sempre que Pokémons de uma nova espécie são capturados, a Pokédex deve adicionar a quantidade de Pokémons capturados ao contador das regiões em que eles são originários. Sua missão é desenvolver um programa que implemente essa funcionalidade.

## Entrada

A entrada é composta de 2 linhas. A primeira linha contém três inteiros que representam o número de pokémons já registrados na Pokédex de cada região, na ordem ‘K’ (Kanto), ‘J’ (Johto) e ‘H’ (Hoenn). A segunda linha contém o número de novos pokémons capturados de cada região na mesma ordem da primeira linha.

Restrições: (0 <= K,J,H <= 100)

## Saída

Imprima, na ordem da entrada (K J H), o número total de pokémons de cada região após a nova contagem, separados por espaço. Imprima uma quebra de linha no fim.

## Exemplo

| Entrada        | Saída    |
| -------------- | -------- |
| 92 40 54 1 0 0 | 93 40 54 |
| 12 1 0 0 2 2   | 12 3 2   |
