#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef struct
{
    char codigo[15];
    char nome[MAX];
    int idade;
    char sexo;
}TPaciente;

typedef struct
{
    int pacientes[100];
    int quantidade;
}TPacientes;

int menu()
{
    int resposta;
    do
    {
        printf("Escolha sua opção:\n");
        printf(" 1 - Inserir pacientes;\n");
        printf(" 2 - Listar pacientes;\n");
        printf(" 3 - Contabilizar pacientes;\n");
        printf(" 4 - Remover paciente;\n");
        printf(" 5 - Sair.\n");
        printf("Digite sua escola:");
        scanf("%d", &resposta);
    } while ((resposta < 1) || (resposta > 5));

    return resposta;
}

void Inserir_Paciente(TPaciente *x)
{
    printf("CPF do paciente (somente numeros e sem espaços):")
    scanf(" %")
    printf("Nome do paciente:")
    scanf(" %[^\n]", (*x).TPacientes.nome);


}

int main()
{
    TPacientes paciente;
    int escolha;
    
    do
    {
        escolha = menu();

        switch(escolha)
        {
            case 1:
                break;
            case 2:
                break;            
            case 3:
                break;            
            case 4:
                break;
            case 5:
                break;
        }

    } while (escolha != 5);
    
    return 0;
}