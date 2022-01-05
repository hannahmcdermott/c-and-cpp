/* 
    CH-230-A
    a12_p4.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <cstring> 
#include "TournamentMember.h" 
#include <iostream> 

using namespace std;

int main() {
    /*
        Creates a team of players 
    */
    Player v("Neymar", "da Silva Santo Júnior", "1992-02-05", "São Paulo, Brazil", 
        302, 11, "Right-wing", 0, "right footed");
    Player w("Messi", "Leo", "1987-06-24", "Rosario, Argentina", 
        423, 12, "Left-wing", 0, "left footed");
    Player x("Pelé", "---", "1940-10-23", "Três Corações, State of Minas Gerais, Brazil", 
        694, 10, "Forward", 0, "right footed");
    Player y("Maradona", "Diego", "1960-10-30", "Lanús Oeste, Argentina",
        699, 2, "Midfielder", 0, "left-footed");
    Player z("Cristiano", "Ronaldo", "1985-02-05", "Funchal, Portugal", 
        322, 7, "Goalie", 0, "right footed");

    /*
        Assigns a pointer to each player 
    */
    Player *playerptrv = &v; 
    Player *playerptrw = &w;
    Player *playerptrx = &x;
    Player *playerptry = &y; 
    Player *playerptrz = &z; 

    /*
        Creates a referee and assigns properties using setter methods 
    */
    Referee a;
    a.setName("Pierluigui");
    a.setLastname("Collina");
    a.setDoB("1960-02-13");
    a.setIsfrom("Bologna, Italy");
    a.setTimes(432);
    a.setYCC(0);
    a.setRCC(0);
    Player *yellowcardlist[40];
    Player *redcardlist[40];
    a.setYCL(yellowcardlist);
    a.setRCL(redcardlist);

    /*
        Prints out referee data 
    */
    cout << "\n----------------------------------------------------" << endl;
    cout << "              T H E    R E F E R E E                " << endl;
    cout << "----------------------------------------------------" << endl;
    a.print();
    a.printreferee();

    /*
        Prints out players' data 
    */
    cout << "\n\n----------------------------------------------------" << endl;
    cout << "              T H E  T E A M   T E A M              " << endl;
    cout << "----------------------------------------------------" << endl;
    v.print();
    v.printplayer();
    w.print();
    w.printplayer();
    playerptrx->print();
    playerptrx->printplayer();
    playerptry->print();
    playerptry->printplayer();
    playerptrz->print();
    playerptrz->printplayer();

    /*
        GAME SIMULATION
    */
    cout << "*****starting match*****" << endl; 

    // adds player v to referee's yellow card list
    cout << "\n" << v.getName() << " has attempted to kick the opponent" << endl;
    cout << "..adding " << v.getName() << " to " << a.getName() << "'s yellow card list" << endl;
    if (a.addToYellowCardList(playerptrv)) {
        cout << "Success! " << playerptrv->getName() << " is now on the yellow card list\n" << endl;
    } 

    // prints referee's data 
    a.printreferee();

    cout << "\n" << v.getName() << " has attempted to punch the opponent" << endl;
    cout << "..adding " << v.getName() << " to " << a.getName() << "'s yellow card list" << endl;
    //tries to add player v to yellow card list again
    if(a.addToYellowCardList(playerptrv)) {
        cout << "Success?" << endl;
    }
    else {
        cout << v.getName() << " has been bumped to " << a.getName() << "'s red card list\n" << endl;
    }

    // prints referee's data
    a.printreferee();

    cout << "\nOh no! " << w.getName() << " has intentionally bitten the opposing defense's ear off!" << endl;
    cout << "..adding " << w.getName() <<  " to " << a.getName() << "'s red card list" << endl;
    // adds player w to red list directly
    if (a.addToRedCardList(playerptrw)) {
        cout << "Success! " << w.getName() << "is now in the red card list\n" << endl; 
    }

    a.printreferee();

    /*
        Adds rest of players to yellow card list and prints referee's 
        data to see changes 
    */
      
    cout << "\n" << x.getName() << " has insulted the referee" << endl;
    cout << "..adding " << x.getName() << " to " << a.getName() << "'s yellow card list" << endl;
    if (a.addToYellowCardList(playerptrx)) {
        cout << "Success! " << x.getName() << " is now on the yellow card list\n" << endl;
    }

    a.printreferee();

    cout << "\nGOOAAAAAAAAAL!!!" << endl;
    cout << y.getName() << " has scored the first goal of the game!" << endl;
    y.incrementgoals();
    cout << y.getName() << " has scored " << y.getGoals() << " goal!" << endl;

    cout << "Oh no!\n" << y.getName() << " has taken off his shirt in celebration of his goal:(" << endl;
    cout << "adding " << y.getName() << " to " << a.getName() << "'s yellow card list" << endl;
    if (a.addToYellowCardList(playerptry)) {
        cout << "Success! " << y.getName() << " is now on the yellow card list\n" << endl;
    }

    a.printreferee();

    cout << "\n" << z.getName() << " is fighting with an opposing pla- OH NO " << z.getName() << " has tackled";
    cout << " the opposing player!" << endl;
    cout << "..adding " << z.getName() << " to " << a.getName() << "'s yellow card list" << endl;
    if (a.addToYellowCardList(playerptrz)) {
        cout << "Success! " << z.getName() << " is now on the yellow card list\n" << endl;
    }

    a.printreferee();
//this part doesn't work like it is supposed to
    cout << "\n" << z.getName() << " is now fighting the referee!" << endl;
    cout << "..adding " << z.getName() << " to " << a.getName() << "'s yellow card list" << endl;
    if (a.addToYellowCardList(playerptrz)) {
        cout << z.getName() << " is already in the yellow list! 2 yellows make a red" << endl;
        cout << z.getName() << " is on the red list\n" << endl;
    }    

    a.printreferee();
    return 0;
}