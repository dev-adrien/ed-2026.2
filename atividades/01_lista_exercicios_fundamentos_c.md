<table style="width: 100%; margin: 0 auto;">
<thead>
    <tr>
        <td rowspan="2"><img src="./../logo_taua_simples.png" style="width: 200px; margin: 0 auto"></td>
        <td colspan="2" align="center"><b>INSTITUTO FEDERAL DO CEARÁ - CAMPUS TAUÁ<br>
                        ANÁLISE E DESENVOLVIMENTO DE SISTEMAS</b>
        </td>
    </tr>
    <tr>
        <td><b>Professor:</b> Me. Lucas Mendes</td>
        <td><b>Disciplina:</b> Estrutura de Dados<br>
            <b>Turma:</b> S2
        </td>
    </tr>
    <tr>
        <td colspan="3" align="center"><strong>Lista de Exercícios 01: Fundamentos de Programação em C</strong></td>
    </tr>
</thead>
<tbody>
    <tr>
        <td colspan="3"><b>Objetivo:</b> consolidar os fundamentos da linguagem C necessários para a transição para o estudo de algoritmos e estruturas de dados.</td>
    </tr>
    <tr>
        <td colspan="3"><b>Instruções:</b></td>
    </tr>
    <tr>
        <td colspan="3">- Todos os programas devem ser desenvolvidos em C, compilados e testados em ambiente compatível com C moderno.</td>
    </tr>
    <tr>
        <td colspan="3">- Salvo indicação contrária, utilize <code>int main(void)</code> e as bibliotecas necessárias ao problema.</td>
    </tr>
    <tr>
        <td colspan="3">- Procure utilizar nomes significativos para variáveis, indentação adequada e uma instrução por linha.</td>
    </tr>
    <tr>
        <td colspan="3">- A lista é organizada por assunto e, dentro de cada assunto, por dificuldade. A pontuação indicada representa os scores atribuídos a cada questão.</td>
    </tr>
    <tr>
        <td colspan="3">- O uso de ferramentas de IA deve ser feito com responsabilidade e de acordo com o código de conduta para uso de IA da disciplina, utilizando-as como suporte ao aprendizado. Caso utilize IA, registre sua utilização conforme as orientações da disciplina. Lembre-se de que nas avaliações escritas não será permitido o uso de IA. Portanto, não terceirize a resolução desta atividade.</td>
    </tr>
    <tr>
        <td colspan="3">- Link para o código de conduta sobre uso de IA: <a href="https://docs.google.com/document/d/1eUUiuaxLibc84h4bAZb6qX0cdZKHAm4akP9JXBxiP-s/edit?usp=sharing">https://docs.google.com/document/d/1eUUiuaxLibc84h4bAZb6qX0cdZKHAm4akP9JXBxiP-s/edit?usp=sharing</a></td>
    </tr>
</tbody>
</table>

---

# Organização e pontuação

A lista possui **35 questões**, distribuídas em quatro blocos:

| Bloco | Questões | Foco |
|---|---:|---|
| 1. Programação sequencial | 1–7 | variáveis, tipos, entrada/saída e operações |
| 2. Estruturas de decisão | 8–18 | `if`, `else`, operadores lógicos e `switch` |
| 3. Estruturas de repetição | 19–29 | `for`, `while`, `do...while`, acumuladores e algoritmos iterativos |
| 4. Sentinelas e problemas integradores | 30–35 | combinação de repetição, decisão e raciocínio algorítmico |

## Níveis de dificuldade

| Nível | Scores | Caracterização |
|---|---:|---|
| **Nível 1: Fundamentos** | **1,0** | Aplicação direta de um conceito, com pouca combinação de estruturas. |
| **Nível 2: Intermediário** | **2,0** | Combinação de conceitos, decisões encadeadas, controle de repetição ou tratamento de casos especiais. |
| **Nível 3: Avançado** | **3,0** | Problemas que exigem maior decomposição algorítmica, combinação de estruturas e atenção a casos-limite. |

> **Importante:** dificuldade não significa apenas quantidade de código. Uma questão pode ser curta e ainda assim exigir um raciocínio algorítmico maior. Ou pode ser longa, mas exigir apenas a aplicação direta de um conceito.

## Regras de cumprimento mínimo

