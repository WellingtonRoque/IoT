Aula 2 — Comunicação Serial e Controle de Dispositivos
Objetivos da Aula

Ao final desta aula o aluno deverá ser capaz de:

compreender o funcionamento da comunicação serial

entender o conceito de ASCII

utilizar diferentes tipos de dados

ler dados enviados pelo Monitor Serial

controlar dispositivos usando comandos digitados

1. O que é Comunicação Serial

A comunicação serial é uma forma de transmitir dados um bit por vez entre dois dispositivos.

No Arduino ela é usada principalmente para:

comunicação com o computador

depuração de programas

envio e leitura de dados

comunicação entre dispositivos

Exemplo de comunicação:

Computador → Arduino
Arduino → Computador
2. Inicializando a comunicação Serial

Antes de usar a serial, precisamos inicializá-la.

Serial.begin(9600);

O valor 9600 representa a velocidade da comunicação (baud rate).

Outros valores comuns:

9600
19200
38400
57600
115200
3. Funções principais da Serial
Serial.begin()

Inicializa a comunicação serial.

Serial.begin(9600);
Serial.print()

Imprime informações sem quebrar linha.

Serial.print("Ola");

Saída:

Ola
Serial.println()

Imprime informações e quebra a linha.

Serial.println("Ola");

Saída:

Ola

(próxima mensagem aparece na linha seguinte)

Serial.available()

Verifica se existem dados disponíveis para leitura.

if (Serial.available() > 0)
Serial.read()

Lê um caractere enviado pela serial.

incomingByte = Serial.read();
4. Tabela ASCII

O computador representa caracteres usando números.

Exemplo:

Caractere	Código ASCII
A	65
a	97
0	48

Exemplo no Arduino:

char letra = 'a';
Serial.println(letra);
5. Tipos de dados no Arduino

Nesta aula trabalhamos com alguns tipos de dados.

char

Armazena um único caractere.

char letra = 'a';
int

Armazena números inteiros.

int numero = 10;
float

Armazena números decimais.

float temperatura = 23.5;
String

Armazena textos.

String mensagem = "Ola Mundo";
6. Circuito utilizado na aula

Componentes:

Arduino UNO

Protoboard

3 LEDs

Resistores

Jumpers

Portas utilizadas:

LED1 → pino 2
LED2 → pino 3
LED3 → pino 4
7. Programa utilizado na aula
char incomingByte;

int lamp1 = 2;
int lamp2 = 3;
int lamp3 = 4;

void setup() {

  Serial.begin(9600);

  pinMode(lamp1, OUTPUT);
  pinMode(lamp2, OUTPUT);
  pinMode(lamp3, OUTPUT);

}

void loop() {

  if (Serial.available() > 0) {

    incomingByte = Serial.read();

    Serial.print("Recebido: ");
    Serial.println(incomingByte);

    if(incomingByte == 'l')
    {
      Serial.println("Luzes LIGADAS");

      digitalWrite(lamp1, HIGH);
      digitalWrite(lamp2, HIGH);
      digitalWrite(lamp3, HIGH);
    }

    else if(incomingByte == 'd')
    {
      Serial.println("Luzes DESLIGADAS");

      digitalWrite(lamp1, LOW);
      digitalWrite(lamp2, LOW);
      digitalWrite(lamp3, LOW);
    }

    else
    {
      Serial.println("Comando invalido");
    }

  }

}
8. Funcionamento do programa

O Arduino:

Aguarda dados enviados pelo computador

Lê o caractere digitado no monitor serial

Verifica qual comando foi digitado

Executa a ação correspondente

Exemplo:

l → ligar LEDs
d → desligar LEDs
9. Testando no Monitor Serial

Passos:

Enviar o programa para o Arduino

Abrir o Monitor Serial

Selecionar 9600 baud

Digitar um comando

Exemplo:

l

Resultado:

Luzes LIGADAS
10. Próximo passo da aula

