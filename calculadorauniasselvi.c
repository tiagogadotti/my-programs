/*
    VERSÃO DO PROGRAMA: 23/04/2021

    Autor: Tiago Gadotti

    Objetivo: O programa é destinado aos alunos EaD da Uniasselvi, que avalia cada disciplina mediante 4 notas:
        3 notas objetivas e 1 dissertativa.
    - Caso o aluno já tenha 1 ou 2 notas objetivas (peso 1.5), poderá saber a somatória dessas notas.
    - Caso tenha a nota da terceira prova objetiva (peso 3.0), poderá saber a somatória das notas, quanto falta
        para atingir a média, e quanto precisa tirar na prova dissertativa (peso 4.0).
    - Além disso o programa considera o bônus obtido na atividade complementar, podendo chegar a 0.5.

*/

#include <stdio.h>

int main (void)
{

    int quantidade_notas, i;

    float nota, soma_das_notas, bonus;
    
    // i = índice para controlar o loop;
    // quantidade_notas = quantidade de notas a seres calculadas;
    // nota = valor da nota naquela avaliação;
    // soma_das_notas = soma final das notas, ou "média";
    // bonus = pontos bônus obtivos em atividade complementar;

        for ( ; ; )
        {

            printf("\n****************************  INSTRUÇÕES ****************************\n\n");
            printf("Para avaliar a primeira nota objetiva, digite 1\n");
            printf("Para avaliar a primeira e a segunda notas objetiva, digite 2\n");
            printf("Para avaliar as três notas objetivas, digite 3\n");
            printf("Para avaliar todas as notas, incluindo a dissertativa, digite 4\n");
            printf("Para sair do programa, digite 0.\n\n");

            
            printf("Quantas notas avaliar: ");
            scanf("%d", &quantidade_notas);

            switch (quantidade_notas)
            {
                case 0: return 0;

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

                    printf("Pontos bônus: ");
                    scanf("%f", &bonus);
                    soma_das_notas += bonus;

                    printf("\n\nA soma das notas é: %.2f\n\n", soma_das_notas);

                    if (soma_das_notas >= 7)
                        printf("PARABÉNS, VOCÊ JÁ PASSOU NA DISCIPLINA\n\n");

                    else if ( (soma_das_notas < 7 && quantidade_notas == 4) || (quantidade_notas == 3 && soma_das_notas < 3) )
                        printf("VOCÊ FOI REPROVADO NA DISCIPLINA\n\n");
                    
                    else if (quantidade_notas == 3)
                    {
                        printf("Faltam ainda %.2f pontos para passar na disciplina\n\n", 7.00f - soma_das_notas);
                        printf("Você precisa tirar pelo menos %.2f na questão dissertativa\n\n", ((7.00f - soma_das_notas) * 10) / 4);
                    }
                    else 
                        printf("\n\nFaltam ainda %.2f pontos para passar na disciplina\n\n", 7.00f - soma_das_notas);
                        break;
                
                default:
                    printf("\n\n\n !!! ERRO: DIGITE UM VALOR ENTRE 0 E 4 !!!\n\n\n");
                    /* printf("INSTRUÇÕES:\n");
                    printf("Para avaliar a primeira nota objetiva, digite 1\n");
                    printf("Para avaliar a primeira e a segunda notas objetiva, digite 2\n");
                    printf("Para avaliar as três notas objetivas, digite 3\n");
                    printf("Para avaliar todas as notas, incluindo a dissertativa, digite 4\n");
                    printf("Para sair do programa, digite 0.\n\n");
                    printf("Quantas notas avaliar: "); */
                    break;
            }
        }

return 0;
}
    
