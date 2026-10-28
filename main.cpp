//
// Created by naelc on 28.10.2026.
//
#include <iostream>
#include <string>
#include "affichageUser.h"

const int anneeMin = 1800;
const int anneeMax = 2100;

int main() {
    std::string recommencerUtilisateur;
    do {
        int anneeUtilisateur = questionAnnee();



        recommencerUtilisateur = questionRecommencer();

    }while (recommencer(recommencerUtilisateur));

}
