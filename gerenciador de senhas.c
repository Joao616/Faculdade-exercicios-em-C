#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 100
#define PASSWORD_FILE "passwords.txt"

// Função para criar uma nova senha e armazená-la
void create_password(const char *username, const char *password) {
    FILE *file = fopen(PASSWORD_FILE, "a");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo de senhas");
        return;
    }
    
    fprintf(file, "%s:%s\n", username, password);
    fclose(file);
}

// Função para verificar se a senha fornecida está correta
int check_password(const char *username, const char *password) {
    FILE *file = fopen(PASSWORD_FILE, "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo de senhas");
        return 0;
    }

    char line[MAX_PASSWORD_LENGTH * 2];
    while (fgets(line, sizeof(line), file)) {
        char stored_username[MAX_PASSWORD_LENGTH];
        char stored_password[MAX_PASSWORD_LENGTH];
        
        if (sscanf(line, "%[^:]:%s", stored_username, stored_password) == 2) {
            if (strcmp(username, stored_username) == 0 && strcmp(password, stored_password) == 0) {
                fclose(file);
                return 1; // Senha correta
            }
        }
    }

    fclose(file);
    return 0; // Senha incorreta
}

int main() {
    int choice;
    char username[MAX_PASSWORD_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Escolha uma opção:\n");
    printf("1. Criar senha\n");
    printf("2. Verificar senha\n");
    printf("Digite sua escolha: ");
    scanf("%d", &choice);
    getchar(); // Limpar o newline do buffer

    printf("Digite o nome de usuário: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; // Remover newline

    printf("Digite a senha: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; // Remover newline

    if (choice == 1) {
        create_password(username, password);
        printf("Senha criada com sucesso!\n");
    } else if (choice == 2) {
        if (check_password(username, password)) {
            printf("Senha correta!\n");
        } else {
            printf("Senha incorreta!\n");
        }
    } else {
        printf("Escolha inválida!\n");
    }

    return 0;
}
