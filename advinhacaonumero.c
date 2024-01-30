// Marcação de pontos
//ha 1000 pontos se numero for 50, o jogador chutou 70
// 70-50 =20, media (20/2), valor sera 10, 
// logo 1000-10
//pontos do jogador 900
// esse codigo caso o numero chutado for maior ele inverte o numero 
//cria um numero randomico
//utilizando switch
#include <stdio.h>
#include<stdlib.h>//abs
#include<time.h>//para pegar os segundos como aleatorio 
#include <windows.h>
int main(void)
{
    ///comentário
    system("cls");
printf("                Bem vindo ao nosso jogo de adivinhacao\n");
printf("\n");
printf("                                   |@>>\n");//colocar \\ ou // permite a imagem
printf("                                   |\n");
printf("                    |>>>       _  _|_  _          |>>> \n");
printf("                    |         |;| |;| |;|         | \n");
printf("                _  _|_  _     \\.    .  /     _  _|_  _ \n");
printf("               |;|_|;|_|;|     \\:. ,  /     |;|_|;|_|;|\n");
printf("               \\..      /      |;   . |     \\.    .  /\n");
printf("                \\.  ,  /       |:  .  |      \\:  .  /\n");
printf("                 ||:   |_   _  ||_ . _ | _  _||:   |\n");
printf("                 ||:  .|||_|;|_|;|_|;|_|;|_|;||:.  |\n");
printf("                 ||:   ||.    .     .      . ||:  .|\n");
printf("                 ||: . || .     . .   .  ,   ||:   |       \\,/  .\n");
printf("                 ||:   ||:  ,  _______   .   ||: , |            /`\\  .\n");
printf("                 ||:   || .   /+++++++\\    . ||:   |\n");
printf("       _         ||:   ||.    |+++++++| .    ||: . |     _\n");
printf("      (^)     __ ||: . ||: ,  |+++++++|.  . _||_   |    (^)\n");
printf("     __Y_--`~    '--~~__|.    |+++++++|----~    ~`---,   Y        ___\n");
printf("-~--~                   ~---__|,--~'                  ~~----___-~'   `~----~~\n\n");

    int segundos = time(0);//usa os segundos atuais
    srand(segundos);

    int numerogrande= rand();//joga um valor aleatorio em uma variavel
    

    int numerosecreto =numerogrande %100;//numero abaixo de 100
    //printf("O numero %d e o secreto. Nao conta pra ninguém! \n", numerosecreto );
    int chute;
    //int ganhou=0;
    int tentativas=1;
    double pontos=1000;//deve ser double para numeros quebrados
    //double numero decimal

    int acertou=0;
    int nivel;
    printf("Qual seu nivel de dificuldade? \n");
    printf("(1) Facil (2) Medio (3) Dificil \n \n");
    printf("Escolha:");
    scanf("%d",  &nivel);
    int numerodetentativas;
    switch (nivel)
    {//nivel é o valor de comparaçao
    case 1:
        numerodetentativas= 20;
        break;//ele tem a função de quebra o processo para não rodar o case 2 e 3
    case 2:    
        numerodetentativas= 15;
        break;
    default:
        numerodetentativas= 6;
        break;
    }


    for(int i = 1; i <= numerodetentativas; i++) {
    
    printf("Tentativa %d  \n", tentativas);
    printf("Qual e o seu chute? \n");
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);
    
    if(chute<0){
        printf("Voce nao pode chutar numeros negativos");
        continue;//diferente do break ele para a execução desse bloco de codigo, mas retorna para o for no "i++"
    }

    int acertou = (chute == numerosecreto);
    int maior = (chute>numerosecreto);

    if(acertou){

        break;

    }
        else if(maior){ //senao ele vai pular o proximo como sendo Case
             printf("Seu chute foi maior que o numero secreto\n");
        }
        else{
             printf("Seu chute foi menor que o numero secreto\n");
        }
        //printf("Parabéns! Você errou!\n");
        //printf("Mas não desanime, tente de novo!\n");

    tentativas++;
      double pontosperdidos = abs(chute - numerosecreto)/(double)2;

      pontos = pontos - pontosperdidos;
      //faço a operação com 2.0, logo int - int ao dividir por 2.0 entendera como uma variavel double
    }

    printf("Fim de jogo! \n");

    if(acertou){
printf("\n");
printf("|￣￣￣￣￣￣￣￣￣￣￣￣|\n");
printf("|     Voce ganhou!!   |\n");
printf("|＿＿＿＿＿＿＿＿＿＿＿＿|\n");
printf("    \\ (•◡•)  //\n");
printf("     \\      // \n");
printf("        ———\n");
printf("       |    |\n");
printf("       |_   |_\n");




        printf("Você acertou em %d tentativas!", tentativas);
        printf("Total de pontos: %.1f \n", pontos);//%1.f indica quantas casas apos a virgula sera utilizada
        //se fosse %.2f seria duas casas decimais apos a virgula        
    }   
    else{
printf("\n");
printf("|￣￣￣￣￣￣￣￣￣￣￣￣￣|\n");
printf("|      Voce perdeu      |\n");
printf("|      Tente de novo!   |\n");
printf("|＿＿＿＿＿＿＿＿＿＿＿＿＿|\n");
printf("   (\\__/) ||\n");
printf("    (•ㅅ•) ||\n");
printf("    / づ\n");

        } 
    system("pause"); 
}
