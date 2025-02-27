#include<stdio.h>

main()
{
    char r;
    int cont = 1;

    while (cont == 1)
    {
        printf ("O animal e da America do Norte? ");
        scanf ("%c",&r);
        fflush(stdin);
        if (r == 's' || r == 'S')
        {
            printf("O animal e do Canada? ");
            scanf("%c", &r);
            fflush(stdin);
            if (r == 's' || r == 'S')
                printf("O animal escolhido e o CASTOR.");
            else
            {
                printf("O animal e dos Estados Unidos? ");
                scanf("%c", &r);
                fflush(stdin);
                if (r == 's' || r == 'S')
                    printf("O animal escolhido e a AGUIA. ");
                else
                {
                    printf("Animal Inexistente.");
                }
            }
        }
        else
        {
            printf("O animal e da America do Sul? ");
            scanf("%c", &r);
            fflush(stdin);
            if (r == 's' || r == 'S')
            {
                printf("O animal e do Brasil? ");
                scanf("%c", &r);
                fflush(stdin);
                if (r == 's' || r == 'S')
                {
                    printf("O animal escolhido e uma Ave?");
                    scanf("%c", &r);
                    fflush(stdin);
                    if (r == 's' || r == 'S')
                    {
                        printf("O animal escolhido e o PAPAGAIO.");
                    }
                    else
                    {
                        printf("O animal escolhido e um Mamifero? ");
                        scanf("%c", &r);
                        fflush(stdin);
                        if (r == 's' || r == 'S')
                        {
                            printf("O animal escolhido e mamifero Terrestre? ");
                            scanf("%c", &r);
                            fflush(stdin);
                            if (r == 's' || r == 'S')
                                printf("O animal escolhido e a ONCA.");
                            else
                            {
                                printf("O animal escolhido e mamifero Aquatico? ");
                                scanf("%c", &r);
                                fflush(stdin);
                                if (r == 's' || r == 'S')
                                {
                                    printf("O animal escolhido e o PEIXE-BOI. ");
                                }
                            }
                        }
                        else
                        {
                            printf("O animal escolhido e um Herbivoro? ");
                            scanf("%c", &r);
                            fflush(stdin);
                            if (r == 's' || r == 'S'){
                                printf("O animal escolhido e o CAVALO.");
                            }
                            else
                            {
                                printf("Animal Inexistente.");
                            }
                        }
                    }
                }
                else
                {
                    printf("O animal e da Argentina? ");
                    scanf("%c", &r);
                    fflush(stdin);
                    if (r == 's' || r == 'S'){
                        printf("O animal escolhido e um Mamifero? ");
                        scanf("%c", &r);
                        fflush(stdin);
                        if (r == 's' || r == 'S')
                            printf("O animal escolhido e a PUMA. "); 
                        else
                        {
                            printf("O animal escolhido e uma Ave? ");
                            scanf("%c", &r);
                            fflush(stdin);
                            if (r == 's' || r == 'S'){
                                printf("O animal escolhido e uma Ave Nao-voadora? ");
                                scanf("%c", &r);
                                fflush(stdin);
                                if (r == 's' || r == 'S')
                                    printf("O animal escolhido e a EMA. ");
                                else
                                {
                                    printf("O animal escolhido e uma Ave Voadora? ");
                                    scanf("%c", &r);
                                    fflush(stdin);
                                    if (r == 's' || r == 'S'){
                                        printf("O animal escolhido e o CONDOR. ");        
                                    }
                                    else
                                    {
                                        printf("Animal Inexistente.");
                                    }
                                }
                            }
                            else
                            {
                                printf("Animal Inexistente.");
                            }
                        }
                    }
                    else
                    {
                        printf("Animal Inexistente.");
                    }
                }
            }
            else
            {
                printf("Animal Inexistente.");
            }
        }
        printf("\n\nDeseja continuar: [1 - SIM] [2 - NAO] ");
        scanf("%i", &cont);
        fflush(stdin);
    }
}
