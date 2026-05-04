#pragma once

#include "cutie.hpp"

class QueueTees

{
private:

    Cutie** items;

    int front;

    int back;

    int count;

    int max_size;

public:

    QueueTees();

    ~QueueTees();

    void enqueue(Cutie* c);

    Cutie* dequeue();

    int size() const;

    bool isFull() const;

    bool isEmpty() const;
};