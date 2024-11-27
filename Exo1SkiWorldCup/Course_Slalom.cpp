#ifndef COURSES_CPP
#define COURSES_CPP

#include "Course_Slalom.h"
#include <iostream>
#include <random>

// Constructeur
CourseSlalom::CourseSlalom(std::string nom, std::string date, Participation* participants):Course(nom, date, participants)
{
    this->nom = nom;
    this->date = date;
    this->participants = participants;
}

// Affiche les participants
void CourseSlalom::afficheLesParticipants() 
{
	int k = 0;
    for (int k = 0; k < 31; k++) 
    {

        Competiteur* competiteur = participants[k].getCompetiteur();

        std::cout << "Participant " << (k + 1) << ": "
            << competiteur->getNom() << " " << competiteur->getPrenom()
            << ", Numero Dossard: " << participants[k].getNumDossard()
            << ", Points FIS: " << competiteur->GetClassementFIS() << std::endl
            << ", Points WCSL " << competiteur->GetClassementWCSL() << std::endl;
    }
}

// Traite les dossards
void CourseSlalom::traitementDossards() 
{
    for (int i = 0; i < nombreParticipants; i++) 
    {
        participants[i].setNumDossard(i + 1);
    }
}

int CourseSlalom::attribuerDossards(int BorneInf, int BorneSup)
{
    int DossardAttribue[100];
    for (int i = 0; i < 100; i++) {
        DossardAttribue[i] = i + 1;
    }
    for (int i = BorneInf; i < BorneSup; i++) {
        bool Duplicate;
        do
        {
            Duplicate = false;

            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> distrib(BorneInf, BorneSup);
            DossardAttribue[i] = distrib(gen);

            for (int j = BorneInf; j < i; j++) {
                if (DossardAttribue[j] == DossardAttribue[i]) {
                    Duplicate = true;
                    break;
                }
            }
        } while (Duplicate);
    }
    for (int i = 0; i < sizeof(DossardAttribue) - BorneInf; i++)
    {
        setNumDossard(DossardAttribue[i]);
    }

#endif