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
        <td colspan="3" align="center"><strong>Lista de Exercícios 02: Funções e Recursão</strong></td>
    </tr>
</thead>
<tbody>
    <tr>
        <td colspan="3"><b>Objetivo:</b> Aplicar os conceitos de funções e recursão em problemas de programação.</td>
    </tr>
    <tr>
        <td colspan="3"><b>Instruções:</b></td>
    </tr>
    <tr>
        <td colspan="3">- As questões discursivas devem ser respondidas no caderno, enviando as respostas em formato digital (foto legivel ou scan). As questões de implementação devem ser programadas em C, compiladas e testadas, enviando os arquivos <code>.c</code> em uma pasta compactada.</td>
    </tr>
    <tr>
        <td colspan="3">- Salvo indicação contrária, utilize <code>int main(void)</code> e as bibliotecas necessárias ao problema.</td>
    </tr>
    <tr>
        <td colspan="3">- Procure utilizar nomes significativos para variáveis, indentação adequada, protótipos de função e demais boas práticas de programação.</td>
    </tr>
    <tr>
        <td colspan="3">- Esta lista tem foco em funções e recursão, porém outros assuntos já estudados também serão abordados.</td>
    </tr>
    <tr>
        <td colspan="3">- Nos exercícios recursivos, identifique caso-base, passo recursivo e motivo do término.</td>
    </tr>
    <tr>
        <td colspan="3">- Quando houver entradas inválidas ou limites numéricos, explicite como serão tratados.</td>
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

**1.** Considere o código abaixo, escrito em C e responda o que se pede.

```c
int calcular(int a, int b) {
    int resultado = a * 2 + b;
    return resultado;
}
```

a) Identifique o tipo de retorno, o nome e os parâmetros.  
b) Qual o resultado de `calcular(4, 3)`?  
c) Na chamada `int x = calcular(4, 3);`, quais são os argumentos e onde fica o resultado?  
d) Explique a diferença entre parâmetro e argumento.

**2.** Considere o código abaixo, escrito em C e responda o que se pede.

```c
void mostrar_dobro(int n) {
    printf("%d\n", 2 * n);
}

int calcular_dobro(int n) {
    return 2 * n;
}
```

a) Qual pode ser usada em `int x = fn(5) + 3;`, onde `fn` é o nome da função? Por quê?  
b) Escreva um `main` que chame ambas com argumento `5`.  
c) Explique por que imprimir um valor não é o mesmo que retorná-lo.

**3.** Escreva um programa completo com protótipo e definição de uma função chamada `maior_de_tres`, que recebe três inteiros e retorna o maior valor. Teste com `(3, 9, 5)`, `(7, 7, 2)` e `(-4, -9, -1)`.

**4.** Uma das principais características que buscamos empregrar uma função é a modularidade, ou seja, a capacidade de dividir um problema em partes menores e mais gerenciáveis. Isso facilita a manutenção do código, a reutilização de funções e a clareza do programa como um todo.

Nesse contexto, um programa precisa ler três notas, validá-las, calcular a média e informar a situação do estudante.

Proponha uma decomposição em funções e, para cada função, informe nome, parâmetros, tipo de retorno e responsabilidade. Implemente pelo menos as funções `nota_valida`, `calcular_media` e `situacao`. Defina claramente o critério de aprovação adotado e escreva uma função `main` que utilize as funções implementadas para testar o programa.

**5.** Considere o código abaixo, escrito em C e responda o que se pede.

```c
int contagem(int n) {
    if (n == 0) {
        return 0;
    }

    return 1 + contagem(n - 1);
}
```

a) Identifique o caso-base e a chamada recursiva.  
b) Qual valor retorna `contagem(4)`?  
c) O que aconteceria se a chamada fosse `contagem(n + 1)` para `n > 0`?  
d) Explique por que a recursão apresentada no código acima é do tipo não caudal e proponha uma versão que seja do tipo caudal.

**6.** Implemente `soma_ate(n)` conforme:

![](./img/lista02/eq_q06.png)

a) Identifique caso-base e passo recursivo.  
b) Rastreie `soma_ate(4)`, mostrando descida (chamadas recursivas) e retornos.  
c) Classifique a recursão.  
d) Implemente uma versão iterativa (usando laço de repetição) e compare as soluções.

**7.** Implemente `fatorial(n)` para inteiros não negativos:

![](./img/lista02/eq_q07.png)

a) Rastreie `fatorial(4)`.  
b) Explique por que `fatorial(0)` retorna `1`.  
c) A chamada recursiva é de cauda? Justifique.  
d) Que limites numéricos precisam ser considerados?  
e) Implemente também uma versão iterativa.

