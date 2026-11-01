//
// Created by naelc on 29.10.2026.
//

#include <iostream>
#include "affichageCalendrier.h"
#include "affichageMois.h"
#include <string>
#include <array>

 std::array<std::string, 12> mois = {"Janvier", "Fevrier", "Mars", "Avril", "Mai","Juin","Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
 int jourDebutMois = 1;

bool estBissextile(int annee) {
    if ((annee % 4 == 0 && annee %100 != 0) || (annee % 400 == 0)) {
        return true;
    }else {
        return false;
    }
}

void afficheCalendrier(int annee, bool estBissextile) {
    int nbJoursMois = 0;
    for (int moi = 0; moi < 12; moi++) {
        switch (moi) {
            case 0: nbJoursMois = 31;
                break;
            case 1: if (estBissextile){nbJoursMois = 29;}else{nbJoursMois = 28;}
                break;
            case 2: nbJoursMois = 31;
                break;
            case 3: nbJoursMois = 30;
                break;
            case 4: nbJoursMois = 31;
                break;
            case 5: nbJoursMois = 30;
                break;
            case 6: nbJoursMois = 31;
                break;
            case 7: nbJoursMois = 31;
                break;
            case 8: nbJoursMois = 30;
                break;
            case 9: nbJoursMois = 31;
                break;
            case 10: nbJoursMois = 30;
                break;
            case 11: nbJoursMois = 31;
                break;
        }
        std::cout << mois[moi] << " " << annee <<std::endl;
        jourDebutMois = afficheMois(nbJoursMois, jourDebutMois);
    }
}



