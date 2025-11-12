Cadastro de Territórios

Projeto em linguagem C que permite cadastrar e exibir informações de até 5 territórios, armazenando nome, cor do exército e número de tropas de cada um.
 Descrição

O programa utiliza uma estrutura de dados (struct) para representar os territórios.
Cada território contém:

nome — nome do território

cor — cor do exército

tropas — quantidade de tropas


Após o preenchimento de 5 territórios, o sistema exibe os dados organizados na tela.


Funcionalidades

Cadastro de 5 territórios.

Exibição formatada de todas as informações após o cadastro.

Tratamento de limpeza de buffer (fflush(stdin) ou getchar()).

Utilização de fgets() para leitura segura de strings.


Tecnologias utilizadas

Linguagem C

Compilador GCC (MinGW, Code::Blocks ou VS Code com extensões C/C++)

Terminal de execução padrão

Como compilar e executar no Windows

gcc territorios.c -o territorios
.\territorios.exe

Exemplo de uso

Entrada:

Digite o nome do território 1: Brasil
Digite a cor do exército: Verde
Digite o número de tropas: 10

Saída esperada:

===== DADOS DOS TERRITÓRIOS =====
Território: Brasil
Cor do exército: Verde
Tropas: 10
=================================

Estrutura do projeto

/cadastro_territorios
├── territorios.c     # Código principal
├── README.md         # Documentação do projeto
└── .gitignore        # Arquivo para ignorar executáveis e temporários


Autor

Cesar Ramos
Projeto desenvolvido como parte de atividade prática de Análise e Desenvolvimento de Sistemas.
