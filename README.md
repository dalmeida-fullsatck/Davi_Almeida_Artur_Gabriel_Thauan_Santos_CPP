# ⚽ Bolão da Copa do Mundo – Apenas elementos básicos

Programa em C++ para gerenciar um pequeno bolão de palpites dos jogos da Copa do Mundo.  
Desenvolvido **usando apenas tipos primitivos** (`int`, `char`, `bool`), sem vetores, arrays ou strings, conforme restrição do desafio.

## 🎯 Regras do Bolão

- São **3 jogos** (fixos) por rodada.
- Cada apostador informa o **placar exato** que ele acredita (gols do time1 e gols do time2).
- A pontuação por jogo é calculada assim:

| Acerto                                    | Pontos |
|-------------------------------------------|--------|
| Placar exato                              | 4      |
| Acertou o vencedor (mas não o placar)     | 3      |
| Acertou que houve empate (mas não o placar)| 2      |
| Errou totalmente                          | 0      |

- No máximo **3 apostadores** participam.
- O programa pergunta primeiro os **resultados reais** dos 4 jogos e depois os palpites de cada apostador.

## 🛠️ Compilação e Execução

Compile com qualquer compilador C++ padrão (C++11 ou superior). Exemplo com `g++`:

```bash
g++ bolao.cpp -o bolao
./bolao
