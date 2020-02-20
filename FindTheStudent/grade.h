#ifndef _GRADE_H_
#define _GRADE_H_
// DECLARATION DE LA STRUCUTRE NOTE
typedef struct {
  int idNote;
  char * note;
  char * matiere;
}Grade;

// METHODES
Grade createNote();
int addNote(Grade);
void deleteNote();
void editNote();
void afficherNote();

#endif
