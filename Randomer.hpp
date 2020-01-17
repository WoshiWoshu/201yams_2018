/*
** EPITECH PROJECT, 2019
** yams
** File description:
** randomer.hpp
*/

#include <random>

class Randomer {

public:
    /*  ... some convenient ctors ... */

    Randomer(size_t min, size_t max, unsigned int seed = std::random_device{}())
        : _gen{seed}, _dist{min, max} {
    }

    // if you want predictable numbers
    void setSeed(unsigned int seed) {
        _gen.seed(seed);
    }

    size_t operator()(void) {
        return _dist(_gen);
    }
private:    
    // random seed by default
    std::mt19937 _gen;
    std::uniform_int_distribution<size_t> _dist;
};
