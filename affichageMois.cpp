//
// Created by naelc on 29.10.2026.
//
#include <iostream>
#include "affichageMois.h"

#include <iomanip>
#include <string>

const std::string tousJoursSemaine = " L  M  M  J  V  S  D";


int afficheMois(int nbJoursMois, int jourSemaine) {
    std::cout << tousJoursSemaine<<std::endl;
    int i;
    std::cout << std::setw((jourSemaine - 1) * 3 - 1) <<"";
    for (i = 1; i <= nbJoursMois; i++) {
        if (((jourSemaine + (i % 7)- 1) % 7) != 1) {
            std::cout<< std::setw(3)<<i;
        }else {
            std::cout<< std::setw(2)<<i;
        }

        if (!((jourSemaine + i - 1) % 7)){ std::cout << std::endl;}

    }
    std::cout << std::endl << std::endl;
    return (jourSemaine + nbJoursMois - 1) % 7 + 1;
}