Após compreender o funcionamento da comunicação serial, os alunos irão desenvolver atividades utilizando o mesmo circuito.

Essas atividades irão simular:

automação residencial

controle de equipamentos

sistemas de segurança

semáforos

Se quiser, na próxima mensagem eu já te entrego também:

Aula 3 completa (Portas Digitais + LED + botão)

Lista de exercícios para Arduino

Simulações no Tinkercad

Projetos IoT progressivos para o semestre.

Preciso que você explique as funções SerialRead, SerialReadString, SerialparseInt, SerialparseFlaot, e depois da aula insira as atividades que você fez acima, coloque tudo na linguagem markdown

Segue o material completo da Aula 2 em Markdown, já pronto para você colocar no GitHub (aula2.md).
Ele inclui:

explicação da Serial

explicação das funções que você pediu

circuito

código

atividades progressivas

Basta copiar tudo de uma vez.

# Aula 2 — Comunicação Serial e Controle de Dispositivos
### Curso: Internet das Coisas (IoT)

---

# Objetivos da Aula

Ao final desta aula o aluno deverá ser capaz de:

- compreender o funcionamento da comunicação serial
- entender a relação entre caracteres e a **tabela ASCII**
- utilizar diferentes **tipos de dados**
- ler dados enviados pelo **Monitor Serial**
- controlar dispositivos usando comandos digitados

---

# O que é Comunicação Serial

A comunicação serial é uma forma de transmitir dados **um bit por vez** entre dois dispositivos.

No Arduino ela é usada principalmente para:

- comunicação com o computador
- depuração de programas
- envio de dados
- controle de dispositivos

Exemplo de comunicação:


Computador → Arduino
Arduino → Computador


---

# Inicializando a comunicação Serial

Antes de utilizar a comunicação serial precisamos inicializá-la.


Serial.begin(9600);


O valor **9600** representa a velocidade de comunicação (**baud rate**).

Outros valores comuns:


9600
19200
38400
57600
115200


---

# Funções principais da Serial

## Serial.print()

Imprime uma mensagem na serial **sem quebrar linha**.


Serial.print("Ola");


---

## Serial.println()

Imprime uma mensagem **quebrando linha**.


Serial.println("Ola");


---

## Serial.available()

Verifica se existem dados disponíveis para leitura.


if (Serial.available() > 0)


---

# Funções de leitura da Serial

Nesta aula vamos utilizar diferentes formas de ler dados enviados pelo **Monitor Serial**.

---

# Serial.read()

A função `Serial.read()` lê **um único caractere** enviado pela serial.

Ela retorna um valor do tipo **char**.

Exemplo:


incomingByte = Serial.read();


Se digitarmos:


a


O Arduino receberá o caractere `'a'`.

---

# Serial.readString()

A função `Serial.readString()` lê **uma sequência de caracteres**, ou seja, uma **String completa**.

Exemplo:


String mensagem;

mensagem = Serial.readString();


Se digitarmos:


ligar luz


O Arduino receberá:


"ligar luz"


---

# Serial.parseInt()

A função `Serial.parseInt()` lê **um número inteiro** enviado pela serial.

Exemplo:


int numero;

numero = Serial.parseInt();


Se digitarmos:


25


O Arduino receberá:


25


Tipo de dado utilizado:


int


---

# Serial.parseFloat()

A função `Serial.parseFloat()` lê **números decimais**.

Exemplo:


float temperatura;

temperatura = Serial.parseFloat();


Se digitarmos:


23.5


O Arduino receberá:


23.5


Tipo de dado utilizado:


float


---

# Tipos de dados utilizados

Nesta aula utilizamos alguns tipos de dados importantes.

### char

Armazena **um único caractere**.


char letra = 'a';


---

### int

Armazena números inteiros.


int numero = 10;


---

### float

Armazena números decimais.


float temperatura = 23.5;


---

### String

Armazena textos.


String mensagem = "Ola Mundo";


---

# Circuito utilizado na aula

