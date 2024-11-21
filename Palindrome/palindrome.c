#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Fonction pour vérifier si une chaîne est un palindrome
bool is_palindrome(const char *str) {
    int len = strlen(str); // Longueur de la chaîne
    int left = 0;          // Indice du début
    int right = len - 1;   // Indice de la fin

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Pas un palindrome
        }
        left++;
        right--;
    }
    return true; // La chaîne est un palindrome
}

int main() {
    char word[100];

    printf("Entrez un mot : ");
    scanf("%s", word);

    if (is_palindrome(word)) {
        printf("'%s' est un palindrome.\n", word);
    } else {
        printf("'%s' n'est pas un palindrome.\n", word);
    }

    return 0;
}
