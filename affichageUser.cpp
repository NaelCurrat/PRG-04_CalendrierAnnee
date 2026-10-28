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
    int anneeUtilisateur;
    do {
        std::cout<<"Entrer une valeur ["<< anneeMin << " - "<< anneeMax << "]" <<std::endl;
        std::cin>>anneeUtilisateur;
    }while (!anneeValide(anneeUtilisateur));
    return anneeUtilisateur;
};

std::string questionRecommencer() {
    std::string recommencerUtilisateur;
    std::cout << "Voulez-vous recommencer [O|N] : ";
    std::cin >> recommencerUtilisateur;
    while (recommencerUtilisateur != "O"
           && recommencerUtilisateur != "o"
           && recommencerUtilisateur != "N"
           && recommencerUtilisateur != "n") {
        std::cout << "Voulez-vous recommencer [O|N] : ";
        std::cin >> recommencerUtilisateur;
           }
    return recommencerUtilisateur;
}

bool recommencer (std::string recommencerUser) {
    if (recommencerUser == "O" || recommencerUser == "o") {
        return true;
    }else {
        return false;
    }
};

