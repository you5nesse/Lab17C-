#include "Logger.h"
#include <iostream>
#include <fstream>

using namespace std;

Logger::Logger() {
}

Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

void Logger::log(const string& message) {

    ofstream fichier("journal.log", ios::app);

    if (fichier.is_open()) {
        fichier << message << endl;
        fichier.close();
    }

    cout << "[LOG] " << message << endl;
}