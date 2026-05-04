#include <iostream>

#include "hello.hpp"

using namespace std;

Cutie::Cutie(const string& description, int cuteness_rating) {

    this->description = description;

    this->cuteness_rating = cuteness_rating;
}

Puppy::Puppy(const string& d, int r) : Cutie(d, r) {}

string Puppy::get_description() {

    return description;
}

int Puppy::get_cuteness_rating() {

    return cuteness_rating;
}


Kitty::Kitty(const string& d, int r) : Cutie(d, r) {}

string Kitty::get_description() {

    return description;
}

int Kitty::get_cuteness_rating() {

    return cuteness_rating;
}

PygmyMarmoset::PygmyMarmoset(const string& d, int r) : Cutie(d, r) {}

string PygmyMarmoset::get_description() {

    return description;
}

int PygmyMarmoset::get_cuteness_rating() {

    return cuteness_rating;
}


QueueTees::QueueTees() {

    max_size = 10;

    items = new Cutie*[max_size];

    front = 0;

    back = 0;

    count = 0;
}

QueueTees::~QueueTees() {

    delete[] items;
}

int QueueTees::size() const {

    return count;
}

bool QueueTees::isFull() const {

    return count == max_size;
}

bool QueueTees::isEmpty() const {

    return count == 0;
}

void QueueTees::enqueue(Cutie* c) {

    if (isFull()) {

        cout << "Queue is full" << endl;

        return;
    }

    items[back] = c;

    back = (back + 1) % max_size;

    count++;
}

Cutie* QueueTees::dequeue() {

    if (isEmpty()) {

        cout << "Queue is empty" << endl;

        return nullptr;
    }

    Cutie* temp = items[front];

    front = (front + 1) % max_size;

    count--;

    return temp;
}