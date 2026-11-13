#include "Config.h"
#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

Config::Config() {
    filename = "config.json";
}

Config::Config(const string& filename) {
    this->filename = filename;
}

string Config::getValue(const string& key) {

    ifstream fichier(filename);

    if (!fichier.is_open()) {
        cout << "Erreur : impossible d'ouvrir le fichier JSON."
             << endl;
        return "";
    }

    string ligne;

    regex expression(
        "\"" + key + "\"\\s*:\\s*\"([^\"]*)\""
    );

    while (getline(fichier, ligne)) {

        smatch resultat;

        if (regex_search(ligne, resultat, expression)) {
            return resultat[1].str();
        }
    }

    return "";
}