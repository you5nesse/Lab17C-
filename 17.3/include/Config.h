#ifndef CONFIG_H
#define CONFIG_H

#include <string>

class Config {
private:
    std::string filename;

public:
    Config();

    
    Config(const std::string& filename);

    std::string getValue(const std::string& key);
};

#endif