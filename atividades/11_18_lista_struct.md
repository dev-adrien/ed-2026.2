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
        <td colspan="3" align="center"><strong>Lista de Exercícios (Aula de 18/11/2026): Tipos Estruturados (Structs)</strong></td>
    </tr>
</thead>
</table>

**Questão 1.**

Considere uma estrutura para representar um ponto no espaço 2D e implemente uma função que indique se um dado ponto está localizado dentro ou fora de um retângulo. O retângulo é definido por seus vértices inferior esquerdo `v1` e superior direito `v2`. A função deve retornar 1 caso o ponto esteja localizado dentro do retângulo, e 0 caso contrário.

A função deve obedecer ao protótipo:

```c
int dentroRet (Ponto* v1, Ponto* v2, Ponto* p);
```

---

**Questão 2.**

Considere uma estrutura para representar um vetor no espaço 3D e implemente uma função que calcule o produto escalar de dois vetores.

Essa função deve obedecer ao protótipo:

```c
float dot (Vetor* v1, Vetor* v2);
```

---

**Questão 3.**

Considere as declarações a seguir para representar o cadastro de alunos de uma disciplina e implemente uma função que imprima o número de matrícula, o nome, a turma e a média de todos os alunos aprovados na disciplina.

```c
struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};

typedef struct aluno Aluno;
```

Assuma que o critério para aprovação é dado pela média das três provas (`p1`, `p2` e `p3`). A função recebe como parâmetros o número de alunos e um vetor de ponteiros para os dados dos alunos.

Essa função deve obedecer ao protótipo:

```c
void imprime_aprovados (int n, Aluno** turmas);
```

---

**Questão 4.**

Considere as declarações do tipo `Aluno` do exercício anterior e implemente uma função que tenha como valor de retorno a média final obtida pelos alunos de uma determinada turma. A nota final de cada aluno é dada pela média das três provas.

```c
float media_turma (int n, Aluno** turmas, char turma);
```