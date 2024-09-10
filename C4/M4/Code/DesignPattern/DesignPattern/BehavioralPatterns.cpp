#include <iostream>
#include <vector>

// Observer Pattern

class Observer {
public:

	virtual void update() = 0;
};

class Subject {
    std::vector<Observer*> observers;
public:
    void attach(Observer* observer) {
        observers.push_back(observer);
    }
    void notify() {
        for (Observer* observer : observers) {
            observer->update();
        }
    }
};

class ConcreteObserver : public Observer {
public:
    void update() override { std::cout << "Observer updated!" << std::endl; }
};

// Strategic Pattern

class Strategy {
public:
    virtual void execute() = 0;
};

class ConcreteStrategyA : public Strategy {
public:
    void execute() override { std::cout << "Strategy A" << std::endl; }
};

class ConcreteStrategyB : public Strategy {
public:
    void execute() override { std::cout << "Strategy B" << std::endl; }
};

class Context {
    Strategy* strategy;
public:
    Context(Strategy* strat) : strategy(strat) {}
    void setStrategy(Strategy* strat) {
        strategy = strat;
    }
    void executeStrategy() {
        strategy->execute();
    }
};