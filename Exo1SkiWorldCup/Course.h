#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Participation.h"

class Course {

protected:
    int nombreParticipants = k; // Nombre total de participants
    Participation* lesParticipants; // Tableau dynamique de pointeurs vers les participants
    void classerLesParticipants();

private:
    std::string nomCompetition; // Nom de la compétition
    std::string dateCompetition; // Date de la compétition

public:
    int k;
    // Constructeur
    Course(std::string nomCompetition, std::string dateCompetition, Participation* participants);

    // Méthode virtuelle pour traitement des dossards
    void traitementDossards();

    // Destructeur
    virtual ~Course();
};

#endif