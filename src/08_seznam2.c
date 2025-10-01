// funkcijo dodajZ zelim klicati

// ne takole:   z = dodajZ(z, n);

// ampak takole: dodaj(&z,n);

#define MAX_OCEN 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    // podatkovni del
    int  id;   //4
    char *ime; //8

    int st_ocen;  // koliko ocen je vpisanih v tabelo   //4
    int  *ocene;                                        //8

    // povezava na naslednjega studenta
    struct student *next;                               //8
} student;

student* novStudent(int id, char *ime) {
    student *n = malloc(sizeof(student));

    n->id = id;

    // n->ime = malloc((strlen(ime) + 1)*sizeof(char));
    // strcpy(n->ime, ime);
    n->ime = strdup(ime);

    n->ocene = malloc(MAX_OCEN*sizeof(int));
    n->st_ocen = 0;

    n->next = NULL;

    return n;
}

void freeStudent(student *s) {
    free(s->ocene);  // s tem ukazom se sprosti MAX_OCEN*4 bajtov spomina
    free(s->ime);    // s tem ukazom se sprosti strlen(ime)+1 bajtov spomina
    free(s); // s tem ukazom se sprosti sizeof(student)=32 bajtov spomina
}

void dodajOceno(student *s, int ocena) {
    if (s->st_ocen < MAX_OCEN)
      s->ocene[s->st_ocen++] = ocena;
}

void izpisiStudenta(student *s) {
    printf("Ime: %s, id:%d, ocene: ", s->ime, s->id);
    if (s->st_ocen > 0)
        for (int i = 0; i < s->st_ocen; ++i) printf("%d ", s->ocene[i]);
    else
        printf("/");
    printf("\n");
}

// funkcija v seznam, ki se zacne pri z, NA ZACETEK doda novega
// studenta n in vrne kazalec na zacetek seznama
void dodajZ(student **z, student*n) {
    n -> next = *z;
    *z = n;
}


// funkcija v seznam, ki se zacne pri z, NA KONEC doda novega
// studenta n in vrne kazalec na zacetek seznama
student * dodajK(student *z, student*n) {
    if (z == NULL)
        return n;

    student *t = z;
    while (t->next != NULL)
        t = t->next;

    t->next = n;
    return z;
}

// funkcija v UREJEN seznam (urejeno po id), ki se zacne pri z,
// NA PRAVO MESTO doda novega studenta n in vrne kazalec na zacetek seznama
student * dodajU(student *z, student*n) {
    if (z == NULL || z->id >= n->id)
        dodajZ(&z, n);

    student *t = z;
    while (t->next != NULL && t->next->id < n->id)
        t = t-> next;
    n->next = t->next;
    t->next = n;
    return z;
}

// iz seznama odstranimo studenta s podanim id in vrnemo kazalec
// na zacetek novega seznama
student * brisiElement(student *z, int id) {
    if (z == NULL) return NULL;
    if (z->id == id) { // brisem prvi element
        student *tmp = z;
        z = z->next;
        freeStudent(tmp);
        return z;
    }

    student *t = z;
    while (t->next != NULL && t->next->id != id)
        t = t-> next;
    if (t->next != NULL) {
        student *tmp = t->next;
        t->next = t->next->next;
        freeStudent(tmp);
    }
    return z;
}

void izpisiSeznam(student *z) {
    student *t = z;
    while (t != NULL) {
        izpisiStudenta(t);
        t = t -> next;
    }
}

int main(int argc, char *argv[]) {
    // student *s0 = novStudent(63241234, "Janez");
    // dodajOceno(s0, 10);dodajOceno(s0, 9); dodajOceno(s0, 6);
    // izpisiStudenta(s0);
    // freeStudent(s0);

    student *s1 = novStudent(63240001, "A");
    student *s2 = novStudent(63240002, "B");
    student *s3 = novStudent(63240003, "C");
    student *s4 = novStudent(63240004, "D");
    student *s5 = novStudent(63240005, "E");
    student *s6 = novStudent(63240006, "F");

    // kazalec na zacetek seznama
    student *z = NULL;

    dodajZ(&z, s6);
    dodajZ(&z, s1);
    dodajZ(&z, s2);
    dodajZ(&z, s3);

    //z = brisiElement(z, 63240004);
    //z = brisiElement(z, 63240006);

    izpisiSeznam(z);
}
