#include <iostream>
#include <string>

using namespace std;

// Base class Athlete
class Athlete {
protected:
    int height;   // in inches
    int weight;   // in pounds
    char gender;  // 'M' for male, 'F' for female

public:
    // Constructors
    Athlete() : height(0), weight(0), gender('M') {}
    Athlete(int h, int w, char g) : height(h), weight(w), gender(g) {}

    // Getters and Setters
    int getHeight() const {
        return height;
    }

    int getWeight() const {
        return weight;
    }

    char getGender() const {
        return gender;
    }

    void setHeight(int h) {
        height = h;
    }

    void setWeight(int w) {
        weight = w;
    }

    void setGender(char g) {
        gender = g;
    }
};

// Derived class Tennis from Athlete
class Tennis : public Athlete {
private:
    int serveSpeed;     // Speed of the serve in mph
    bool isProfessional;

public:
    // Constructors
    Tennis() : serveSpeed(0), isProfessional(false) {}
    Tennis(int speed, bool isPro) : serveSpeed(speed), isProfessional(isPro) {}

    // Getters and Setters
    int getServerSpeed() const {
        return serveSpeed;
    }

    void setServeSpeed(int speed) {
        serveSpeed = speed;
    }

    bool getIsProfessional() const {
        return isProfessional;
    }

    void setIsProfessional(bool isPro) {
        isProfessional = isPro;
    }
};

// Derived class VolleyBall from Athlete
class VolleyBall : public Athlete {
private:
    string position;
    double spikeSpeed;  // Speed of spike in mph

public:
    // Constructors
    VolleyBall() : position("Unknown"), spikeSpeed(0.0) {}
    VolleyBall(string pos, double speed) : position(pos), spikeSpeed(speed) {}

    // Getters and Setters
    string getPosition() const {
        return position;
    }

    void setPosition(string pos) {
        position = pos;
    }

    double getSpikeSpeed() const {
        return spikeSpeed;
    }

    void setSpikeSpeed(double speed) {
        spikeSpeed = speed;
    }
};

// Main function to test the classes
int main()
{
    Athlete sport(72, 140, 'M');
    cout << "Athlete: " << sport.getHeight() << " "
         << sport.getWeight() << " "
         << sport.getGender() << endl;

    Tennis martina = Tennis();
    martina.setServeSpeed(100);
    martina.setGender('F');
    Tennis bjorn(150, false);
    bjorn.setGender('M');
    if (martina.getGender() == 'F')
       cout << "Martina serve speed: " << martina.getServerSpeed() << endl;

    VolleyBall kerri = VolleyBall();
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    VolleyBall giba("Outside Hitter", 23.2);
    giba.setGender('M');
    if (kerri.getGender() == 'F')
       cout << "Kerri is an " << kerri.getPosition() << endl;

    return 0;
}