Componentes utilizados:

- Arduino UNO
- Protoboard
- 3 LEDs
- Resistores
- Jumpers

Portas utilizadas:


LED1 → pino 2
LED2 → pino 3
LED3 → pino 4


---

# Programa utilizado na aula


char incomingByte;

int lamp1 = 2;
int lamp2 = 3;
int lamp3 = 4;

void setup() {

Serial.begin(9600);

pinMode(lamp1, OUTPUT);
pinMode(lamp2, OUTPUT);
pinMode(lamp3, OUTPUT);

}

void loop() {

if (Serial.available() > 0) {

incomingByte = Serial.read();

Serial.print("Recebido: ");
Serial.println(incomingByte);

if(incomingByte == 'l')
{
  Serial.println("Luzes LIGADAS");

  digitalWrite(lamp1, HIGH);
  digitalWrite(lamp2, HIGH);
  digitalWrite(lamp3, HIGH);
}

else if(incomingByte == 'd')
{
  Serial.println("Luzes DESLIGADAS");

  digitalWrite(lamp1, LOW);
  digitalWrite(lamp2, LOW);
  digitalWrite(lamp3, LOW);
}

else
{
  Serial.println("Comando invalido");
}

}

}


---

# Funcionamento do programa

O Arduino executa os seguintes passos:

1. Aguarda dados enviados pelo computador
2. Lê o caractere digitado no Monitor Serial
3. Verifica qual comando foi digitado
4. Executa a ação correspondente

Exemplo:


l → ligar LEDs
d → desligar LEDs


---

# Atividades

Após compreender o funcionamento da comunicação serial, os alunos deverão realizar as seguintes atividades.

---

# Atividade 1 — Controle individual dos LEDs

Controlar cada LED separadamente utilizando comandos da serial.

| Comando | Ação |
|------|------|
| a | Liga LED 1 |
| b | Liga LED 2 |
| c | Liga LED 3 |
| x | Desliga todos |

---

# Atividade 2 — Automação de uma casa

Cada LED representa um cômodo da casa.

| LED | Cômodo |
|----|----|
| LED1 | Sala |
| LED2 | Cozinha |
| LED3 | Quarto |

Comandos:

| Comando | Ação |
|---|---|
| s | Liga sala |
| c | Liga cozinha |
| q | Liga quarto |
| t | Liga todas as luzes |
| d | Desliga tudo |

---

# Atividade 3 — Sistema de empresa

Simular equipamentos de uma fábrica.

| LED | Equipamento |
|----|----|
| LED1 | Motor |
| LED2 | Esteira |
| LED3 | Ventilação |

Comandos:

| Comando | Ação |
|---|---|
| m | Liga motor |
| e | Liga esteira |
| v | Liga ventilação |
| p | Parar todos os equipamentos |

---

# Atividade 4 — Semáforo

Utilizar os LEDs como um semáforo.

| LED | Cor |
|----|----|
| LED1 | Vermelho |
| LED2 | Amarelo |
| LED3 | Verde |

Comandos:

| Comando | Ação |
|---|---|
| r | Vermelho |
| a | Amarelo |
| g | Verde |

---

# Atividade 5 — Sistema de segurança

Simular um sistema de alarmes.

| LED | Sistema |
|----|----|
| LED1 | Alarme de incêndio |
| LED2 | Alarme de intrusão |
| LED3 | Sistema ativo |

Comandos:

| Comando | Ação |
|---|---|
| i | Incêndio |
| s | Sistema ligado |
| a | Alarme invasão |
| d | Desligar alarmes |

---

# Desafio

Criar um sistema de controle utilizando **números**.


1 → ligar sala
2 → ligar cozinha
3 → ligar quarto
0 → desligar tudo


Para isso utilize:


Serial.parseInt();


---

# Próxima aula

Na próxima aula veremos:

- Portas digitais
- Uso de `pinMode()`
- Uso de `digitalWrite()`
- Controle de LEDs
