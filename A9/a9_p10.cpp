/* 
    CH-230-A
    a9_p10.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //string array of words
    string words[17] = {"computer", "television", "keyboard", "laptop", "mouse",
                        "flower", "lily", "boot", "glasses", "hi", "octopus", 
                        "ufo", "alien", "fourteen", "dog", "cat", "sleepy"};
    
    //initializes random generator 
    srand(static_cast < unsigned int > (time(0)));
    
    //outer while loop ask player if he/she wants another round 
    while(1) 
    {
        //program chooses random word from string array 'words' 
        string a_word = words[rand() % 17];
        
        //makes a copy of program's chosen word 
        string cpy_word = a_word;
   
        //for loop to convert all vowels to underscores 
        for (size_t i = 0; i < cpy_word.size(); i++)
        {
            //does not check for uppercase vowels because no words contain uppercase letters
            if (cpy_word[i] == 'a' || cpy_word[i] == 'e' || cpy_word[i] == 'i' ||
                cpy_word[i] == 'o' || cpy_word[i] == 'u')
            {
                cpy_word[i] = '_';
            }
        }

        cout << "Hello! Try to guess this word: " << cpy_word <<endl;
    
        //declares and initializes count variable for number of tries
        int count = 0;
    
        //inner while loop for users' input guesses 
        while (1)
        {
            //number of tries increments
            count++;  

            //declares string for users' guess
            string guess;
            //user guesses the word 
            cin >> guess;
        
            //series of if-else statements to print out corresponding message depending
            //if whether users' guess is right, wrong, or if input is "quit" 
            if (guess  == "quit") break;
        
            else if (guess == a_word)
            {
                cout << "Congratulations! You guessed it in  "<< count << " tries!" << endl;
                break;
            }

            else if (guess != a_word)
            {
                cout << "Sorry! Thats not it:/ Keep trying" << endl; 
            }

        }

    //asks user if he/she wants to continue playing 
    string ask;
    cout << "Do you want to play again?" << endl;
    cin >> ask;

    //if input is quit, program terminates
    if (ask == "quit")
    {
        break;
    }

    }//end of outer while loop
    return 0;
}