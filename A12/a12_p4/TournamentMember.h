/* 
    CH-230-A
    a12_p4.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <cstring>
#include <string>

/*/////////////////////////////
    TOURNAMENTPLAYER CLASS
*//////////////////////////////

class TournamentMember 
{
    protected:
        char name[36];
        char lastname[36];
        char DoB[11];
        char isfrom[50];
        int times;        
        static std::string location;
    
    public:
        TournamentMember();
        TournamentMember(const char*, const char*, const char*, const char*, int);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();
        void setName(const char *n); 
        void setLastname(const char *l); 
        void setDoB(const char *b); 
        void setIsfrom(const char *s); 
        void setTimes(int t);
        const char* getName() const;
        const char* getLastname() const;
        const char* getDoB() const;
        const char* getIsfrom() const;
        int getTimes(); 
        // changes location - has to be a static method 
        static void changelocation(std::string);
        void print();
};

/*
    Provides inline setter methods outside of the class 
*/


inline void TournamentMember::setName(const char *n) {
    strcpy(name, n);
}

inline void TournamentMember::setLastname(const char *l) {
    strcpy(lastname, l);
}

inline void TournamentMember::setDoB(const char *b) {
    strcpy(DoB, b);
}

inline void TournamentMember::setIsfrom(const char *s) {
    strcpy(isfrom, s);
}

inline void TournamentMember::setTimes(int t) {
    times = t;
}

/*/////////////////
    PLAYER CLASS 
*//////////////////

class Player : public TournamentMember 
{
    private:
        int number;
        std::string position;
        int goals;
        std::string footed; 

    public:
        Player();
        Player(const char*, const char*, const char*, const char*, int,
            int, std::string, int, std::string);
        Player(const Player&);
        ~Player();
        void setNumber(int n) {number = n;}
        void setPosition(std::string p) {position = p;}
        // not inline so needs definition in cpp file 
        void setGoals(int g);  
        void setFooted(std::string f) {footed = f;}
        int getNumber() {return number;}
        std::string getPosition() {return position;}
        // not inline so needs definition in cpp file
        int getGoals();
        std::string getFooted() {return footed;}
        void printplayer();
        void incrementgoals();
};

/*//////////////////
    REFEREE CLASS
*///////////////////

class Referee : public TournamentMember
{
    private:
        int yellowCardCount;
        Player *yellowCardList[40];
        int redCardCount;
        Player *redCardList[40];

    public:
        void setYCC(int c) {yellowCardCount = c;}
        void setRCC(int c) {redCardCount = c;} 
        int getYCC() {return yellowCardCount;}
        int getRCC() {return redCardCount;} 
        void setYCL(Player**p); 
        void setRCL(Player**p);
        bool addToYellowCardList(Player*);
        bool addToRedCardList(Player*);
        void printreferee();
};


