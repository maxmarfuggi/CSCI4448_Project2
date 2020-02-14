#include <iostream>

using namespace std;

// Animal Class
// Abstract because it is never instantiated
// All animals in this zoo go to sleep the same way, so I have implemented the sleep behavior in this tier.
class Animal{
public:
    // Name, species, and type for each animal in the zoo
    string name;
    string species;
    string type;

    // Method definitions for each of the animal actions
    virtual void wake(){}
    virtual void makeNoise(){}
    virtual void eat(){}
    virtual void roam(){}
    void sleep(){
        cout<< name + " the " + species + "/" + type + " dozes off to sleep."<<endl;
    }
};
