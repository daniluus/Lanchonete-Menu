#include <stdio.h>

int main()
{
    int opcao, lanche, HS, XB;
    
    float precoHS, precoXB, totalHS, totalXB, total;

    float pago, troco;
    
    totalHS = totalXB = total = HS = XB = 0;
    precoHS = 6.50;
    precoXB = 7.50;
    do{
        printf("\n\nEscolha uma opcao:\n");
        printf("==================\n");
        printf("1. Escolher lanche.\n");
        printf("2. Menu.\n");
        printf("3. Pagar lanche.\n");
        printf("4. Sair.\n");
        
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            while(lanche != 0){
                printf("\nEscolha uma opcao:\n");
                printf("==================\n");
                printf("1. Hamburguer simples   R$: 6,50\n");
                printf("2. X-burguer            R$: 7,50 \n");
                printf("0. Voltar menu anterior.\n"); 
                
                printf("\nOpcao: ");
                scanf("%d", &lanche);
                
                switch(lanche){
                    case 1:
                        printf("\nQuantidade de Hamburguer Simples: ");
                        scanf("%d", &HS);
                        totalHS = precoHS * HS;
                        printf("\nTotal Hamburguer Simples: %.2f", totalHS);
                        break;
                    case 2:
                        printf("\nQuantidade de X-burguer: ");
                        scanf("%d", &XB);
                        
                        totalXB = precoXB * XB;
                        printf("\nTotal X-burguer: %.2f", totalXB);
                        break;
                }
                
                total = totalHS + totalXB;
            }
            break;
        
        case 2:
            while(opcao != 0){
            
                    printf("\n============== MENU ==============\n");
                    printf("==================================\n");
                    printf("\n===== HAMBUGUERES =====\n");
                    printf("1. Hamburguer simples   R$: 6,50\n");
                    printf("2. X-burguer            R$: 7,50 \n");
                    printf("\n===== BEBIDAS =====\n");
                    printf("1. Coca-Cola Lata   R$: 5,50\n");
                    printf("2. Pepsi Lata   R$: 5,50\n");
                    printf("3. Guarana Lata   R$: 5,50\n");
                    
                    printf("\n0. Voltar menu anterior.\n");
                    
                    printf("\nOpcao: ");
                    scanf("%d", &opcao);
                }
            break;
        
        case 3:                            
                while(opcao != 0){
                
                    printf("\n============== PAGAMENTO ==============\n");
                    printf("========================================\n");
                    
                    printf("Total: R$: %.2f", total);
                    printf("\n==================\n");
                                        
                    while(pago < total){
                        printf("\nRecebido: ");
                        scanf("%f", &pago);
                        if(pago < total){
                            printf("\nValor invalido, digite novamente\n");
                        }
                    }
                    
                    troco = pago - total;
                    
                    printf("\nTroco: %.2f", troco);
                    
                    printf("\nPressione 0 para finalizar a compra\n");
                    scanf("%d", &opcao);
                }
            break;
        default:
            break;
        }
                
        
    }while(opcao != 4);
    
    

    return 0;
}
