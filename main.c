#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define pedra 1
#define papel 2
#define tesoura 3
#define lagarto 4
#define spock 5
int main () {
  int jogada=0;
  int Mjogada=0;
  int continuar=1;

  srand(time(NULL));
  while(continuar==1){
    system("cls");
    printf("Escolha sua jogada\n");
    printf("1= Pedra\n");
    printf("2= Papel\n");
    printf("3= Tesoura\n");
    printf("4= Lagarto\n");
    printf("5= Spock\n\n");
    printf("Escolha = ");
    scanf("%d", &jogada);
    Mjogada = (rand() % 5)+1;


    switch(Mjogada){  //switch Mjogada, jogada do computador
      case pedra:   //caso o computador tenha jogado pedra...
      printf("\nO computador jogou pedra");
        switch(jogada){  //switch da sua jogada, dentro do case pedra do computador.
          case 1:  //A jogada do computador é pedra. caso sua jogada seja 1(Pedra)...
          printf("\nEmpate.");
          break;

          case 2: //A jogada do computador é pedra. caso sua jogada seja 2(Papel)...
          printf("\nPapel ganha de pedra.VITORIA");
          break;

          case 3: //A jogada do computador é pedra. caso sua jogada seja 3(Tesoura)...
          printf("\nPedra ganha de tesoura.DERROTA");
          break;
          case 4: //A jogada do computador é pedra. caso sua jogada seja 4(Lagarto)...
           printf("\nPedra ganha de lagarto.DERROTA");
           break;
           case 5: //A jogada do computador é pedra. caso sua jogada seja 5(Spock)...
            printf("\nSpock ganha de pedra.VITORIA");
            break;
      } //fim do switch da sua jogada, dentro do switch da jogada do case pedra do computador.
      break;

      case papel: //caso o computador tenha jogado papel...
      printf("\nO computador jogou papel");
            switch(jogada){ //switch da sua jogada, dentro do case papel do computador.
              case 1: //A jogada do computador é papel. caso sua jogada seja 1(Pedra)...
              printf("\nPapel ganha de pedra.DERROTA");
              break;

              case 2:  //A jogada do computador é papel. caso sua jogada seja 2(Papel)...
              printf("\nEmpate.");
              break;

              case 3:  //A jogada do computador é papel. caso sua jogada seja 3(Tesoura)...
              printf("\nTesoura ganha de papel.VITORIA");
              break;
              case 4: //A jogada do computador é papel. caso sua jogada seja 4(Lagarto)...
              printf("\nLagarto ganha de papel.VITORIA");
              break;
              case 5: //A jogada do computador é papel. caso sua jogada seja 5(Spock)...
              printf("\nPapel ganha de Spock.DERROTA");
              break;
              
          } //fim do switch da sua jogada, dentro do switch da jogada do case papel do computador.
      break;

      case tesoura: //caso o computador tenha jogado tesoura...
      printf("\nO computador jogou tesoura");
        switch(jogada){  //switch da sua jogada, dentro do case tesoura do computador.
          case 1:  //A jogada do computador é tesoura. caso sua jogada seja 1(Pedra)...
          printf("\nPedra ganha de tesoura.VITORIA");
          break;

          case 2:  //A jogada do computador é tesoura. caso sua jogada seja 2(Papel)...
          printf("\nTesoura ganha de papel.DERROTA");
          break;

          case 3:  //A jogada do computador é tesoura. caso sua jogada seja 3(Tesoura)...
          printf("\nEmpate.");
          break;
          case 4: //A jogada do computador é tesoura. caso sua jogada seja 4(Lagarto)...
          printf("\nTesoura ganha de lagarto.DERROTA");
           break;
           case 5: //A jogada do computador é tesoura. caso sua jogada seja 5(Spock)...
          printf("\nSpock ganha de tesoura.VITORIA");

    } //fim do switch da sua jogada, dentro do switch da jogada do case tesoura do computador.
      break;
            case lagarto: //caso o computador tenha jogado lagarto...
            printf("\nO computador jogou lagarto");
            switch(jogada){   //switch da sua jogada, dentro do case lagarto do computador.
            case 1:   //A jogada do computador é lagarto. caso sua jogada seja 1(Pedra)...
            printf("\nPedra ganha de lagarto.VITORIA");
             break; 
             case 2:  //A jogada do computador é lagarto. caso sua jogada seja 2(Papel)...
            printf("\nLagarto ganha de papel.DERROTA");
             break;
             case 3:  //A jogada do computador é lagarto. caso sua jogada seja 3(Tesoura)...
            printf("\nPedra ganha de lagarto.VITORIA");
            break;
            case 4:  //A jogada do computador é lagarto. caso sua jogada seja 4(Lagarto)...
            printf("\nEmpate.");
            break;
            case 5:  //A jogada do computador é lagarto. caso sua jogada seja 5(Spock)...
            printf("\nLagarto ganha de spock.DERROTA");
            break;

   } //fim do switch da sua jogada, dentro do switch da jogada do case lagarto do computador.
       break;
            case spock: //caso o computador tenha jogado spock...
            printf("\nO computador jogou spock");
            switch(jogada){   //switch da sua jogada, dentro do case spock do computador.
            case 1:   //A jogada do computador é spock. caso sua jogada seja 1(Pedra)...
            printf("\nSpock ganha de pedra.DERROTA");
            break;
            case 2:   //A jogada do computador é spock. caso sua jogada seja 2(Papel)...
            printf("\nPapel ganha de spock.VITORIA");
            break;
            case 3:  //A jogada do computador é spock. caso sua jogada seja 3(Tesoura)...
            printf("\nSpock ganha de Tesoura.DERROTA");
            break;
            case 4:  //A jogada do computador é spock. caso sua jogada seja 4(Lagarto)...
            printf("\nLagarto ganha de spock.VITORIA");
            break;
            case 5:  //A jogada do computador é spock. caso sua jogada seja 4(Lagarto)...
            printf("\nEmpate.");
            break;

    } //fim do switch da sua jogada, dentro do switch da jogada do case lagarto do computador.
   
    } //fim do switch switch Mjogada, jogada do computador

    printf("\n\nVoce deseja continuar jogando?\n");
    printf("1- Sim, desejo continuar jogando\n");
    printf("2- Nao, fechar o programa\n");
    printf("\nSua resposta: ");
    scanf("%d",&continuar);
  }


  return 0;
}