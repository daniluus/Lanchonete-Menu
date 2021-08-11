#include <stdio.h>

int main()
{
    int opcao, lanche, HS, XB;
    
    float precoHS, precoXB, totalHS, totalXB, total;
    
    totalHS = totalXB = total = HS = XB = 0;
    precoHS = 6.50;
    precoXB = 7.50;
    do{
        printf("\n\nEscolha uma opcao:\n");
        printf("==================\n");
        printf("1. Escolher lanche.\n");
        printf("2. Menu.\n");
        printf("3. Sair.\n");
        
        scanf("%d", &opcao);
        
        if(opcao == 1){
            while(lanche != 0){
                printf("\nEscolha uma opcao:\n");
                printf("==================\n");
                printf("1. Hamburguer simples   R$: 6,50\n");
                printf("2. X-burguer            R$: 7,50 \n");
                printf("0. Voltar menu anterior.\n"); 
                
                scanf("%d", &lanche);
                
                switch(lanche){
                    case 1:
                        HS += 1;
                        
                        printf("\nQuantidade de Hamburguer Simples: %d", HS);
                        
                        totalHS = precoHS * HS;
                        printf("\nTotal Hamburguer Simples: %.2f", totalHS);
                        break;
                    case 2:
                        XB += 1;
                        printf("\nQuantidade de X-burguer: %d", XB);
                        
                        totalXB = precoXB * XB;
                        printf("\nTotal X-burguer: %.2f", totalXB);
                        break;
                }
                
                total = totalHS + totalXB;
                printf("\n==================\n");
                printf("Total: R$: %.2f", total);
            }
        }
        else if(opcao == 2){
            
            printf("\n===== MENU =====\n");
            printf("==================\n");
            printf("\n===== HAMBUGUERES =====\n");
            printf("1. Hamburguer simples   R$: 6,50\n");
            printf("2. X-burguer            R$: 7,50 \n");
            printf("\n===== BEBIDAS =====\n");
            printf("1. Coca-Cola Lata   R$: 5,50\n");
            printf("2. Pepsi Lata   R$: 5,50\n");
            printf("3. Guarana Lata   R$: 5,50\n");
        }
        
    }while(opcao != 3);
    
    

    return 0;
}