Para garantir que todos os conteúdos fundamentais sejam praticados, você deve resolver **no mínimo 15 questões**, respeitando simultaneamente as seguintes regras:

| Nível | Mínimo |
|---|---:|
| Nível 1: Fundamentos | **4 questões** |
| Nível 2: Intermediário | **4 questões** |
| Nível 3: Avançado | **4 questões** |

- Além de observar o nível de dificuldade, você deve escolher questões de **todos os quatro blocos**, sendo que para cada bloco você deve resolver **no mínimo 2 questões**.

- A questão 35 é de **resolução obrigatória**.

### Pontuação da atividade

A nota final da atividade será convertida para a escala de 0 a 10 pontos, proporcional aos scores obtidos na soma das questões resolvidas, observando as regras a seguir.

**Regras para cálculo da nota final:** 
- Se você resolver **menos de 15 questões**, não resolver a questão 35, ou **não cumprir os mínimos de cada nível e bloco**, a pontuação final será limitada a **5,0 pontos**, de forma proporcional aos scores obtidos.
- Se os requisitos mínimos forem cumpridos, a nota será calculada proporcionalmente aos scores obtidos, considerando 40 scores como referência para a nota 10,0. 
    - `Nota = (scores obtidos / 40) × 10`
    - ***Exemplo:*** se você somar 30 scores, a nota será `(30 / 40) × 10 = 7,5`.
    - Caso o resultado seja superior a 10,0, a nota será limitada a 10,0.

---

# Bloco 1: Programação sequencial

## Nível 1: Fundamentos

### 1. Média de duas notas — 1,0 score

Dadas duas notas de um aluno, informe sua média final.

O programa deve:

- solicitar as duas notas;
- calcular a média aritmética;
- exibir o resultado com duas casas decimais.

---

### 2. Consumo médio de combustível — 1,0 score

Dados a distância percorrida por um automóvel e o total de litros de combustível consumidos para percorrê-la, informe o consumo médio.

Apresente o resultado em quilômetros por litro, com duas casas decimais.

---

### 3. Conversão de temperatura — 1,0 score

Dada uma temperatura em graus Fahrenheit, informe o valor correspondente em graus Celsius.

Utilize:

```text
C = (F - 32) × 5 / 9
```

**Atenção:** em C, a divisão entre dois valores inteiros produz um resultado inteiro. Utilize tipos de ponto flutuante para evitar perda da parte decimal no cálculo.

---

### 4. Volume de um paralelepípedo — 1,0 score

Leia a largura, a altura e a profundidade de um paralelepípedo e calcule seu volume.

Utilize:

```text
V = largura × altura × profundidade
```

Apresente o resultado com duas casas decimais.

> **Objetivo:** praticar entrada de dados, variáveis de ponto flutuante, operações aritméticas e formatação da saída.

---

## Nível 2: Intermediário

### 5. Conversão de tempo — 2,0 scores

Leia uma quantidade de segundos e converta-a para horas, minutos e segundos.

Por exemplo:

```text
Entrada:
3661

Saída:
1 hora, 1 minuto e 1 segundo
```

Utilize operações de divisão inteira e resto da divisão (`%`).

---

### 6. Quantidade mínima de cédulas — 2,0 scores

Leia um valor inteiro correspondente a uma quantia em dinheiro e determine a quantidade mínima de cédulas necessárias para representá-lo.

Considere as cédulas:

```text
R$ 100
R$ 50
R$ 20
R$ 10
R$ 5
R$ 2
R$ 1
```

Informe a quantidade de cada cédula utilizada.

---

## Nível 3: Avançado

### 7. Hipotenusa de um triângulo retângulo — 3,0 scores

Dadas as medidas dos dois catetos de um triângulo retângulo, calcule a medida da hipotenusa.

Utilize o Teorema de Pitágoras:

```text
h = √(a² + b²)
```

Utilize a função `sqrt()` da biblioteca `math.h`.

O programa deve apresentar o resultado com duas casas decimais.

---

# Bloco 2: Estruturas de decisão

## Nível 1: Fundamentos

### 8. Maior de dois números — 1,0 score

Leia dois números distintos e informe qual deles é o maior.

---

### 9. Valor absoluto — 1,0 score

Leia um número real e informe seu valor absoluto.

Por exemplo:

```text
Entrada: -12.5
Saída: 12.5
```

---

### 10. Ano bissexto — 1,0 score

