# Aula 3 — Portas Digitais como Entrada (Sensores Digitais)

Curso: Internet das Coisas (IoT)

---

# Objetivos da Aula

Ao final desta aula o aluno deverá ser capaz de:

- compreender o funcionamento das **portas digitais**
- configurar portas como **entrada**
- entender o conceito de **sensores digitais**
- utilizar **botões como sensores**
- compreender circuitos **pull-up e pull-down**
- controlar um LED a partir de um botão

---

# O que são Portas Digitais

As portas digitais do Arduino podem operar em dois modos:

- **Entrada (INPUT)**
- **Saída (OUTPUT)**

Valores possíveis em portas digitais:

| Valor | Significado |
|------|------|
| LOW | 0V |
| HIGH | 5V |

---

# Sensores Digitais

Sensores digitais possuem apenas dois estados possíveis:


0 → LOW
1 → HIGH


Exemplos de sensores digitais:

- botão
- sensor de presença
- sensor de chama
- sensor magnético
- sensor de movimento

Nesta aula utilizaremos **um botão** para simular um sensor digital.

---

# Função pinMode()

A função `pinMode()` define o modo de funcionamento de um pino.

Exemplo:


pinMode(7, INPUT);


Neste caso o pino **7** está configurado como **entrada**.

---

# Função digitalRead()

A função `digitalRead()` lê o estado de um pino digital.


digitalRead(pino);


Exemplo:


estado = digitalRead(7);


Resultado possível:


HIGH
LOW


---

# Circuito Pull-Down

No circuito **pull-down**, o resistor mantém o pino em **LOW (0)** quando o botão não está pressionado.

Quando o botão é pressionado, o pino recebe **HIGH (5V)**.

Estado do botão:

| Botão | Estado do pino |
|------|------|
| Solto | LOW |
| Pressionado | HIGH |

---

# Código Pull-Down


int botao = 7;
int led = 2;

void setup() {

pinMode(botao, INPUT);
pinMode(led, OUTPUT);

}

void loop() {

int estado = digitalRead(botao);

if(estado == HIGH)
{
digitalWrite(led, HIGH);
}
else
{
digitalWrite(led, LOW);
}

}


---

# Circuito Pull-Up

No circuito **pull-up**, o resistor mantém o pino em **HIGH (1)** quando o botão não está pressionado.

Quando o botão é pressionado, o pino vai para **LOW (0)**.

Estado do botão:

| Botão | Estado do pino |
|------|------|
| Solto | HIGH |
| Pressionado | LOW |

---

# Código Pull-Up


int botao = 7;
int led = 2;

void setup() {

pinMode(botao, INPUT_PULLUP);
pinMode(led, OUTPUT);

}

void loop() {

int estado = digitalRead(botao);

if(estado == LOW)
{
digitalWrite(led, HIGH);
}
else
{
digitalWrite(led, LOW);
}

}


---

# Explicação importante

Quando usamos:


INPUT_PULLUP


o Arduino ativa **um resistor interno**, não sendo necessário adicionar resistor externo.

---

# Comparação dos circuitos

| Tipo | Botão solto | Botão pressionado |
|----|----|----|
| Pull-down | LOW | HIGH |
| Pull-up | HIGH | LOW |

---

# Atividade 1

Criar um programa onde:

- o LED acende **apenas enquanto o botão estiver pressionado**

---

# Atividade 2

Criar um programa onde:

- ao pressionar o botão o LED **liga**
- ao pressionar novamente o LED **desliga**

(Dica: usar uma variável para armazenar o estado)

---

# Atividade 3

Criar um sistema com **dois LEDs**:

| Botão | Ação |
|----|----|
| pressionado | LED verde |
| solto | LED vermelho |

---

# Atividade 4

Simular um **sensor de presença**.

Funcionamento:

| Estado | LED |
|----|----|
| presença detectada | LED ligado |
| sem presença | LED desligado |

---

# Atividade 5

Criar um sistema de **alarme simples**.

Funcionamento:

- botão pressionado → alarme ativado
- LED pisca continuamente

---

# Próxima Aula

Na próxima aula veremos:

- **Portas analógicas**
- leitura de sensores analógicos
- sensor de luz (LDR)
- uso de `analogRead()`

# Link do projeto no TINKERCAD
https://www.tinkercad.com/things/lSDCs2EaIHm-sensores-digitais?sharecode=CmdrEPrsrpZ8tEGWzJ6rpEVNSGTI3kQIxYM-cDWyFcc
