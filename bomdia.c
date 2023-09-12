#include <stdio.h>
#include <string.h>

void help(void);
void version(void);
void erro_opcao_errada(void);
void excesso_opcao(void);
void nenhuma_opcao(void);
void menu(void);

int main(int argc, char const *argv[])
{

    if (argc == 2)
    {
        if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0)
        {
            help();
        }
        else if (strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0)
        {
            version();
        }
        else if (strcmp(argv[1], "--pt") == 0 || strcmp(argv[1], "-1") == 0)
        {
            printf("Bom dia");
        }
        else if (strcmp(argv[1], "--en") == 0 || strcmp(argv[1], "-2") == 0)
        {
            printf("Good Morning");
        }
        else if (strcmp(argv[1], "--es") == 0 || strcmp(argv[1], "-3") == 0)
        {
            printf("Buenos Días");
        }
        else if (strcmp(argv[1], "--fr") == 0 || strcmp(argv[1], "-4") == 0)
        {
            printf("Bonjour");
        }
        else if (strcmp(argv[1], "--it") == 0 || strcmp(argv[1], "-5") == 0)
        {
            printf("Buongiorno");
        }
        else if (strcmp(argv[1], "--co") == 0 || strcmp(argv[1], "-6") == 0)
        {
            printf("안녕하세요");
        }
        else if (strcmp(argv[1], "--jp") == 0 || strcmp(argv[1], "-7") == 0)
        {
            printf("おはようございます");
        }
        else if (strcmp(argv[1], "--ru") == 0 || strcmp(argv[1], "-8") == 0)
        {
            printf("Доброе утро");
        }
        else
        {
            erro_opcao_errada();
        }
    }
    else if (argc > 2)
    {
        excesso_opcao();
    }
    else
    {
        nenhuma_opcao();
        menu();
    }

    return 0;
}

void help(void)
{
    printf(" O projeto Bom Dia trata-se da criação de um software de linha de comando que ao ser chamado mostrará a frase 'Bom dia!' em vários idiomas diferentes\nO programa será executado no console.\n Modo de usar: arquivo gcc [opções]\n O nome do executável será 'bomdia', sem aspas.\n O executável deverá ser invocado exatamente com uma opção de controle, assim: 'bomdia <opção>', sem aspas.\n A <opção> será uma das alternativas abaixo:\n --help ou -h (documentação do software)\n--version ou -v (versão do software)\n--pt ou -1 (idioma português)\n--en ou -2 (idioma inglês)\n--es ou -3 (idioma espanhol)\n--fr ou -4 (idioma francês)\n--it ou -5 (idioma italiano)\n--co ou -6 (idioma coreano)\n--jp ou -7 (idioma japonês)\n--ru ou -8 (idioma russo)\n");
    return;
}

void version(void)
{
    printf("bom dia 1.0.0 \nSoftware livre, criado para projeto de classe, por RAICX INNOVATE.");
    return;
}

void erro_opcao_errada(void)
{
    printf("erro: linha de comando não reconhecida. \n Consulte os comandos digitando 'bomdia --help'");
    return;
}

void excesso_opcao(void)
{
    printf("erro: você digitou mais de um comando. \n Consulte os comandos digitando 'bomdia --help' ou 'bomdia -h");
    return;
}

void nenhuma_opcao(void)
{
    printf("erro: nenhuma opcao foi digitada.\n");
    return;
}

void menu(void)
{
    printf("Menu de opções: \n --help ou -h (documentação do software)\n--version ou -v (versão do software)\n--pt ou -1 (idioma português)\n--en ou -2 (idioma inglês)\n--es ou -3 (idioma espanhol)\n--fr ou -4 (idioma francês)\n--it ou -5 (idioma italiano)\n--co ou -6 (idioma coreano)\n--jp ou -7 (idioma japonês)\n--ru ou -8 (idioma russo)\n");
}
