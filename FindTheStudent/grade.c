#include "grade.h"
#include "student.h"
#include "winsock.h"
#include <MYSQL/mysql.h>
#include <time.h>
#include <string.h>
#include "zerofgets.h"
#include <stdio.h>
#include <stdlib.h>


// Création d'une note
Grade createNote()
{
    // Déclaration d'une note
    Grade g;

    // Récupération des notes par un zerofget
    char * note =    malloc(sizeof(char) * 130);
    char * matiere = malloc(sizeof(char) * 130);

    printf("\n Veuillez entrer une note : ");
    zerofgets(note,130);
    printf("\n Veuillez entrez une matière : \n");
    zerofgets(matiere,130);
    printf("\n");


    time_t t1  = time(NULL);
    g.idNote = t1;
    g.note = note;
    g.matiere = matiere;

    // Retour d'une note
    return g;

}


// FONCTION d'AJOUT d'une note à un élève
int addNote(Grade g)
{
    MYSQL mysql;
    mysql_init(&mysql);
    mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");

    // Récupération du némro INE :
    long etu;
    printf("Veuillez renseigner un numéro INE  : ");
    scanf("%ld", &etu);

    if(mysql_real_connect(&mysql,"localhost","root","","student",0,NULL,0))
    {
        char requete[250] = "";

        sprintf(requete, "INSERT INTO grades VALUES('%d', '%d', '%s','%s')", g.idNote, etu, g.note, g.matiere);
        mysql_query(&mysql, requete);
        puts("ok");
        mysql_close(&mysql);

    }
    else
    {
        printf("Une erreur s'est produite lors de la connexion à la BDD! (Avez vous pensez a allumer wamp) ?");
    }

    return 0;

}

// FONCTION DUMP DES NOTES
void afficherNote()
{


}

// FONCTION QUI SUPPRIME UNE NOTE D'UN ELEVE
void deleteNote()
{
    MYSQL mysql;
    mysql_init(&mysql);
    mysql_options(&mysql,MYSQL_READ_DEFAULT_GROUP,"option");

    // Récupération de la saisis utilisateur
    long etu;
    printf("Veuillez renseigner un numéro INE  : ");
    scanf("%ld", &etu);
    // Condition MYSQL
    if(mysql_real_connect(&mysql,"localhost","root","","student",0,NULL,0))
    {

            char requete[250] = "";
            // REQUETE QUI SUPPRIME UN ETUDIANT EN FONCTION DE L'ID
            sprintf(requete, "DELETE FROM grades WHERE id = %d", etu);
            mysql_query(&mysql, requete);
            puts("ok");
            mysql_close(&mysql);
    }
    else
    {
        printf("Une erreur s'est produite lors de la connexion à la BDD!");
    }

}

// FONCTION QUI EDITE UNE NOTE D'UN ELEVE
void editNote()
{


}

