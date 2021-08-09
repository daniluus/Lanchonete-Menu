#include <stdio.h>

int main()
{
    int opcao, lanche, HS, XB;
    
    float precoHS, precoXB, totalHS, totalXB, total;
    
    totalHS = totalXB = total = HS = XB = 0;
    precoHS = 6.50;
    precoXB = 7.50;
    do{
        printf("\nEscolha uma opcao:\n");
        printf("==================\n");
        printf("1. Escolher lanche.\n");
        printf("2. Pagar lanche.\n");
        printf("3. Sair.\n");
        
        scanf("%d", &opcao);
        
        if(opcao == 1){
            while(lanche != 3){
                printf("\nEscolha uma opcao:\n");
                printf("==================\n");
                printf("1. Hamburguer simples   R$: 6,50\n");
                printf("2. X-burguer            R$: 7,50 \n");
                printf("3. Sair.\n");  
                
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
        
    }while(opcao == "3");
    
    

    return 0;
}

