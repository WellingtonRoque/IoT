# Aula 1 — Introdução ao Arduino e Comunicação Serial
### Curso: Internet das Coisas (IoT)

---

## Objetivos da Aula

Ao final desta aula o aluno deverá ser capaz de:

- Compreender o que é o Arduino
- Entender a estrutura de um programa Arduino
- Utilizar o Tinkercad para simulação
- Exportar código do Tinkercad
- Compilar código no Arduino IDE
- Utilizar comunicação serial

---

## O que é Arduino?

O Arduino é uma plataforma de prototipagem eletrônica composta por:

- Hardware (placa microcontroladora)
- Software (ambiente de programação)

Ele é amplamente utilizado em projetos de:

- Internet das Coisas
- Automação
- Robótica
- Sistemas embarcados

---

## Componentes básicos da placa Arduino

Uma placa Arduino possui diversos componentes importantes:

### Microcontrolador
É o "cérebro" da placa, responsável por executar o programa.

### Portas Digitais
Permitem ler ou enviar sinais digitais (0 ou 1).

### Portas Analógicas
Permitem ler sensores com valores variados.

### Porta USB
Utilizada para:

- programar a placa
- alimentar o circuito
- comunicação com o computador

---

## Ambiente de desenvolvimento

Nesta aula utilizamos duas ferramentas principais.

### Tinkercad

Permite:

- simular circuitos
- programar Arduino online
- testar projetos sem hardware físico

https://www.tinkercad.com

---

### Arduino IDE

Utilizado para:

- escrever código
- compilar programas
- enviar código para a placa

https://www.arduino.cc/en/software

---

## Estrutura de um programa Arduino

Todo programa Arduino possui duas funções principais.

### Função setup()

Executa uma única vez quando o Arduino inicia.


void setup(){

}


Usos comuns:

- iniciar comunicação serial
- configurar pinos
- iniciar sensores

---

### Função loop()

Executa continuamente enquanto o Arduino estiver ligado.


void loop(){

}


É onde fica a lógica principal do programa.

---

## Fluxo de desenvolvimento utilizado

Fluxo utilizado durante a aula:


Tinkercad → Exportar código → Arduino IDE → Compilar → Upload


Etapas:

1. Criar circuito no Tinkercad  
2. Programar  
3. Exportar código  
4. Abrir no Arduino IDE  
5. Compilar  
6. Enviar para a placa  

---

## Comunicação Serial

A comunicação serial permite que o Arduino envie dados para o computador.

Ela é usada para:

- depuração de programas
- monitoramento de sensores
- comunicação com outros dispositivos

---

## Inicializando a comunicação serial


Serial.begin(9600);


O valor **9600** representa a velocidade da comunicação.

---

## Comandos de impressão

### Serial.print()

Imprime sem quebrar linha.


Serial.print("Texto");


### Serial.println()

Imprime e quebra a linha.


Serial.println("Texto");


---

## Exemplo utilizado na aula


int cont = 0;

void setup() {
Serial.begin(9600);
}

void loop() {

delay(1000);

Serial.print("Contador = ");
Serial.println(cont);

cont++;
}


---

## Resultado no Monitor Serial


Contador = 0
Contador = 1
Contador = 2
Contador = 3


---

## Exercícios

### Exercício 1

Modificar o programa para que o contador aumente de 2 em 2.

---

### Exercício 2

Modificar o programa para imprimir:


Sistema iniciado
Contador = X


---

### Exercício 3

Criar um contador que reinicie quando chegar em 10.

---

## Próxima aula

Na próxima aula veremos:

- Portas digitais
- Acionamento de LED
- pinMode()
- digitalWrite()

## Link do projeto no TINKERCAD
https://www.tinkercad.com/things/bVNF6n25m3P-ola-mundo/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fall&sharecode=l-Z7m2s7YHk2HPpPJSdl4pDRvR3EivwWxiqVzzox_h8
