# Atividade — Controle de Equipamentos com Botões

Nesta atividade iremos desenvolver um sistema de controle utilizando **portas digitais configuradas como entrada e saída**.

O sistema simula o controle de **equipamentos de uma empresa**, onde cada LED representa um equipamento.

---

# Objetivo da Atividade

Desenvolver um sistema onde:

- dois botões controlam uma **variável de estado**
- um botão **incrementa** o valor da variável
- outro botão **decrementa** o valor da variável
- o valor da variável define **quantos equipamentos estão ligados**

---

# Componentes utilizados

- Arduino UNO
- Protoboard
- 4 LEDs
- 4 resistores (220Ω)
- 2 botões
- Jumpers

---

# Representação dos equipamentos

| LED | Equipamento |
|----|----|
| LED1 | Equipamento 1 |
| LED2 | Equipamento 2 |
| LED3 | Equipamento 3 |
| LED4 | Equipamento 4 |

---

# Variável de controle

O sistema utilizará uma variável chamada:


controle


Valor inicial:


controle = 0


Essa variável determinará quantos equipamentos estarão ligados.

---

# Funcionamento do sistema

| Valor da variável | LEDs ligados |
|----|----|
| 0 | nenhum LED ligado |
| 1 | LED1 |
| 2 | LED1 + LED2 |
| 3 | LED1 + LED2 + LED3 |
| 4 | LED1 + LED2 + LED3 + LED4 |

---

# Botões de controle

Serão utilizados **dois botões configurados como entrada utilizando pull-up interno**.

| Botão | Função |
|----|----|
| Botão 1 | Incrementar variável |
| Botão 2 | Decrementar variável |

---

# Funcionamento esperado

### Botão de incremento

Cada vez que o botão for pressionado:


controle = controle + 1


---

### Botão de decremento

Cada vez que o botão for pressionado:


controle = controle - 1


---

# Regras do sistema

A variável de controle deve respeitar os limites:


valor mínimo = 0
valor máximo = 4


Se o valor ultrapassar esses limites, ele deve ser corrigido.

---

# Portas utilizadas

| Componente | Porta Arduino |
|----|----|
| LED1 | 2 |
| LED2 | 3 |
| LED3 | 4 |
| LED4 | 5 |
| Botão incremento | 7 |
| Botão decremento | 8 |

---

# Estrutura sugerida do programa

Os alunos deverão utilizar:


pinMode()
digitalRead()
digitalWrite()
if
variáveis


---

# Etapas da implementação

1. Declarar as variáveis dos LEDs
2. Declarar as variáveis dos botões
3. Criar a variável de controle
4. Configurar os LEDs como **OUTPUT**
5. Configurar os botões como **INPUT_PULLUP**
6. Ler o estado dos botões
7. Incrementar ou decrementar a variável
8. Garantir que o valor da variável fique entre **0 e 4**
9. Acender os LEDs de acordo com o valor da variável

---

# Exemplo de funcionamento

Estado inicial:


controle = 0


Todos os LEDs apagados.

---

Pressionando o botão de incremento:


controle = 1


LED1 acende.

---

Pressionando novamente:


controle = 2


LED1 e LED2 acendem.

---

# Desafio 1

Adicionar **comunicação serial** ao sistema para mostrar o valor da variável.

Exemplo de saída no Monitor Serial:


Equipamentos ativos: 2


---

# Desafio 2

Quando **todos os equipamentos estiverem ligados**, fazer o último LED piscar indicando **carga máxima do sistema**.

---

# Conceitos trabalhados

Esta atividade utiliza:

- variáveis
- portas digitais
- leitura de entradas
- controle de saídas
- lógica condicional
- circuitos pull-up

💡 Dica pedagógica (funciona muito bem em sala):

Antes de liberar a atividade, peça para os alunos desenharem no quadro a lógica:

controle = 0 → nenhum LED
controle = 1 → LED1
controle = 2 → LED1 + LED2
controle = 3 → LED1 + LED2 + LED3
controle = 4 → todos
