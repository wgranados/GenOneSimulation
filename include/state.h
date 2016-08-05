#ifndef STATE_H
#define STATE_H

#include "pokemon.h"
#include <string>
#include <vector>

class State {
    private:
        std::vector<Pokemon> team1_(6);
        std::vector<Pokemon> team2_(6);
        //BigDecimal prob; placeholder for high precision class

    public:
        State(std::vector<Pokemon*> team1, std::vector<Pokemon*> team2);
        ~State();

        std::vector<Pokemon> team1();
        std::vector<Pokemon> team2();
        //BigDecimal probability(); placeholder for high precision class

        void setTeam1(std::vector<Pokemon*> newTeam1);
        void setTeam2(std::vector<Pokemon*> newTeam2);
        //void setProbability(BigDecimal newDecimal); placeholder for high precision class

        std::string ToString();
};

#endif