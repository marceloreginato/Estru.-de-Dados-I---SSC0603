#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncad.h"
#include <string.h>

int main(){

    Cursor* cursor = cria_cursor();
    Lista* li = cria_lista();
    char comando;
    Tipo_Dado texto;
    //printf("EDITOR ABERTO\n");

    while(1){

        texto[10] = '\0';
        scanf(" %c", &comando);
        getchar();
        scanf("%s", texto);

        if(comando == 'X' && strcmp(texto, "editor") == 0){  // verifica se quer sair do editor
            libera_lista(li);
            libera_cursor(cursor);
            break;
        }
    
        if(texto[10] != '\0'){  // verica se palavra recebida tem mais de 10 caracteres
            printf("ERRO: PALAVRA COM MAIS DE 10 CARACTERES \n");
            continue;
        }

        switch(comando){  //interface de comandos

            case 'I':
                insere_lista_inicio(li, cursor, texto);
                break;

            case 'F':
                insere_lista_final(li, cursor, texto);
                break;

            case 'L':
                if(strcmp(texto, "texto") == 0)
                    imprime_lista(li);
                else if(strcmp(texto, "palavra") == 0)
                    imprime_cursor(cursor);
                else{break;}
                break;
            
            case 'A':
                insere_lista_antes(li, cursor, texto);
                break;

            case 'D':
                insere_lista_depois(li, cursor, texto);
                break;

            case 'P':
                buscar_palavra(li, cursor, texto);
                break;

            case 'R':
                if(strcmp(texto, "atual") == 0)
                    remove_lista_cursor(li, cursor);
                break;

            case 'G':
                if(strcmp(texto, "inicio")==0)
                    go_inicio(li, cursor);
                if(strcmp(texto, "fim")==0)
                    go_fim(li, cursor);
                if(strcmp(texto, "prox")==0)
                    go_prox(li, cursor);
                if(strcmp(texto, "ant")==0)
                    go_ant(li, cursor);
                break;

            default:
                printf("ERRO: COMANDO INVALIDO\n");
                break;
            } 
    }

    //printf("EDITOR FECHADO\n");
    return 0;
}

