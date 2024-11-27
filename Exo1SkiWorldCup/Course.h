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
    std::string nomCompetition; // Nom de la comp�tition
    std::string dateCompetition; // Date de la comp�tition

public:
    int k;
    // Constructeur
    Course(std::string nomCompetition, std::string dateCompetition, Participation* participants);

    // M�thode virtuelle pour traitement des dossards
    void traitementDossards();

    // Destructeur
    virtual ~Course();
};

#endif