<h1 align="center"> PROJETO DE ORDENAÇÃO</h1>


## Entrada A (RGM): 

 - O usuário informa seu RGM (8 dígitos).  
 - Cada dígito é convertido para inteiro.  
 - O vetor é ordenado com Bubble Sort.  
 - São registrados tempo e número de passos (operações-chave).
A saída final é exibida em formato **CSV**, permitindo importar em Excel, Python, R, etc.

**Entrada B (Benchmark):**
   - Geração de vetores aleatórios nos tamanhos N = 100, 1.000, 10.000.  
   - Cada vetor é ordenado com Bubble Sort.  
   - São registradas métricas de desempenho.  
   - Cada caso é executado 5 vezes, calculando a média.

**Bubble Sort foi escolhido porque:**
1. É extremamente simples de implementar.
2. Sua lógica facilita a contagem de passos.
3. É útil para fins didáticos na comparação entre custos teóricos e experimentais.
4. Mostra claramente problemas de escalabilidade em entradas grandes.
Como este trabalho solicita somente Bubble Sort, a escolha foi intencional para demonstrar limites computacionais.


**Estruturas de controle:**
- `do-while` — loop principal da calculadora
- `switch-case` — seleção de operações (36 cases)
- `if-else` — validação de entrada e tratamento de erros

**Tratamento de erros:**
- Divisão por zero
- Raiz quadrada de número negativo<br>
- Logaritmo de número não positivo
- Validação de entradas inválidas

**Compilador:** GCC

## Como usar este projeto?

### 1. Download
Baixe o arquivo `calculadoraVersao2.0` deste repositório.

### 2. Abrir na IDE ou ONLINE (GDB)
- Abra o arquivo no Dev-C++, Code::Blocks, Visual Studio ou sua IDE de preferência
- Certifique-se de que a IDE está configurada para usar um compilador C

### 3. Compilar e Executar
- Compile o projeto
- Execute o programa

## Exemplos de Uso:

### Exemplo 1: SENO
- Escolha a opção 7  
- Digite o ângulo em graus: 30  
- o seno é: 0.50

### Exemplo 2: Celsius para Fahrenheit
- Escolha a opção 21  
- Digite o número em celsius 100  
- 100 celsius sao 212 fahrenheit

### Informações adicionais:

O programa utiliza um loop do-while, permitindo que o usuário realize várias operações sem reiniciar.
Para sair da calculadora, basta escolher a opção 0 (sair) ou responder "n" quando perguntado ao final de uma operação se deseja continuar.

O código possui tratamento para erros.  
***Exemplos:***  
1-Divisão por zero  
2-Raiz de número negativo  
3-Logaritmo de número não positivo

