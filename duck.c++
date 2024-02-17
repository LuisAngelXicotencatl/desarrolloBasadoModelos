#include <iostream>
#include <string>

using namespace std;

class FlyBehavior {
public:
    virtual void fly() = 0;
};

class QuackBehavior {
public:
    virtual void quack() = 0;
};

class FlyWithWings : public FlyBehavior {
public:
    void fly() override {
        cout << "Vuelo" << endl;
    }
};

class FlyNoWay : public FlyBehavior {
public:
    void fly() override {
        cout << "No vuelo" << endl;
    }
};

class Quack : public QuackBehavior {
public:
    void quack() override {
        cout << "quack" << endl;
    }
};

class Squeak : public QuackBehavior {
public:
    void quack() override {
        cout << "squeze" << endl;
    }
};

class MuteQuack : public QuackBehavior {
public:
    void quack() override {
        cout << "no hago ruido" << endl;
    }
};

class MallardDuck : public FlyWithWings {
public:
    void display() {
        cout << "Soy un pato mallard" << endl;
    }
};

class RedheadDuck : public FlyWithWings {
public:
    void display() {
        cout << "Soy un pato cabeza roja" << endl;
    }
};

class RubberDuck : public FlyNoWay {
public:
    void display() {
        cout << "Soy un pato de goma" << endl;
    }
};

class DecoyDuck : public FlyNoWay {
public:
    void display() {
        cout << "Soy un pato de decorativo" << endl;
    }
};

int main() {
    MallardDuck mallardDuck;
    RedheadDuck redheadDuck;
    RubberDuck rubberDuck;
    DecoyDuck decoyDuck;
    Quack quackBehavior;
    Squeak squeakBehavior;
    MuteQuack muteQuackBehavior;

    mallardDuck.display();
    mallardDuck.fly();
    quackBehavior.quack();

    redheadDuck.display();
    redheadDuck.fly();
    quackBehavior.quack();

    rubberDuck.display();
    rubberDuck.fly();
    squeakBehavior.quack();

    decoyDuck.display();
    decoyDuck.fly();
    muteQuackBehavior.quack();
    return 0;
}