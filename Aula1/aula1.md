Aula 1 — Introdução ao Arduino e Comunicação Serial
Curso: Internet das Coisas (IoT)
1. Objetivos da Aula

Ao final desta aula o aluno deverá ser capaz de:

Compreender o que é o Arduino

Entender a estrutura de um programa Arduino

Utilizar o Tinkercad para simulação

Exportar código do Tinkercad

Compilar o código no Arduino IDE

Utilizar a comunicação serial

Utilizar os comandos:

Serial.begin()
Serial.print()
Serial.println()
2. O que é Arduino?

O Arduino é uma plataforma de prototipagem eletrônica composta por:

Hardware (placa microcontroladora)

Software (ambiente de programação)

Ele é amplamente utilizado em projetos de:

Internet das Coisas

Automação

Robótica

Sistemas embarcados

Prototipagem de produtos

3. Componentes principais da placa Arduino

Uma placa Arduino possui diversos componentes importantes:

Microcontrolador

É o "cérebro" da placa, responsável por executar o programa.

Portas Digitais

Permitem ler ou enviar sinais digitais (0 ou 1).

Portas Analógicas

Permitem ler sensores com valores variados.

Porta USB

Utilizada para:

programar a placa

alimentar o circuito

comunicação com o computador

Regulador de tensão

Controla a energia recebida pela placa.

4. Ambiente de desenvolvimento

Nesta aula utilizamos duas ferramentas principais:

Tinkercad

Permite:

simular circuitos

programar Arduino online

testar projetos sem hardware físico

https://www.tinkercad.com

Arduino IDE

Utilizado para:

escrever código

compilar programas

enviar código para a placa

https://www.arduino.cc/en/software

5. Estrutura de um programa Arduino

Todo programa Arduino possui duas funções principais.

Função setup()

Executa uma única vez quando a placa é ligada.

void setup() {

}

Usos comuns:

iniciar comunicação serial

configurar pinos

iniciar sensores

Função loop()

Executa continuamente enquanto o Arduino estiver ligado.

void loop() {

}

É onde fica a lógica principal do programa.

6. Fluxo de desenvolvimento utilizado

Fluxo utilizado durante a aula:

Tinkercad → Exportar código → Arduino IDE → Compilar → Upload

Etapas:

Criar circuito no Tinkercad

Programar

Exportar código

Abrir no Arduino IDE

Compilar

Enviar para a placa

7. Comunicação Serial

A comunicação serial permite que o Arduino envie dados para o computador.

Ela é usada para:

depuração de programas

monitoramento de sensores

comunicação com outros dispositivos

8. Inicializando a comunicação serial

Para iniciar a comunicação utilizamos:

Serial.begin(9600);

O número 9600 representa a velocidade da comunicação (baud rate).

9. Enviando dados pela serial

Existem dois comandos principais.

Serial.print()

Imprime dados sem quebrar linha.

Serial.print("Texto");
Serial.println()

Imprime dados quebrando linha.

Serial.println("Texto");
10. Exemplo utilizado na aula

Programa apresentado:

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
11. Explicação do código
Variável
int cont = 0;

Cria uma variável chamada cont iniciando com valor 0.

Inicialização da serial
Serial.begin(9600);

Inicia comunicação com o computador.

Delay
delay(1000);

Pausa o programa por 1 segundo.

Impressão de dados
Serial.print("Contador = ");
Serial.println(cont);

Saída no Monitor Serial:

Contador = 0
Contador = 1
Contador = 2
Contador = 3
12. Exercício 1

Modifique o programa para que o contador aumente de 2 em 2.

Resultado esperado:

Contador = 0
Contador = 2
Contador = 4
Contador = 6
13. Exercício 2

Modifique o programa para imprimir:

Sistema iniciado
Contador = X
14. Exercício 3

Crie um contador que reinicie quando chegar em 10.

Exemplo esperado:

Contador = 0
Contador = 1
...
Contador = 10
Contador = 0
15. Conclusão da aula

Nesta aula aprendemos:

Estrutura de um programa Arduino

Uso do Tinkercad

Exportação de código

Compilação no Arduino IDE

Comunicação serial

Uso de variáveis

Uso de Serial.print e Serial.println

16. Próxima aula

Na próxima aula veremos:

Portas digitais

Acionamento de LED

Uso do pinMode()

Uso do digitalWrite()
