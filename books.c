#include <stdio.h>
#include <string.h>

#define MAX 100

// Enum Etat_Livre
typedef enum {
    DISPONIBLE,
    EMPRUNTE,
    RESERVE
} Etat_Livre;

// Structure Livre
typedef struct {
    char titre[50];
    char auteur[50];
    int annee_de_sortie;
    Etat_Livre etat;
} Livre;

// Afficher état
char* afficherEtat(Etat_Livre e) {
    switch(e) {
        case DISPONIBLE: return "DISPONIBLE";
        case EMPRUNTE: return "EMPRUNTE";
        case RESERVE: return "RESERVE";
        default: return "INCONNU";
    }
}

int main() {
    Livre livres[MAX];
    int N, i;
    int countEmpruntes = 0;

    printf("Combien de livres ? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("\n--- Livre %d ---\n", i + 1);

        printf("Titre: ");
        scanf("%s", livres[i].titre);

        printf("Auteur: ");
        scanf("%s", livres[i].auteur);

        printf("Annee de sortie: ");
        scanf("%d", &livres[i].annee_de_sortie);

        printf("Etat (0=DISPONIBLE, 1=EMPRUNTE, 2=RESERVE): ");
        scanf("%d", (int*)&livres[i].etat);
    }

    printf("\n===== LISTE DES LIVRES =====\n");
    for (i = 0; i < N; i++) {
        printf("\n%s | %s | %d | %s",
               livres[i].titre,
               livres[i].auteur,
               livres[i].annee_de_sortie,
               afficherEtat(livres[i].etat));

        if (livres[i].etat == EMPRUNTE) {
            countEmpruntes++;
        }
    }

    printf("\n\n===== LIVRES DISPONIBLES =====\n");
    for (i = 0; i < N; i++) {
        if (livres[i].etat == DISPONIBLE) {
            printf("%s - %s\n", livres[i].titre, livres[i].auteur);
        }
    }

    printf("\nNombre de livres empruntes: %d\n", countEmpruntes);

    return 0;
}
