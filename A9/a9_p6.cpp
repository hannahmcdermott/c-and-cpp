/* 
    CH-230-A
    a9_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //initializes count variable to count number of tries
    int count = 0;
    
    //declares randomNumber variable that computer will generate 
    int randomNumber;
    
    //declares string for players' name      
    string player_name;
    cout << "What's your name?:)"  << endl;
    
    //scans players' name into string  
    getline(cin, player_name);

    //initiates random number generator with srand to generate different
    //number everytime program runs 
    //uses srand(time(0)) as the seed 
    srand(static_cast < unsigned int > (time(0)));
    //makes interval from 1-100
    randomNumber = rand() % 100 + 1; 
    
    cout << "Hello " << player_name << "!" << endl;
    cout << "I am thinking of a number between 1 and 100.. take a guess!" << endl;
    
    //starts endles while loop for user to enter guess 
    while (1) 
    {
        //count/number of tries increases everytime while loop runs again
        count++;
        cout << "Enter a number: " << endl;
        
        //declares variable for users guess number
        int users_num;
        cin >> users_num;
        
        //if users number is equal to randomNumber prints corresponding message 
        //and breaks out of loop
        if (users_num == randomNumber)
        {
            cout << "Congratulations! You guessed correctly! You had " << count << " tries!" << endl;
            break;
        }

        //if users number is greater than randomNumber prints corresponding message 
        //and runs loop again
        else if (users_num > randomNumber)
        {
            cout << "Your number is too high :/ Try again! :)" << endl;
        }

        //if users number is less than randomNumber prints corresponding message
        //and runs loop again 
        else if (users_num < randomNumber)
        {
            cout << "Your number is too low :/ Try again! :)" << endl;
        }
    }//end of while body
    return 0;
}
