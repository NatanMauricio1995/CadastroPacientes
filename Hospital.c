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
    TPaciente pacientes[100];
    int quantidade;
}TPacientes;

int menu()
{
    int resposta;
    do
    {
        printf("Escolha sua opcao:\n");
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

void Inserir_Paciente(TPacientes *x)
{
    printf("CPF do paciente (somente numeros e sem espacos):\n");
    scanf(" %[^\n]", (*x).pacientes[(*x).quantidade].codigo);
    
    printf("Nome do paciente:\n");
    scanf(" %[^\n]", (*x).pacientes[(*x).quantidade].nome);
    
    printf("Idade do pacinete:\n");
    scanf("%d", &(*x).pacientes[(*x).quantidade].idade);
    
    do 
    {
        printf("Genero biologico (Digite 'M' para Masculino e 'F' para Feminino):\n");
        scanf(" %c", &(*x).pacientes[(*x).quantidade].sexo);
        (*x).pacientes[(*x).quantidade].sexo = toupper((*x).pacientes[(*x).quantidade].sexo);
    } while (((*x).pacientes[(*x).quantidade].sexo != 'M') && ((*x).pacientes[(*x).quantidade].sexo) != 'F');
    
    (*x).quantidade++;
}

int Refazer_Opcao()
{
    int n;
    do 
    {
        printf("Escolha uma opcao:\n");
        printf(" 1 - Refazer a ultima opcao;\n");
        printf(" 2 - Voltar ao menu principal;\n");
        printf("Digite sua escolha: ");
        scanf("%d", &n);
    } while ((n != 1) && (n != 2));

    return n;
}


int main()
{
    TPacientes paciente;
    int escolha, opcao;
    do
    {
        escolha = menu();

        switch(escolha)
        {
            case 1: //Inserir pacientes
                do 
                {
                    Inserir_Paciente(&paciente);
                    printf("Paciente cadastrado com sucesso!\n");
                    opcao = Refazer_Opcao();
                } while (opcao =! 2);
               
                break;
            case 2: //Listar pacientes
                break;            
            case 3: //Contabilizar pacientes
                break;            
            case 4: //Remover paciente
                break;
            case 5: //Sair
                break;
        }

    } while (escolha != 5);
    
    return 0;
}