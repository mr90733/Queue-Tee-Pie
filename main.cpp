#include <iostream>

#include "src/hello.hpp"

#include "src/cutie.hpp"

using namespace std;

int main() {

    Puppy puppy("Cute puppy", 10);

    Kitty kitty("Cute kitty", 9);

    PygmyMarmoset marmoset("Tiny monkey", 8);

    QueueTees queue;

    cout << "Initial size: " << queue.size() << endl;

    queue.enqueue(&puppy);

    queue.enqueue(&kitty);

    queue.enqueue(&marmoset);

    cout << "Size after enqueue: " << queue.size() << endl;

    cout << queue.dequeue()->get_description() << endl;

    cout << queue.dequeue()->get_description() << endl;

    cout << queue.dequeue()->get_description() << endl;

    cout << "Final size: " << queue.size() << endl;

    return 0;
}