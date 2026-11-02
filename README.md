## Sistema de Caixa Eletrônico 
![Linguagem](https://img.shields.io/badge/linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Compilador](https://img.shields.io/badge/compilador-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)
![Status](https://img.shields.io/badge/status-concluído-success?style=for-the-badge)
![Instituição](https://img.shields.io/badge/UNICID-Grupo%206-blue?style=for-the-badge)

Simulação de um caixa eletrônico em C que valida um saque e calcula quais notas e moedas entregar, usando o menor número possível de cédulas.

## Funcionalidades

- Exibe o saldo disponível (valor fixo de exemplo: R$ 1000)
- Valida o valor digitado:
  - erro se for menor ou igual a zero
  - erro se for maior que o saldo
- Calcula a quantidade de cada nota/moeda (100, 50, 20, 10, 5, 2 e 1)
- Mostra apenas as notas e moedas que serão realmente usadas

##  Como funciona

O programa usa um **algoritmo guloso**: começa pela nota de maior valor, usa a divisão inteira (`/`) para saber quantas cabem e o resto da divisão (`%`) para continuar com o valor que sobrou.

Exemplo para R$ 287:

| Passo | Cálculo | Quantidade | Resto |
|-------|---------|-----------|-------|
| 100 | 287 / 100 | 2 | 87 |
| 50 | 87 / 50 | 1 | 37 |
| 20 | 37 / 20 | 1 | 17 |
| 10 | 17 / 10 | 1 | 7 |
| 5 | 7 / 5 | 1 | 2 |
| 2 | 2 / 2 | 1 | 0 |

##  Exemplo de uso

```
Saldo disponivel: R$ 1000
Digite o valor do saque: 287
Notas entregues:
2 nota(s) de 100
1 nota(s) de 50
1 nota(s) de 20
1 nota(s) de 10
1 nota(s) de 5
1 moeda(s) de 2
```

Exemplos de erro:

```
Digite o valor do saque: -5
Erro: valor invalido. Digite um valor maior que zero.
```

```
Digite o valor do saque: 1500
Erro: saldo insuficiente. Saldo: R$ 1000 | Saque pedido: R$ 1500
```
##  Tecnologias

- Linguagem C
- Biblioteca `stdio.h`
