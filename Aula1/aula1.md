# Aula 1 — Introdução ao Arduino e Comunicação Serial
### Curso: Internet das Coisas (IoT)

---

## 1. Objetivos da Aula

Ao final desta aula o aluno deverá ser capaz de:

- Compreender o que é o **Arduino**
- Entender a estrutura de um programa Arduino
- Utilizar o **Tinkercad** para simulação
- Exportar código do Tinkercad
- Compilar código no **Arduino IDE**
- Utilizar comunicação serial

---

## 2. Estrutura de um programa Arduino

Todo programa Arduino possui duas funções principais:

```cpp
void setup(){

}

void loop(){

}
Função setup()

Executa uma única vez quando o Arduino é ligado.

Usado para:

iniciar comunicação serial

configurar pinos

inicializar sensores

Função loop()

Executa continuamente enquanto a placa estiver ligada.

3. Comunicação Serial

A comunicação serial permite que o Arduino envie dados para o computador.

Ela é usada para:

monitorar sensores

depurar programas

enviar informações para o monitor serial

4. Inicializando a comunicação serial
Serial.begin(9600);

O valor 9600 representa a velocidade da comunicação (baud rate).

5. Comandos de impressão
Serial.print()

Imprime sem quebrar linha.

Serial.print("Texto");
Serial.println()

Imprime e quebra a linha.

Serial.println("Texto");
6. Código apresentado na aula
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
7. Resultado no Monitor Serial
Contador = 0
Contador = 1
Contador = 2
Contador = 3
8. Exercícios
Exercício 1

Modificar o programa para que o contador aumente de 2 em 2.

Exercício 2

Modificar o programa para imprimir:

Sistema iniciado
Contador = X
Exercício 3

Criar um contador que reinicie quando chegar em 10.

Próxima aula

Na próxima aula veremos:

Portas digitais

Acionamento de LED

pinMode()

digitalWrite()