Leia um ano e informe se ele é ou não bissexto.

Considere que um ano é bissexto quando:

- é divisível por 4; e
- não é divisível por 100,

ou quando é divisível por 400.

---

## Nível 2: Intermediário

### 11. Reajuste salarial — 2,0 scores

Uma empresa determinou um reajuste salarial de 5% para todos os funcionários. Além disso, concedeu um abono de R$ 100,00 para aqueles que recebem até R$ 750,00.

Dado o salário de um funcionário, informe o novo salário.

---

### 12. Situação do aluno — 2,0 scores

Uma instituição adota os seguintes critérios:

- média maior ou igual a 7,0 → **aprovado**;
- média inferior a 3,0 → **reprovado**;
- demais casos → **recuperação**.

Dadas duas notas, calcule a média e informe a situação do aluno.

---

### 13. Maior de três números — 2,0 scores

Leia três números e informe o maior deles.

Procure construir a solução utilizando estruturas condicionais de forma clara, evitando comparações desnecessárias.

---

### 14. Ordenação de três números — 2,0 scores

Leia três números inteiros e exiba-os em ordem crescente.

Exemplo:

```text
Entrada:
8 3 5

Saída:
3 5 8
```

---

### 15. Expressões lógicas — 2,0 scores

Determine e justifique a saída produzida pela seguinte instrução:

```c
printf("%d %d %d %d",
       !3,
       !0,
       3 + 'a' > 'b' + 2 && !'b',
       1 || !2 && 3);
```

Depois, escreva um pequeno programa que execute a expressão e confirme o resultado.

---

## Nível 3: Avançado

### 16. Menu de operações — 3,0 scores

Implemente uma calculadora simples utilizando `switch`.

O programa deve solicitar:

- dois números;
- uma operação.

Considere:

```text
+  soma
-  subtração
*  multiplicação
/  divisão
```

O programa deve tratar adequadamente uma tentativa de divisão por zero.

---

### 17. Operador alternativo de divisão — 3,0 scores

Adapte a calculadora da questão anterior para que o usuário possa representar a divisão utilizando tanto `/` quanto `:`.

Por exemplo:

```text
10 / 2
```

e

```text
10 : 2
```

devem produzir o mesmo resultado.

Utilize o comportamento de `switch` conhecido como **fall-through** de forma intencional e documentada.

---

### 18. Menu interativo — 3,0 scores

Implemente um menu de operações utilizando `do...while` e `switch`.

O menu deve permitir ao usuário escolher entre pelo menos:

```text
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
5 - Sair
```

O programa deve continuar apresentando o menu até que o usuário escolha a opção de saída.

Trate opções inválidas e divisão por zero.

---

# Bloco 3: Estruturas de repetição

## Nível 1: Fundamentos

### 19. Contagem regressiva — 1,0 score

Dado um valor inteiro `n`, exiba uma contagem regressiva até zero.

Exemplo:

```text
Entrada: 5

Saída:
5
4
3
2
1
0
```

---

### 20. Tabela de conversão — 1,0 score

Exiba uma tabela de conversão de polegadas para centímetros, variando o valor de 0 a 10 polegadas, de meio em meio.

Considere:

```text
1 polegada ≈ 2,54 cm
```

Exemplo parcial:

```text
Polegadas   Centímetros
0.0         0.00
0.5         1.27
1.0         2.54
...
```

---

### 21. Fatorial — 1,0 score

Dado um número natural `n`, calcule e exiba `n!`.

Por exemplo:

```text
5! = 5 × 4 × 3 × 2 × 1 = 120
```

---

## Nível 2: Intermediário

### 22. Potência por multiplicações sucessivas — 2,0 scores

Dados um número real `x` e um número natural `n`, calcule `xⁿ` utilizando repetição e multiplicações sucessivas. Na sequência, refatore o código para utilizar a função `pow()` da biblioteca `math.h`.

---

### 23. Números e seus quadrados — 2,0 scores

Leia um número natural `n` e imprima todos os números inteiros de 1 a `n` acompanhados de seus respectivos quadrados.

Exemplo:

```text
1 → 1
2 → 4
3 → 9
4 → 16
...
```

---

### 24. Fibonacci — 2,0 scores

A série de Fibonacci é definida por:

```text
1, 1, 2, 3, 5, 8, 13, 21, ...
```

