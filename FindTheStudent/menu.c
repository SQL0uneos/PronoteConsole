#include "menu.h"
#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include "grade.h"
void menu (){

    // Boolean menu
    int menu = 1;


    // Boucle du menu
    while (menu == 1){
        int choix;
        printf("Bienvenue sur le gestionnaire d'élève\n");
        printf("Que voulez vous faire ?\n");
        printf("1 - Accéder au menu étudiant \n2 - Accéder menu des notes\n3 - Quitter\n : ");
        fflush(stdin);
        scanf("%d", &choix);
        if(choix == 1){
            student();
        }else if (choix == 2){
            grade();
        }else if (choix == 3){
            menu = 0;
            printf("\nMerci");
        }else {
          printf("Veuillez choisir\n");
        }
    }
}
void student(){
    int menu = 1;
    int choix;

    while (menu == 1){
        printf("Que voulez vous faire ?\n");
        printf("1 - Rechercher un étudiant\n2 - Créer un étudiant\n3 - Supprimer un étudiant\n4 - Modifier un étudiant\n5 - Quitter\n : ");
        fflush(stdin);
        scanf("%d", &choix);
            if (choix == 1){
                searchStudent();
            }else if (choix == 2) {
                addStudent(createStudent());
                printf("test");
            }else if (choix == 3){
                deleteStudent();
            }else if (choix == 4){
                updateStudent();
            }else if (choix == 5){
                menu = 0;
                printf("\nMerci");
            }else{
                printf("Veuillez choisir\n");
            }
    }
}


void grade ()
{
    int menu = 1;
    int choix;

    while(menu == 1)
    {
        printf("Que voulez vous faire ? : \n");
        printf("1 - Ajouter une note\n2 - Modifier une note\n3 - Supprimer une note\n4 - Quitter\n : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1 :
            addNote(createNote());
            break;
        case 2 :
            printf("test Modify");
            break;
        case 3 :
            deleteNote();
            break;
        case 4 :
            menu = 0;
            printf("Merci \n");
            break;
        default:
            printf("Veuillez chosiir");
            break;
        }
    }

}
