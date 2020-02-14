// Max Marfuggi
// CSCI 4448 -  CU Boulder
// Project 2

#include "animal.h"
#include "canine.h"
#include "feline.h"
#include "pachyderm.h"
#include "zookeeper.h"
#include <vector>
#include <iostream>

using namespace std;


// Main Driver for the program
int main(){

    cout<< "\n\nWelcome to the Object-Oriented Zoo!"<<endl;
    cout<< "The Zookeeper will now start the day!\n"<<endl;


    // Instantiate feline sounds for feline noise strategy interface
    Purr purr_noise;
    Growl growl_noise;
    Roar roar_noise;

    // Instantiate observer classes to monitor the status of the zookeeper
    wakeObserver wake1;
    rollObserver roll1;
    exerciseObserver ex1;
    feedObserver feed1;
    sleepObserver sleep1;


    // Instantiating the felines with their appropriate noises
    Cat test1("Caroline", purr_noise);
    Cat test2("Carl", purr_noise);
    Tiger test3("Tony", growl_noise);
    Tiger test4("Teemu", growl_noise);
    Lion test5("Larry", roar_noise);
    Lion test6("Lorraine", roar_noise);

    // Instantiating canines
    Dog test7("Danny");
    Dog test8("Dre");
    Wolf test9("Warren");
    Wolf test10("Wilma");

    // Instantiating Pachyderms
    Hippo test11("Henrietta");
    Hippo test12("Harry");
    Elephant test13("Ella");
    Elephant test14("Emilio");
    Rhino test15("Roland");
    Rhino test16("Randy");

    // Creating vector of animals and loading in all the zoo animals
    vector<Animal*> zoo;
    zoo.push_back(&test1);
    zoo.push_back(&test2);
    zoo.push_back(&test3);
    zoo.push_back(&test4);
    zoo.push_back(&test5);
    zoo.push_back(&test6);
    zoo.push_back(&test7);
    zoo.push_back(&test8);
    zoo.push_back(&test9);
    zoo.push_back(&test10);
    zoo.push_back(&test11);
    zoo.push_back(&test12);
    zoo.push_back(&test13);
    zoo.push_back(&test14);
    zoo.push_back(&test15);
    zoo.push_back(&test16);

    // Instantiating the Zookeeper, and adding action observers to the zookeepers list of observers
    Zookeeper zooKeep(zoo);
    zooKeep.addObserver(&wake1);
    zooKeep.addObserver(&roll1);
    zooKeep.addObserver(&ex1);
    zooKeep.addObserver(&feed1);
    zooKeep.addObserver(&sleep1);

    // Launching Zookeeper duties
    zooKeep.wakeAnimals();
    zooKeep.rollCall();
    zooKeep.exerciseAnimals();
    zooKeep.feedAnimals();
    zooKeep.shutDown();
}