Os dois primeiros termos são 1 e, a partir do terceiro, cada termo é obtido pela soma dos dois anteriores.

Dado `n ≥ 3`, exiba o n-ésimo termo da série.

---

### 25. Quadrado pela soma dos ímpares — 2,0 scores

O quadrado de um número natural `n` pode ser obtido pela soma dos `n` primeiros números ímpares consecutivos:

```text
1² = 1
2² = 1 + 3
3² = 1 + 3 + 5
4² = 1 + 3 + 5 + 7
```

Dado `n`, calcule seu quadrado utilizando a soma dos números ímpares, e não a multiplicação `n * n`.

---

### 26. Divisores de um número — 2,0 scores

Leia um número natural `n` e exiba todos os seus divisores.

Ao final, informe também a soma dos divisores encontrados.

---

### 27. Número primo — 2,0 scores

Aproveite a solução da questão anterior para determinar se um número natural `n` é primo.

Um número primo possui exatamente dois divisores positivos: 1 e ele próprio.

---

### 28. Soma dos dígitos — 2,0 scores

Leia um número natural e calcule a soma de seus dígitos.

Exemplo:

```text
Entrada: 542070

Saída: 18
```

---

## Nível 3: Avançado

### 29. Construção de um número a partir de seus dígitos — 3,0 scores

Leia um número natural `n` indicando a quantidade de algarismos e, em seguida, leia `n` algarismos entre 0 e 9.

Construa e exiba o número correspondente aos algarismos na mesma ordem.

Exemplo:

```text
Entrada:
6
5 4 2 0 7 0

Saída:
542070
```

Não é permitido simplesmente imprimir os algarismos um a um. O objetivo é construir numericamente o valor.

Na resolução, utilize um vetor de tamanho `n` para armazenar os algarismos, e depois construa o número a partir do vetor.

---

# Bloco 4: Sentinelas e problemas integradores

## Nível 2: Intermediário

### 30. Menor e maior valor da sequência — 2,0 scores

Leia uma sequência de números positivos. A entrada termina quando o usuário informar `0`.

Ao final, informe:

- o menor valor;
- o maior valor.

Considere que pelo menos um número positivo será informado antes do `0`.

Exemplo:

```text
Entrada:
18
7
32
4
11
0

Saída:
Menor: 4
Maior: 32
```

---

### 31. Pares, ímpares, maior e menor — 2,0 scores

Leia uma sequência de números naturais terminada por `0`.

Informe:

- quantidade de números pares;
- quantidade de números ímpares;
- maior número par;
- menor número par;
- maior número ímpar;
- menor número ímpar.

O programa deve tratar adequadamente o caso em que não exista nenhum número par ou nenhum número ímpar na sequência.

---

## Nível 3 — Avançado

### 32. Sequência de tamanho conhecido — 3,0 scores

Faça uma variação da questão anterior.

Primeiro, leia um número `n` indicando quantos valores serão informados. Em seguida, leia exatamente `n` números.

Informe:

- quantidade de pares;
- quantidade de ímpares;
- maior par;
- menor par;
- maior ímpar;
- menor ímpar.

Compare conceitualmente esta solução com a questão anterior: neste caso, o algoritmo conhece antecipadamente a quantidade de dados que serão processados.

---

### 33. Caixa da loja — 3,0 scores

Um comerciante precisa informatizar o caixa de sua loja.

O programa deve ler uma série de valores correspondentes aos preços das mercadorias compradas por um cliente. O valor `0` encerra a entrada.

Após calcular o total da compra, aplique o desconto conforme a tabela:

| Total da compra | Desconto |
|---|---:|
| Abaixo de R$ 50,00 | 5% |
| De R$ 50,00 até abaixo de R$ 100,00 | 10% |
| De R$ 100,00 até R$ 200,00 | 15% |
| Acima de R$ 200,00 | 20% |

Informe:

- total da compra;
- percentual de desconto;
- valor do desconto;
- valor final a pagar.

---

### 34. Simulação de conta bancária — 3,0 scores

Faça um programa que calcule o saldo de uma conta bancária.

O programa deve receber:

1. o saldo inicial;
2. uma série de operações de crédito e/ou débito;
3. a entrada termina quando for informado `0`.

Considere valores positivos como créditos e valores negativos como débitos.

Ao final, apresente:

