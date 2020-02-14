#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <vector>
using namespace std;

// Zoo Announcer class
// Base class implements an abstract onEvent method to be inherited by each derived observer class.
class ZooAnnouncer{
public:
    virtual void onEvent(string flag){}
};

// Observer to monitor if the zookeeper is waking the animals
class wakeObserver : public  ZooAnnouncer{
    void onEvent(string flag){
        // If the flag matches that of the wakeUp() method, print the wake message from the announcer
        if(flag == "Wake"){
            cout << "Zoo Announcement: The Zookeeper is waking up all of the animals!"<< endl;
        }
    }
};

// Observer to monitor if the zookeeper is taking roll
class rollObserver : public  ZooAnnouncer{
    void onEvent(string flag){
        // If the flag matches that of the rollCall() method, print the roll call message from the announcer
        if(flag == "Roll"){
            cout << "Zoo Announcement: The Zookeeper is taking roll for all of the animals!" << endl;
        }
    }
};

// Observer to monitor if the zookeeper is exercising the animals
class exerciseObserver : public  ZooAnnouncer{
    void onEvent(string flag){
        // If the flag matches that of the exercise() methhod, print the exercise message from the announcer.
        if(flag == "Ex"){
            cout << "Zoo Announcement: The Zookeeper is exercising all of the animals!" << endl;
        }
    }
};

// Observer to monitor if the zookeeper is feeding the animals
class feedObserver : public  ZooAnnouncer{
    void onEvent(string flag){
        // If the flag matches the feed() method, print the feed message from the announcer.
        if(flag == "Feed"){
            cout << "Zoo Announcement: The Zookeeper is feeding all of the animals!" << endl;
        }
    }
};

// Observer to monitor if the zookeeper is putting the animals to bed
class sleepObserver : public  ZooAnnouncer{
    void onEvent(string flag){
        // If the flag matches the sleep() method, print the sleep message from the announcer.
        if(flag == "Sleep"){
            cout << "Zoo Announcement: The Zookeeper is putting all of the animals to bed. Thanks for coming!" << endl;
        }
    }
};


// Zookeeper class
class Zookeeper{
// Holds two private variables, a list of the zoo animals, and a list of observers
private:
    vector<Animal*> zoo;
    vector<ZooAnnouncer*> observers;
public:
    // Constructor to add all of the animals to the zookeeper vector
    Zookeeper(vector<Animal*> my_zoo){
        for(int i = 0; i < my_zoo.size(); i++){
            zoo.push_back(my_zoo[i]);
        }
    }
    // Wakes animals and publishes an event notifying observers
    void wakeAnimals() {
        // Sends message to observer classes so they can alert the zoo announcer
        publishEvent("Wake");
        cout << "Waking the animals up..." << endl;
        for(int i = 0; i < zoo.size(); i++){
            zoo[i]->wake();
        }
        cout<<endl;
    }

    // Roll calls animals and notifys observers by publishing an event
    void rollCall(){
        // Sends message to observer classes so they can alert the zoo announcer
        publishEvent("Roll");
        cout << "Calling roll for all the animals..." << endl;
        for(int i = 0; i < zoo.size(); i++){
            zoo[i]->makeNoise();
        }
        cout<<endl;
    }

    // Feeds animals and notifies observers
    void feedAnimals(){
        // Sends message to observer classes so they can alert the zoo announcer
        publishEvent("Feed");
        cout << "Feeding all the animals..." << endl;
        for(int i = 0; i < zoo.size(); i++){
            zoo[i]->eat();
        }
        cout<<endl;
    }

    // exercises the animals and notifies observers
    void exerciseAnimals(){
        // Sends message to observer classes so they can alert the zoo announcer
        publishEvent("Ex");
        cout << "Letting the animals get their exercise..." << endl;
        for(int i = 0; i < zoo.size(); i++){
            zoo[i]->roam();
        }
        cout<<endl;
    }

    // Puts animals to bed and notifies observers.
    void shutDown(){
        // Sends message to observer classes so they can alert the zoo announcer
        publishEvent("Sleep");
        cout << "Shutting down the zoo for the day..." << endl;
        for(int i = 0; i < zoo.size(); i++){
            zoo[i]->sleep();
        }
        cout<<endl;
        cout<<"That's all, thanks for coming!"<< endl;
    }

    // for each observer in the list of observers, they are made to use their onEvent method with the current event flag, triggering the
    // correct response for the zookeeper.
    void publishEvent(string flag){
        for(int i = 0; i < observers.size(); i++){
            observers[i]->onEvent(flag);
        }
    }

    // Adds observers to the list that are notified of state changes
    void addObserver(ZooAnnouncer* observer){
        observers.push_back(observer);
    }
};

