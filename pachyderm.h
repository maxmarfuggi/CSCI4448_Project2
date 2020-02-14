#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

// Pachyderm Subclass
// Implements roam and eat methods that apply are used by the subclasses of Pachyderm
class Pachyderm : public Animal{
public:
    // Constructor that sets the type name once the animal has been created
    Pachyderm(){
        type = "Pachyderm";
    }
    void roam() {
        cout << name + " the " + species + "/" + type + " is playing in the water." << endl;
    }
    void eat() {
        cout << name + " the " + species + "/" + type + " is eating " + type + " food." << endl;
    }
};

// Hippo Class - Subclass of Pachyderm
// Implements noise and wake methods
class Hippo : public Pachyderm{
public:
    // Constructor that sets the species name and animal name once the animal has been created
    Hippo(string animal_name){
        name = animal_name;
        species = "Hippo";
        srand(time(0));
    }
    void makeNoise() {
        cout << name + " the " + species + "/" + type + " splashes out from the water." << endl;
    }
    void wake() {
        // Creating phrase bank
        string phrases[5] = {" lets out a yawn.", " splashes in the water.", " asks for food immediately.", " ignores zookeeper and goes back to sleep without hesitation.", " does a nice long stretch in the sun."};

        // Creating a random object and using it to get a random index in the range of the phrase bank size
        int phrase_ind = rand() % 5;
        string phrase = phrases[phrase_ind];
        cout << name + " the " + species + "/" + type + " says " + phrase << endl;
    }
};

// Elephant Class - Subclass of Pachyderm
// Implements noise and wake methods
class Elephant : public Pachyderm{
public:
    // Constructor that sets the species name and animal name once the animal has been created
    Elephant(string animal_name){
        name = animal_name;
        species = "Elephant";
    }
    void makeNoise() {
        cout << name + " the " + species + "/" + type + " says toooooooooot!" << endl;
    }
    void wake() {
        cout << name + " the " + species + "/" + type + " stretches their trunk." << endl;
    }
};

// Rhino Class - Subclass of Pachyderm
// Implements noise and wake
class Rhino : public Pachyderm{
public:
    // Constructor that sets the species name and animal name once the animal has been created
    Rhino(string animal_name){
        name = animal_name;
        species = "Rhino";
    }

    void makeNoise() {
        cout << name + " the " + species + "/" + type + " stomps their hooves." << endl;
    }
    void wake() {
        cout << name + " the " + species + "/" + type + " rolls over and keeps sleeping because he's comfortable." << endl;
    }
};