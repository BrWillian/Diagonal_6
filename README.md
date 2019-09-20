#O Jogo – Diagonal 6

    • Trata-se de uma competição entre 4 pessoas. O objetivo é marcar mais pontos que seus oponentes.                                            
    • As pecas : 
    • As 6 torres, uma estrutura vertical usada para manter as jogadas prévias dos jogadores, e visualizar o estado do jogo. Cada torre possui 6 espaços. A diagonal principal esta marcada pela linha verde.
                                     
    • As fichas: Cada jogador recebe 11 fichas de uma cor. Podendo escolher entre Azul, Vermelho, Roxo e Branco. Alem das 11 fichas o jogador também recebe 2 fichas pretas. Em cada ficha tem escrito um numero indicando a qual torre ela pertence.
                       
    • Iniciando o Jogo:
As fichas de cores semelhantes são agrupadas e entregues aos respectivos jogadores. As fichas pretas são distribuídas e cada jogador recebe duas. Todas essas fichas estão embaralhadas, sem uma seqüência pré definida. O jogo sempre começa pelo jogador Azul, seguido pelo Vermelho, Roxo e Branco, respectivamente. Cada ficha é empilhada na torre que tem o mesmo numero descrito na ficha. As fichas são empilhadas uma a uma por cada jogador. Quando uma ficha preta é jogada, é retirada a ficha no topo da torre indicada pela ficha preta. O jogo continua até que todas as torres estejam completamente cheias. Ao terminar, a pontuação é contada. O vencedor é o jogador com mais fichas na diagonal principal da torre. Cada ficha que um jogador consegue colocar na diagonal principal vale um ponto.

O programa

    • No programa, o conjunto de fichas de cada jogador é representado por uma fila e cada torre por uma pilha. Portanto temos 4 filas e 6 pilhas.
    
    • Após a distribuição das fichas ( montagem das filas ) o jogo começa. Cada jogador desenfileira uma ficha e empilha na respectiva torre ou desempilha uma ficha da torre, caso a ficha seja preta. Quando as torres estiverem cheias o jogo é encerrado. e as torres devem ser exibidas com as fichas restantes dos jogadores, lembrando que há possibilidade de empate entre ate 3 jogadores.
    • Mostrar na tela o conteúdo das torres, as fichas que sobraram na fila de cada jogador e a cor do(s) jogador(es) vencedor(es).

Obs. 1: Caso uma ficha tente ser empilhada em uma torre cheia, ela pulara para a próxima torre à direita ( de 1 para 2, de 2 para 3 , ... , de 6 para 1 ).
Obs. 2: Uma ficha preta jogada em uma torre vazia é desperdiçada, pois nenhuma ficha é removida, e a jogada é valida.
