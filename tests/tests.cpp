#include "./tests.h"

#include "../src/Logger/Logger.h"

int main() {
    Logger::log("\n\nTesting Project");

    Test::TrimTests();
    Test::JsonTests();

    return 0;
}