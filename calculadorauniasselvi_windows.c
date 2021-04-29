/*
    VERSÃO DO PROGRAMA: 23/04/2021
    VERSÃO PARA WINDOWS

    Autor: Tiago Gadotti

    Objetivo: O programa é destinado aos alunos EaD da Uniasselvi, que avalia cada disciplina mediante 4 notas:
        3 notas objetivas e 1 dissertativa.
    - Caso o aluno já tenha 1 ou 2 notas objetivas (peso 1.5), poderá saber a somatória dessas notas.
    - Caso tenha a nota da terceira prova objetiva (peso 3.0), poderá saber a somatória das notas, quanto falta
        para atingir a média, e quanto precisa tirar na prova dissertativa (peso 4.0).
    - Além disso o programa considera o bônus obtido na atividade complementar, podendo chegar a 0.5.

*/

#include <stdio.h>
#include <locale.h>


int main (void)
{
    setlocale(LC_ALL, "portuguese");

    int quantidade_notas, i, escolha;

    float nota, soma_das_notas, bonus, j;

    char a_agudo_minusculo = '\xe1';
    char a_agudo_maiusculo = '\xc1';
    char a_til_minusculo = '\xe3';
    char a_til_maiusculo = '\xc3';
    char e_circunflexo_minusculo = '\xea';
    char e_circunflexo_maiusculo = '\xca';
    char e_agudo_minusculo = '\xe9';
    char e_agudo_maiusculo = '\xc9';
    char i_agudo_minusculo = '\xed';
    char o_til_maiusculo = '\xd5';
    char o_circunflexo_minusculo = '\xf4';
    char c_cedilha_maiusculo = '\xC7';
    char c_cedilha_minusculo = '\xe7';




    // i = índice para controlar o loop;
    // escolha = variável que indica se o usuário quer continuar ou sair;
    // quantidade_notas = quantidade de notas a seres calculadas;
    // nota = valor da nota naquela avaliação;
    // soma_das_notas = soma final das notas, ou "média";
    // bonus = pontos bônus obtivos em atividade complementar;



    for ( ; ; )
    {
        printf("\n****************************  INSTRU%c%cES ****************************\n\n", c_cedilha_maiusculo, o_til_maiusculo);
        printf("Para avaliar a primeira nota objetiva, digite 1\n");
        printf("Para avaliar a primeira e a segunda notas objetiva, digite 2\n");
        printf("Para avaliar as tr%cs notas objetivas, digite 3\n", e_circunflexo_minusculo);
        printf("Para avaliar todas as notas, incluindo a dissertativa, digite 4\n");
        printf("Para sair do programa, digite 0.\n\n");

        printf("Quantas notas avaliar: ");
        scanf("%d", &quantidade_notas);

        //if (quantidade_notas != 0)
        //    printf("\nATEN%c%cO: separe a casa decimal por ponto e n%co por v%crgula\n\n",
        //            c_cedilha_maiusculo, a_til_maiusculo, a_til_minusculo, i_agudo_minusculo);


        switch (quantidade_notas)
        {
        case 0:
            return 0;

        case 1: case 2: case 3: case 4:
            for (i = 1, soma_das_notas = 0; i <= quantidade_notas; i++)
            {
                printf("Digite nota %d: ", i);
                scanf("%f", &nota);

                if (i == 1 || i == 2)
                    soma_das_notas = soma_das_notas + (1.5 * (nota / 10));
                else if (i == 3)
                    soma_das_notas = soma_das_notas + (3 * (nota / 10));
                else if (i == 4)
                    soma_das_notas = soma_das_notas + (4 * (nota / 10));
            }

            printf("Pontos b%cnus: ", o_circunflexo_minusculo);
            scanf("%f", &bonus);
            soma_das_notas += bonus;

            printf("\n\nA soma das notas %c: %.2f\n\n", e_agudo_minusculo, soma_das_notas);

            if (soma_das_notas >= 7)
                printf("PARAB%eNS, VOC%e J%c PASSOU NA DISCIPLINA\n\n", e_agudo_maiusculo, e_circunflexo_maiusculo, a_agudo_maiusculo);

            else if ((soma_das_notas < 7 && quantidade_notas == 4) || (quantidade_notas == 3 && soma_das_notas < 3))
                printf("VOC%c FOI REPROVADO NA DISCIPLINA\n\n", e_circunflexo_maiusculo);

            else if (quantidade_notas == 3)
            {
                printf("Faltam ainda %.2f pontos para passar na disciplina\n\n", 7.00f - soma_das_notas);
                printf("Voc%c precisa tirar pelo menos %.2f na quest%co dissertativa\n\n", e_circunflexo_minusculo, ((7.00f - soma_das_notas) * 10) / 4, a_til_minusculo);
            }
            else if (quantidade_notas == 2)
            {
                printf("\n\nFaltam ainda %.2f pontos para passar na disciplina\n\n", 7.00f - soma_das_notas);
                printf("         **********TABELA DE PROJE%c%cO**********\n\n", c_cedilha_maiusculo, a_til_maiusculo);
                printf("NOTA HIPOT%cTICA NA FINAL OBJETIVA        NOTA NECESS%cRIA NA DISCURSIVA            STATUS\n\n",
                       e_agudo_maiusculo,a_agudo_maiusculo);

                for (float j = 0; j < 11.0; j++)
                {
                    soma_das_notas += (j * 3 / 10) ;
                    printf("%20.2f%40.2f", j, ((7.00 -  soma_das_notas) * 10 / 4) );
                    if (((7.00 - soma_das_notas) * 10 / 4) < 10.00)
                        printf("                     APROVADO\n\n");
                    else
                        printf("                     REPROVADO\n\n");
                    soma_das_notas -= (j * 3 / 10);
                }
            }
            else
                printf("\n\nFaltam ainda %.2f pontos para passar na disciplina\n\n", 7.00f - soma_das_notas);

                printf("\n\nPara continuar: digite 1\nPara encerrar: digite 0\nContinuar (1) ou Encerrar (0): ");
                scanf("%d", &escolha);

                if (escolha == 0)
                    goto exit;
                else
                    break;

        default:
            printf("\n\n\n !!! ERRO: DIGITE UM VALOR ENTRE 0 E 4 !!!\n\n\n");
            break;
        }
    }


exit: return 0;
}
