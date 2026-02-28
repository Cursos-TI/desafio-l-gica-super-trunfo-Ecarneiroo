#include <stdio.h>
//Nivel Novato
int main (){
//aqui começam as declarações de variaveis
char Estado1 [20] ;
char Codigo_da_carta1 [20] ;
char Nome_da_cidade1 [50] ;
int  Numero_de_pontos_turisticos1;
double area_em_km1 , PIB1 , Populacao1 ;
double densidadepop1;
double pibp1;
float superpoder1;

char Estado2 [20] ;
char Codigo_da_carta2 [20] ;
char Nome_da_cidade2 [50] ;
int  Numero_de_pontos_turisticos2;
double area_em_km2 , PIB2 , Populacao2;
double densidadepop2;
double pibp2;
float superpoder2;

//inseri uma mensagem inicial
printf("Bem vindo ao Super Trunfo!\n");
printf("Digite as informações da sua primeira carta\n");

//aqui começam as entradas de dados da 1ª carta
printf("Digite o Estado: \n");
scanf("%s" , &Estado1 );

printf("Insira um código para a sua carta: \n");
scanf("%s" , &Codigo_da_carta1 );

printf("Digite o nome da cidade: \n");
scanf("%s" , &Nome_da_cidade1 );

printf("Qual a população dessa cidade?: \n");
scanf("%lf" , &Populacao1 );

printf("Qual a área dessa cidade?: \n");
scanf("%lf" , &area_em_km1 );

printf("Qual o PIB dessa cidade?: \n");
scanf("%lf" , &PIB1 );

printf("Quantos pontos turísticos tem nessa cidade?: \n");
scanf("%d" , &Numero_de_pontos_turisticos1 );

printf(" \n");

//inseri uma pausa para solicitar novamente os mesmos dados da 2ª carta
printf("Muito bem!\n");
printf("Agora digite as informações da sua segunda carta\n");

//aqui começam as entradas de dados da 2ª carta
printf("Digite o Estado: \n");
scanf("%s" , &Estado2 );

printf("Insira um código para a sua carta: \n");
scanf("%s" , &Codigo_da_carta2 );

printf("Digite o nome da cidade: \n");
scanf("%s" , &Nome_da_cidade2 );

printf("Qual a população dessa cidade?: \n");
scanf("%lf" , &Populacao2 );

printf("Qual a área dessa cidade?: \n");
scanf("%lf" , &area_em_km2 );

printf("Qual o PIB dessa cidade?: \n");
scanf("%lf" , &PIB2 );

printf("Quantos pontos turísticos tem nessa cidade?: \n");
scanf("%d" , &Numero_de_pontos_turisticos2 );

printf(" \n");
//aqui temos os resumos das cartas
printf("Carta 1:\n");
printf("Estado: %s\n", Estado1);
printf("Código:%s\n" , Codigo_da_carta1);
printf("Nome da Cidade: %s\n" , Nome_da_cidade1);
printf("População: %.0lf\n" , Populacao1);
printf("Área: %lf \n" , area_em_km1);
printf("PIB: %lf \n" , PIB1);
printf("Número de Pontos Turísticos: %d \n" , Numero_de_pontos_turisticos1);
densidadepop1 = (float)(Populacao1 / area_em_km1);
printf ("Densidade Populacional: %lf \n" , densidadepop1);
pibp1 = (float)(PIB1 / Populacao1);
printf ("PIB per capita: %lf \n", pibp1);

//cálculo do super poder da carta 1
    superpoder1 = (float)((Populacao1+area_em_km1+PIB1+ (double)Numero_de_pontos_turisticos1+pibp1))
    + (1.0/densidadepop1);

printf("Super Poder: %f\n", superpoder1);

printf(" \n");

printf("Carta 2:\n");
printf("Estado: %s\n", Estado2);
printf("Código: %s\n" , Codigo_da_carta2);
printf("Nome da Cidade: %s\n" , Nome_da_cidade2);
printf("População: %lf\n" , Populacao2);
printf("Área: %lf\n" , area_em_km2);
printf("PIB: %lf\n" , PIB2);
printf("Número de Pontos Turísticos: %d\n" , Numero_de_pontos_turisticos2);
densidadepop2 = (float) (Populacao2 / area_em_km2);
printf ("Densidade Populacional: %f \n" , densidadepop2);
pibp2 = (float) (PIB2 / Populacao2);
printf ("PIB per capita: %f \n", pibp2);

//cálculo do super poder da carta 2
    superpoder2 = (float)((Populacao2+area_em_km2+PIB2+ (double)Numero_de_pontos_turisticos2+pibp2)
    + (1.0/densidadepop2));

printf("Super Poder: %f\n", superpoder2);

printf(" \n");

//aqui começam as comparações entre as cartas

if (Populacao1>Populacao2){
    printf("A carta 1 é a vencedora!\n");
} else {
    printf("A carta 2 é a vencedora!\n");
}
if (area_em_km1>area_em_km2){
    printf("A carta 1 é a vencedora!\n");
} else {
    printf("A carta 2 é a vencedora!\n");
}
if (PIB1>PIB2){
    printf("A carta 1 é a vencedora!\n");
} else {
    printf("A carta 2 é a vencedora!\n");
}
if (Numero_de_pontos_turisticos1>Numero_de_pontos_turisticos2){
    printf("A carta 1 é a vencedora!\n");
} else {
    printf("A carta 2 é a vencedora!\n");
}
if (superpoder1>superpoder2){
    printf("A carta 1 é a vencedora!\n");
} else {
    printf("A carta 2 é a vencedora!\n");
}

printf("Densidade Populacional: %d\n", 
    (float)(Populacao1/area_em_km1)<(Populacao2/area_em_km2));
    
printf("PIB per Capita: %d\n", 
    (float)(PIB1/Populacao1)>(PIB2/Populacao2));


return 0;
}
