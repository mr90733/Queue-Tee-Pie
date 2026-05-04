#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("Starts empty")

{
    QueueTees queue;

    REQUIRE(queue.size() == 0);
}


TEST_CASE("FIFO order")

{
    QueueTees queue;

    Puppy p1("A", 10);

    Puppy p2("B", 9);

    Puppy p3("C", 8);

    queue.enqueue(&p1);

    queue.enqueue(&p2);

    queue.enqueue(&p3);

    REQUIRE(queue.dequeue()->get_description() == "A");

    REQUIRE(queue.dequeue()->get_description() == "B");

    REQUIRE(queue.dequeue()->get_description() == "C");
}

TEST_CASE("Enqueue increases size")

{
    QueueTees queue;

    Puppy p1("Cat", 10);

    queue.enqueue(&p1);

    REQUIRE(queue.size() == 1);
}