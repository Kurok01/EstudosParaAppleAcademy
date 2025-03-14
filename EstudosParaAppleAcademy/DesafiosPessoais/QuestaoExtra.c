#include <stdio.h>

float pegarNota(int i, float limite){
	
    float nota = 0;

    if (i % 2 == 0 && i != 0){
    	
        if (i==2){
        	
            printf("Me diga a sua nota do ppd: ");
            scanf("%f", &nota);
            
        } else{
        	
            printf("Me diga a nota do Exame Unificado: ");
            scanf("%f", &nota);
        }
        
    } else{
    	
        if(i<2){
            printf("Me diga a sua nota N%d: ", i+1);
            scanf("%f", &nota);
            
        } else{
        	
            printf("Me diga a sua nota N3\n");
            scanf("%f", &nota);
        }
    }

    while(nota < 0 || nota > limite){
    	
        printf("Codigo de erro 3.\n\n Tente novamente(0 a %.1f)\n", limite);
        scanf("%f", &nota);
    }

    return nota;
}

int main(){
	
    float n1,n2, ppd, n3, eu = 0, media;
    int  i, confirmacao;

    for(i=0; i<5; i++){
    	
        switch(i){
        	
            case 0:
            	
            n1= pegarNota(i, 4.5);
            break;

            case 1:
            	
            n2 = pegarNota(i, 4.5);
            break;

            case 2:
            	
            ppd = pegarNota(i, 1);
            break;

            case 3:
            
			if ((n1 + n2 + ppd) < 7) {
				
            printf("Voce fez a n3? (1)Sim (0)Nao\n");
            scanf("%d", &confirmacao);
            
            while (confirmacao != 0 && confirmacao != 1) {
            		
            		printf("Codigo de erro 3\nDigite um valor valido (1)Sim (0)Nao ");
            		scanf("%d", &confirmacao);
				}
            
                if(confirmacao == 1){
                	
                    n3 = pegarNota(i, 4.5);
                    if (n1 > n2) n2 = n3;
                    if (n2 > n1) n1 = n3;
                    
                } else{
                	
                    break;
                }
                
         	}
            break;

            case 4:
            	
            printf("Voce fez o EU? (1)Sim (0)Nao\n");
            scanf("%d", &confirmacao);
            	
            	while (confirmacao != 0 && confirmacao != 1) {
            		
            		printf("Codigo de erro 3\nDigite um valor valido (1)Sim (0)Nao ");
            		scanf("%d", &confirmacao);
				}
				
                if(confirmacao == 1){
                	
                    eu = pegarNota(i, 1);
                    
                } else{
                	
                    break;
                }
                
            break;
        }
    }
	
	media = n1 + n2 + ppd + eu;
	
    printf("Media: %.2f\n%s", (media > 10 ? 10.00 : media), (media >= 7 ? "APROVADO" : "REPROVADO"));

    return 0;
}
