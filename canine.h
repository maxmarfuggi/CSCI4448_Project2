#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

// Canine Class
// Implements roam and eat methods used by all subclasses of Canine
class Canine : public Animal{
public:
    // Constructor that sets the type name once the animal has been created
    Canine(){
        type = "Canine";
    }
    void roam() {
        cout << name + " the " + species + "/" + type + " is chewing on a bone."<<endl;
    }
    void eat() {
        cout << name + " the " + species + "/" + type + " is eating " + type + " food."<<endl;
    }
};

// Wolf Class - Subclass of Canine
// Implements noise and wake
class Wolf : public Canine{
public:
    Wolf(string animal_name){
        name = animal_name;
        species = "Wolf";
    }
    void makeNoise(){
        cout << name + " the " + species + "/" + type + " goes AWOOOOO!"<< endl;
    }
    void wake(){
        cout << name + " the " + species + "/" + type + " jumps awake."<< endl;
    }
};

// Dog Class - Subclass of Canine
// Implements noise and wake
class Dog : public Canine{
public:
    Dog(string animal_name){
        srand(time(0));
        name = animal_name;
        species = "Dog";
    }
    void makeNoise() {
        // Creating phrase bank
        string phrases[5] = {"bow wow!", "bark bark.", "woof!", "grrrrrr.", "treat please."};

        // Creating a random object and using it to get a random index in the range of the phrase bank size
        int phrase_ind = rand() % 5;
        string phrase = phrases[phrase_ind];
        cout << name + " the " + species + "/" + type + " says " + phrase << endl;
    }
    void wake() {
        cout << name + " the " + species + "/" + type + " pops up excitedly." << endl;
    }

};