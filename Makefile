# Alun*, você pode adicionar novas regras aqui
# para compilar o seu código. Por exemplo: compilar arquivos além do arquivo principal.
# Apenas NÃO REMOVA AS REGRAS EXISTENTES.


# ================================
# Instruções de uso do Makefile
#
# Para compilar o shell:
#     make compilar
#
# Para executar o shell:
#     make run
#
# Observação:
# - O executável gerado se chama "shellvis".
# - Você pode adicionar novas regras, mas NÃO remova as existentes.
# ================================

CC = gcc
CFLAGS = -Wall -Wextra -g

# regra padrão de compilação
compilar: shellvis.c
	$(CC) $(CFLAGS) shellvis.c -o shellvis

# regra para execução
run: compilar
	./shellvis
