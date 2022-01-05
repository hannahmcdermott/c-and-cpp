/* 
    CH-230-A
    a12_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <cstring>

class TournamentMember 
{
    private:
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
        static void changelocation(std::string&);
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
