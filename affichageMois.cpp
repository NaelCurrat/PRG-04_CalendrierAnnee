//
// Created by naelc on 29.10.2026.
//
#include <iostream>
#include "affichageMois.h"
#include <string>

const std::string joursSemaine = " L  M  M  J  V  S  D";


std::string afficheMois(int nbJoursMois, int joursSemaineDebut) {
    std::cout << joursSemaine<<std::endl;
    int i;
    std::cout << std::setw((joursSemaineDebut - 1) * 3 - 1) <<"";
    
}
