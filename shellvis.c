#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void mostrar_prompt() {
    printf("shellvis> ");
    fflush(stdout);  
}


/* 
 * Função principal do shell
 * Os alunos devem implementar aqui o loop principal
 * A leitura de comandos, execução e outras funcionalidades podem ser implementadas em outras funções auxiliares e chamadas aqui
*/
void shellvis() {
    char linha[1024];

    while (1) { 
        mostrar_prompt();
        if (fgets(linha, sizeof(linha), stdin) == NULL) {
            printf("\n");
            break; 
        }
        linha[strcspn(linha, "\n")] = 0;

        if (strcmp(linha, "exit") == 0)
            break;
    }
}

int main() {
    // chamada obrigatória
    shellvis();    
    return 0;
}