**8.** A sequência de Fibonacci é definida por:

![](./img/lista02/eq_q08.png)

o que resulta na sequência: `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...`.

A definição recursiva estabelece que cada termo, a partir do terceiro, é a soma dos dois termos anteriores. Sabendo disso: 

a) implemente `int fibonacci(int n)` para inteiros não negativos, que recebe um número inteiro não negativo `n` e retorna o `n-ésimo` termo da sequência de Fibonacci. Identifique caso-base e passo recursivo.     

b) teste sua implementação com `n = 47` e observe o tempo de execução e o valor resultante. Explique o que acontece com essa implementação recursiva, quando aplicamos um valor maior de `n`, bem como o que acontece com a capacidade de respresentação do tipo `int` utilizado.       

c) implemente uma versão iterativa (usando laço de repetição) e compare as soluções em relação ao tempo de execução.
d) altere o tipo de retorno da função para conseguir representar adequadamente valores maiores da sequência de Fibonacci.

**9.** Uma pessoa contraiu uma dívida e deseja quitá-la por meio de pagamentos mensais fixos. A cada mês, são aplicados juros sobre o saldo devedor e, em seguida, o pagamento é descontado.

Você deverá desenvolver um programa em C que calcule o saldo da dívida após `n` meses, utilizando uma função recursiva.

O programa deve ler:
- O valor inicial da dívida;
- A taxa de juros mensal, em porcentagem;
- O valor do pagamento mensal;
- O número de meses que serão simulados.

O programa deverá ter uma função recursiva para calcular o saldo devedor ao final do período, seguindo estas regras:
1. Se a dívida já estiver quitada, o saldo será zero.
2. Caso contrário, calcule os juros do mês sobre o saldo atual.
3. Subtraia o pagamento mensal do saldo acrescido dos juros.
4. Se o pagamento for suficiente para quitar a dívida, considere o saldo igual a zero.
5. Repita o processo recursivamente até completar os `n` meses ou quitar a dívida.

A função deve receber os dados necessários como parâmetros e retornar o saldo final.

**Exemplo**

Considere os seguintes valores:

| Parâmetro        | Valor       |
| ---------------- | ----------- |
| Dívida inicial   | R$ 1.000,00 |
| Juros mensais    | 2%          |
| Pagamento mensal | R$ 200,00   |
| Período          | 3 meses     |

A evolução da dívida será:

| Mês | Saldo inicial | Juros (2%) | Pagamento | Saldo final |
| --- | ------------- | ---------- | --------- | ----------- |
| 1   | R$ 1.000,00   | R$ 20,00   | R$ 200,00 | R$ 820,00   |
| 2   | R$ 820,00     | R$ 16,40   | R$ 200,00 | R$ 636,40   |
| 3   | R$ 636,40     | R$ 12,73   | R$ 200,00 | R$ 449,13   |

Resultado esperado:

```
Saldo devedor após 3 meses: R$ 449,13
```

**Como pensar na recursão**

A ideia central é que a função resolva o problema para um mês usando a solução para os meses restantes.

Podemos definir:

![](./img/lista02/eq_q09.png)

onde, 

- `F(S,n)` representa o saldo devedor após a simulação de `n` meses
- `S` é o saldo inicial
- `n` é o número de meses
- `r` é a taxa de juros mensal (em decimal)
- `P` é o valor do pagamento mensal
- e `S(1 + r)` representa o saldo acrescido dos juros do mês.

Da definição acima, observe que quando `n = 0`, o saldo devedor é igual ao saldo inicial, ou seja, `F(S,0) = S`. Quando `S <= 0`, o saldo devedor é zero. Para `n > 0` e `S > 0`, o saldo devedor é calculado aplicando os juros sobre o saldo atual e subtraindo o pagamento mensal, ou seja, `F(S,n) = max(0, F(S(1 + r) - P, n - 1))`.

---

## Questões do Livro

Para complementar esta lista de exercícios, resolva as questões de `**1.1** a **3.5**`, nas `páginas 114 a 116` do livro de referência da disciplina: ***Introdução à Estrutura de Dados. 1 ed. (Celes, Cerqueira e Rangel)***.

O livro acima possui um exemplar físico disponível na biblioteca do campus. Uma versão digital está acessível no link disponível na descrição do grupo da disciplina no WhatsApp.

O conteúdo teórico de referência para esta prática se encontra no Capítulo 4 do livro.

---

*Pratiquem bastante e não esqueçam de beber água!*   
**🚀 Bons estudos!**