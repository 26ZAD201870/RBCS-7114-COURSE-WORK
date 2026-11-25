#include <iostream>
using namespace std;

int main(){
    // -------------------------------------------------------
    //VARIABLE DECLARATIONS
    //These are the storage boxes where we keep user answers
    // --------------------------------------------------------
    string name; //Stores the user's name
    string course;//Stores the course(BBIT or BSC)
    string hobby;//Stores the hobby
    string reason;//Stores why they chose the course
    string expectation;//Stores what they expect to learn
    string definition;//Stores their definition of programming
    string favourite_food;//Stores their favourite food
    string dream_job;//Stores their dream job
    // ---------------------------------------------------
    //QUESTION 1:NAME
    //-------------------------------------------------
    cout <<"---------------------------------------------"<<endl;
    cout <<"WELCOME TO YOUR FIRST PROGRAM!"<<endl;
    cout <<"---------------------------------------------"<<endl;
    cout << endl;

    cout <<"What is your name? ";
    getline(cin, name);// Read the full line (including spaces)
    if (name.empty()){
        cout<< "You didn't enter a name!"<<endl;
        return 0;
    }
    
    // ---------------------------------------------------
    // QUESTION 2 : COURSE(BBIT or BSC)
    // -------------------------------------------------
    cout <<"2. What course are you doing? (BBIT or BSC): ";
    getline(cin, course);
    // ---------------------------------------------------
    // QUESTION 3: HOBBY
    // -------------------------------------------------
    cout <<"3. What is your hobby? ";
    getline(cin, hobby);
    // ---------------------------------------------------
    // QUESTION 4: REASON FOR CHOOSING THE COURSE
    // -------------------------------------------------
    cout <<"4. Why did you choose this course? ";
    getline(cin, reason);
    // --------------------------------------------------
    // QUESTION 5: EXPECTATIONS
    // -------------------------------------------------
    cout <<"5. What do you expect to learn in programming? ";
    getline(cin, expectation);
    // ---------------------------------------------------
    // QUESTION 6: DEFINITION OF PROGRAMMING
    // -------------------------------------------------
    cout <<"6. In your own words, what is programming? ";
    getline(cin, definition);
    // ---------------------------------------------------
    // QUESTION 7: FAVOURITE FOOD
    // -------------------------------------------------
    cout <<"7. What is your favourite food? ";
    getline(cin, favourite_food);
    // ---------------------------------------------------
    cout <<"8.What is your dream job?";
    getline(cin,dream_job);
    // ---------------------------------------------------
    // DISPLAY THE SUMMARY
    // -------------------------------------------------
    cout << endl;
    cout <<"---------------------------------------------"<<endl;
    cout <<" YOUR PROFILE SUMMARY"         <<endl;
    cout <<"---------------------------------------------"<<endl;
    cout << endl;
    cout <<"Name:    " << name << endl;
    cout <<"Course:  " << course << endl;
    cout <<"Hobby:   " << hobby << endl;
    cout <<"Reason:  " << reason << endl;
    cout <<"Expectation: " << expectation << endl;
    cout << "Programming is:"<< definition << endl;
    cout << "Favourite Food:" << favourite_food << endl;
    cout << "Dream Job:" << dream_job << endl;
    cout <<"---------------------------------------------"<< endl;
    cout <<" Thank you for completing this!"  << endl;
    cout <<"---------------------------------------------" << endl;
    cout << "\n-------------------------------------------------------\n"
         << "------------" << endl;
         cout<< "🥳PROGRAM COMPLETE!🎉🎊"<< endl;
         cout<< "---------------------------------------------------------" << endl;
         cout<<"Great job,"<<name<<"! You are on your way to becoming a programmer!😊🚀"<< endl;
         cout << "---------------------------------------------------------"<<endl;
         return 0;
    
}

