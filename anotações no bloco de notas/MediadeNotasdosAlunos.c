#include <stdio.h>
#include <string.h>

struct Estudante {
    char nome[50];
    int rgm;      
    float nota1;
    float nota2;
    float media;
};

int main() {

    struct Estudante estudante;
    char continuar;

    
    FILE *arquivo;
    arquivo = fopen("notas.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    do {
        printf("\n\n-----Bem-vindo ao Sistema de Gerenciamento de Alunos-----\n\n");

        printf("Digite o nome do estudante: ");
        scanf(" %49[^\n]", estudante.nome);

        printf("Digite o RGM do aluno: ");
        scanf("%d", &estudante.rgm);

        printf("Digite a primeira nota: ");
        scanf("%f", &estudante.nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &estudante.nota2);

        estudante.media = (estudante.nota1 + estudante.nota2) / 2.0;

        printf("\n\nDados do Estudante:\n");
        printf("Nome: %s\n", estudante.nome);
        printf("RGM: %d\n", estudante.rgm);
        printf("Nota 1: %.2f\n", estudante.nota1);
        printf("Nota 2: %.2f\n", estudante.nota2);
        printf("Média: %.2f\n", estudante.media);

        if (estudante.media >= 6) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }

        
        fprintf(arquivo, "Nome: %s | RGM: %d | Nota1: %.2f | Nota2: %.2f | Média: %.2f | Status: %s\n",
                estudante.nome,
                estudante.rgm,
                estudante.nota1,
                estudante.nota2,
                estudante.media,
                (estudante.media >= 6 ? "Aprovado" : "Reprovado"));
        fprintf(arquivo, "-------------------------------------------------------------\n");

        printf("\nDeseja continuar? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    fclose(arquivo); 

    printf("\nSistema de Gerenciamento de Alunos Encerrado.\nObrigado por usar!\n");

    return 0;
}
