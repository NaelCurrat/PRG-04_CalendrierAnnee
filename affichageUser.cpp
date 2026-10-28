//
// Created by naelc on 28.10.2026.
//

#include <iostream>
#include <string>
#include "affichageUser.h"

const int anneeMin = 1800;
const int anneeMax = 2100;

bool anneeValide(int anneeUser) {
    if (anneeUser < anneeMin || anneeUser > anneeMax) {
        return false;
    }else {
        return true;
    }
};

int questionAnnee() {
    do {
        std::cout<<"Entrer une valeur ["<< anneeMin << " - "<< anneeMax << "]" <<std::endl;
        std::cin>>anneeUtilisateur;
    }while (anneeValide(anneeUtilisateur));
};

std::string questionRecommencer() {
    do {
        std::cout<<"Ce programme affiche pour une annee de ["<< anneeMin << " - "<< anneeMax << "]" <<std::endl;
        questionAnnee();
    }while (recommencer(recommencerUtilisateur));
}

bool recommencer (std::string recommencerUser) {
    if (recommencerUser == "N" || recommencerUser == "n") {
        return false;
    }else {
        return true;
    }
};

