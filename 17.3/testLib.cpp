#include <iostream>

#include "Logger.h"
#include "Config.h"

using namespace std;

int main() {

    
    Logger& logger = Logger::getInstance();

    logger.log("Demarrage du programme");
    logger.log("Test de la bibliotheque");

    Config config("config.json");

    string nom = config.getValue("nom");
    string version = config.getValue("version");
    string auteur = config.getValue("auteur");

    
    cout << "\n--- Configuration ---" << endl;

    cout << "Nom : " << nom << endl;
    cout << "Version : " << version << endl;
    cout << "Auteur : " << auteur << endl;

    logger.log("Fin du programme");

    return 0;
}