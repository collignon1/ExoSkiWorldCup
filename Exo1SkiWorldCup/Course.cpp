#ifndef COURSE_CPP
#define COURSE_CPP

#include "Course.h"

// Constructeur
Course::Course(std::string nomCompetition, std::string dateCompetition, Participation* participants)
{
    this->nomCompetition = nomCompetition;
    this->dateCompetition = dateCompetition;
    this->lesParticipants = participants;
  
}


void Course::classerLesParticipants()
{

}

// Méthode virtuelle traitementDossards (à redéfinir dans les sous-classes)
void Course::traitementDossards() 
{
    // Implémentation par défaut ou redéfinition dans les sous-classes
}

// Destructeur
Course::~Course() 
{

}

#endif