- total de créditos;
- total de débitos;
- taxa paga, correspondente a 0,35% do total de débitos;
- saldo final.

Exemplo:

```text
Saldo inicial? 1000.00
Operação? -200.00
Operação? +50.00
Operação? -320.00
Operação? +100.00
Operação? -200.00
Operação? 0

Total de créditos ....: R$ 150.00
Total de débitos .....: R$ 720.00
Taxa paga ............: R$ 2.52
Saldo final ..........: R$ 427.48
```

---

### 35. Programa de conversão de unidades — 3,0 scores

Escreva um programa para fazer conversões entre diferentes unidades. As opções do programa devem ser exibidas em forma de um menu apresentado na tela, em dois níveis. No primeiro nível, o usuário escolhe a classe de unidade, ou a opção "Sair"; no segundo nível, o usuário escolhe a conversão que deseja, fornecendo então o valor a ser convertido. Por fim, o programa exibe o valor resultante na tela e permite que o usuário continue interagindo com o programa até que ele decida sair. As opções apresentadas no menu podem ser:

```text
1.Peso
    1.1. Libra → Quilograma
    1.2. Quilograma → Libra
    1.3. Onça → Grama
    1.4. Grama → Onça
2. Volume
    2.1. Galão → Litro
    2.2. Litro → Galão
    2.3. Onça Líquida → Mililitro
    2.4. Mililitro → Onça Líquida
3. Comprimento
    3.1. Milha → Quilômetro
    3.2. Quilômetro → Milha
    3.3. Jarda → Metro
    3.4. Metro → Jarda
4. Sair
```

Sabe-se que 1 libra equivale a 0.4536 kg, 1 onça a 28.3495 g, 1 galão a 3.7854 L, 1 onça líquida a 29.5735 mL, 1 milha a 1.6093 km e 1 jarda a 0.9144 m.

---

# Guia rápido de escolha das questões

A tabela abaixo pode ser usada para planejar quais questões resolver.

| Questão | Assunto | Nível | Scores |
|---:|---|---|---:|
| 1 | Sequencial | 1 - Fundamentos | 1 |
| 2 | Sequencial | 1 - Fundamentos | 1 |
| 3 | Sequencial | 1 - Fundamentos | 1 |
| 4 | Sequencial | 1 - Fundamentos | 1 |
| 5 | Sequencial | 2 - Intermediário | 2 |
| 6 | Sequencial | 2 - Intermediário | 2 |
| 7 | Sequencial | 3 - Avançado | 3 |
| 8 | Decisão | 1 - Fundamentos | 1 |
| 9 | Decisão | 1 - Fundamentos | 1 |
| 10 | Decisão | 1 - Fundamentos | 1 |
| 11 | Decisão | 2 - Intermediário | 2 |
| 12 | Decisão | 2 - Intermediário | 2 |
| 13 | Decisão | 2 - Intermediário | 2 |
| 14 | Decisão | 2 - Intermediário | 2 |
| 15 | Decisão | 2 - Intermediário | 2 |
| 16 | Decisão / `switch` | 3 - Avançado | 3 |
| 17 | Decisão / `switch` | 3 - Avançado | 3 |
| 18 | Decisão / repetição | 3 - Avançado | 3 |
| 19 | Repetição | 1 - Fundamentos | 1 |
| 20 | Repetição | 1 - Fundamentos | 1 |
| 21 | Repetição | 1 - Fundamentos | 1 |
| 22 | Repetição | 2 - Intermediário | 2 |
| 23 | Repetição | 2 - Intermediário | 2 |
| 24 | Repetição | 2 - Intermediário | 2 |
| 25 | Repetição | 2 - Intermediário | 2 |
| 26 | Repetição | 2 - Intermediário | 2 |
| 27 | Repetição | 2 - Intermediário | 2 |
| 28 | Repetição | 2 - Intermediário | 2 |
| 29 | Repetição | 3 - Avançado | 3 |
| 30 | Sentinela | 2 - Intermediário | 2 |
| 31 | Sentinela | 2 - Intermediário | 2 |
| 32 | Sentinela | 3 - Avançado | 3 |
| 33 | Integrador | 3 - Avançado | 3 |
| 34 | Integrador | 3 - Avançado | 3 |
| 35 | Integrador | 3 - Avançado | 3 |
|  |  | **Scores Possíveis** | **69** |

---
