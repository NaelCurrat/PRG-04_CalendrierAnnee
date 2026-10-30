//
// Created by naelc on 28.10.2026.
//
#include <iostream>
#include <string>
#include "affichageUser.h"
#include "affichageCalendrier.h"

int main() {
    std::string recommencerUtilisateur;
    do {
        int anneeUtilisateur = questionAnnee();
        std::cout << afficheCalendrier(anneeUtilisateur, estBissextile(anneeUtilisateur)) << std::endl;
        recommencerUtilisateur = questionRecommencer();

    }while (recommencer(recommencerUtilisateur));

}
