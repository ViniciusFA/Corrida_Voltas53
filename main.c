#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    setlocale(LC_ALL,"");
    int tempo[MAX],somaTempo =0,nVoltas,mediaTempo;
    int melhorVolta,i,melhorTempo;




    printf("\nDigite o número de voltas: ");
    scanf("%d",&nVoltas);
    printf("-------------------------------\n");

    for(i=0;i<nVoltas;i++){
        printf("\nDigite o tempo da volta em segundos: ");
        scanf("%d",&tempo[i]);

        somaTempo += tempo[i];

        if(tempo[i]<melhorTempo || i ==0){

            melhorVolta = i+1;
            melhorTempo = tempo[i];
        }

}

     mediaTempo = somaTempo / nVoltas;


     printf("\nA %d volta foi a melhor /mais rápida\n",melhorVolta);
     printf("\nO melhor tempo foi : %d segundos\n",melhorTempo);
     printf("\nA média do tempo foi : %d segundos",mediaTempo);
      printf("\n-------------------------------\n");




    return 0;

}
