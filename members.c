#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure Adresse
typedef struct {
    char rue[50];
    char ville[50];
    int codePostal;
} Adresse;

// Structure Date
typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

// Structure Membre
typedef struct {
    char nom[50];
    char prenom[50];
    int numeroCarte;
    Adresse adresse;
    Date dateNaissance;
} Membre;

// Fonction pour calculer l'âge
int calculAge(Date naissance) {
    int anneeActuelle = 2026;
    return anneeActuelle - naissance.annee;
}

int main() {
    Membre membres[MAX];
    int M, i;
    int countAdultes = 0;

    printf("Combien de membres ? ");
    scanf("%d", &M);

    for (i = 0; i < M; i++) {
        printf("\n--- Membre %d ---\n", i + 1);

        printf("Nom: ");
        scanf("%s", membres[i].nom);

        printf("Prenom: ");
        scanf("%s", membres[i].prenom);

        printf("Numero de carte: ");
        scanf("%d", &membres[i].numeroCarte);

        printf("Adresse (rue ville codePostal): ");
        scanf("%s %s %d",
              membres[i].adresse.rue,
              membres[i].adresse.ville,
              &membres[i].adresse.codePostal);

        printf("Date de naissance (jour mois annee): ");
        scanf("%d %d %d",
              &membres[i].dateNaissance.jour,
              &membres[i].dateNaissance.mois,
              &membres[i].dateNaissance.annee);
    }

    printf("\n===== LISTE DES MEMBRES =====\n");
    for (i = 0; i < M; i++) {
        printf("\n%s %s | Carte: %d | %s, %s, %d",
               membres[i].nom,
               membres[i].prenom,
               membres[i].numeroCarte,
               membres[i].adresse.rue,
               membres[i].adresse.ville,
               membres[i].adresse.codePostal);

        int age = calculAge(membres[i].dateNaissance);
        printf(" | Age: %d", age);

        if (age >= 18) {
            countAdultes++;
        }
    }

    printf("\n\nNombre total d'adultes: %d\n", countAdultes);

    return 0;
}
