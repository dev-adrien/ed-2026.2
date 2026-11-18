# Layout padrão de um projeto C

```
meu_projeto/
├── include/            # Interfaces e contratos (.h) (Headers)
│   └── aluno.h
├── src/                # Código-fonte das implementações (.c) (Sources)
│   ├── aluno.c
│   └── main.c
├── assets/             # Imagens, áudios, texturas ou binários estáticos
│   └── logo.png
├── data/               # O EQUIVALENTE AO RESOURCES: arquivos lidos pelo programa
│   ├── alunos.csv      # Arquivos de dados (.txt, .csv, .dat)
│   └── banco.db
├── config/             # Configurações do sistema (opcional)
│   └── app.conf
├── docs/               # Documentação complementar do projeto
├── build/              # Binários compilados e objetos (.o) [ignorado no git]
├── .gitignore          # Regras de ignorar arquivos do Git
├── Makefile            # Script de compilação do GCC
├── LICENSE             # Licença do repositório (ex: MIT, GPL)
└── README.md           # Apresentação do projeto no GitHub
```
