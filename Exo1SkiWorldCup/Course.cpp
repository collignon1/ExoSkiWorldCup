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

// M�thode virtuelle traitementDossards (� red�finir dans les sous-classes)
void Course::traitementDossards() 
{
    // Impl�mentation par d�faut ou red�finition dans les sous-classes
}

// Destructeur
Course::~Course() 
{

}

#endif