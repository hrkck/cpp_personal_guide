#include "../include/day26.h"

int day26() {
    std::array<int, 3> actual, expected;
    std::cin >> actual[2] >> actual[1] >> actual[0];
    std::cin >> expected[2] >> expected[1] >> expected[0];
    std::cout << (actual <= expected? 0 : std::max({
        10000 * (actual[0] > expected[0]),
        500 * (actual[1] - expected[1]),
        15 * (actual[2] - expected[2])
    }));
}