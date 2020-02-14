#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <vector>

using namespace std;


// Class for implementation of feline noise strategy design
// Base class has an abstract noise method
// Each method returns a string, which is then printed when the zookeeper activates each animals makeNoise() method.
class felineStrategy{
public:
    virtual string noise(){}
};

// Implementing the cat specific sound
class Purr : public felineStrategy{
public:
    string noise()  {
        return "purrrrrr.";
    }
};

// Implementing the tiger specific sound
class Growl : public felineStrategy{
public:
    string noise()  {
        return "groowwwwwwl.";
    }
};

// Implementing the lion specific sound
class Roar : public felineStrategy{
public:
    string noise()  {
        return  "ROOOOOOAAAAR.";
    }
};

