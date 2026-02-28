#include <stdio.h>
//Nivel Mestre
int main() {
    int opcao;
    
    // Variáveis da Carta 1
    char Estado1[20], Codigo_da_carta1[20], Nome_da_cidade1[50];
    int Numero_de_pontos_turisticos1;
    double area_em_km1, PIB1, Populacao1, densidadepop1, pibp1;
    float superpoder1;

    // Variáveis da Carta 2
    char Estado2[20], Codigo_da_carta2[20], Nome_da_cidade2[50];
    int Numero_de_pontos_turisticos2;
    double area_em_km2, PIB2, Populacao2, densidadepop2, pibp2;
    float superpoder2;

    // Variáveis de controle do duelo
    int attr1, attr2;
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;
    int pontos1 = 0, pontos2 = 0;

    printf("Menu principal:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n--- Cadastro da Carta 1 ---\n");
            printf("Estado: "); scanf("%s", Estado1);
            printf("Código: "); scanf("%s", Codigo_da_carta1);
            printf("Cidade: "); scanf(" %[^\n]", Nome_da_cidade1);
            printf("População: "); scanf("%lf", &Populacao1);
            printf("Área (km²): "); scanf("%lf", &area_em_km1);
            printf("PIB: "); scanf("%lf", &PIB1);
            printf("Pontos Turísticos: "); scanf("%d", &Numero_de_pontos_turisticos1);

            // Cálculos Carta 1
            densidadepop1 = Populacao1 / area_em_km1;
            pibp1 = PIB1 / Populacao1;
            superpoder1 = (float)(Populacao1 + area_em_km1 + PIB1 + Numero_de_pontos_turisticos1 + pibp1 + (1.0/densidadepop1));

            printf("\n--- Cadastro da Carta 2 ---\n");
            printf("Estado: "); scanf("%s", Estado2);
            printf("Código: "); scanf("%s", Codigo_da_carta2);
            printf("Cidade: "); scanf(" %[^\n]", Nome_da_cidade2);
            printf("População: "); scanf("%lf", &Populacao2);
            printf("Área (km²): "); scanf("%lf", &area_em_km2);
            printf("PIB: "); scanf("%lf", &PIB2);
            printf("Pontos Turísticos: "); scanf("%d", &Numero_de_pontos_turisticos2);

            // Cálculos Carta 2
            densidadepop2 = Populacao2 / area_em_km2;
            pibp2 = PIB2 / Populacao2;
            superpoder2 = (float)(Populacao2 + area_em_km2 + PIB2 + Numero_de_pontos_turisticos2 + pibp2 + (1.0/densidadepop2));

            // MENU DE ESCOLHA DE ATRIBUTOS
            printf("\n--- ESCOLHA DE ATRIBUTOS PARA O DUELO ---\n");
            printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n6. Super Poder\n");
            printf("Escolha o 1º atributo: ");
            scanf("%d", &attr1);
            printf("Escolha o 2º atributo: ");
            scanf("%d", &attr2);

            printf("\n##### RESULTADO DO DUELO #####\n");

            // Lógica para comparar DOIS atributos
            // Usamos um loop simples ou repetimos a lógica para processar attr1 e attr2
            for(int i = 1; i <= 2; i++) {
                int escolha = (i == 1) ? attr1 : attr2;
                double v1, v2;
                char* nomeAttr;
                int menorVence = 0; // 0 para maior vence, 1 para menor vence (densidade)

                switch(escolha) {
                    case 1: v1 = Populacao1; v2 = Populacao2; nomeAttr = "População"; break;
                    case 2: v1 = area_em_km1; v2 = area_em_km2; nomeAttr = "Área"; break;
                    case 3: v1 = PIB1; v2 = PIB2; nomeAttr = "PIB"; break;
                    case 4: v1 = (double)Numero_de_pontos_turisticos1; v2 = (double)Numero_de_pontos_turisticos2; nomeAttr = "Pontos Turísticos"; break;
                    case 5: v1 = densidadepop1; v2 = densidadepop2; nomeAttr = "Densidade"; menorVence = 1; break;
                    case 6: v1 = (double)superpoder1; v2 = (double)superpoder2; nomeAttr = "Super Poder"; break;
                    default: v1 = 0; v2 = 0; nomeAttr = "Inválido"; break;
                }

                printf("Comparando %s: ", nomeAttr);
                if (menorVence) {
                    if (v1 < v2) { printf("Carta 1 vence!\n"); pontos1++; }
                    else if (v2 < v1) { printf("Carta 2 vence!\n"); pontos2++; }
                    else printf("Empate!\n");
                } else {
                    if (v1 > v2) { printf("Carta 1 vence!\n"); pontos1++; }
                    else if (v2 > v1) { printf("Carta 2 vence!\n"); pontos2++; }
                    else printf("Empate!\n");
                }
            }

            printf("------------------------------\n");
            if (pontos1 > pontos2) printf("VENCEDOR FINAL: CARTA 1 (%s)\n", Nome_da_cidade1);
            else if (pontos2 > pontos1) printf("VENCEDOR FINAL: CARTA 2 (%s)\n", Nome_da_cidade2);
            else printf("O DUELO TERMINOU EM EMPATE GERAL!\n");

            break;

        case 2:
            printf("\nRegras: Escolha 2 atributos. Ganha quem vencer em mais categorias.\nNa Densidade Populacional, o MENOR valor vence!\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}