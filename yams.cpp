/*
** EPITECH PROJECT, 2019
** yams_201
** File description:
** yams
*/

#include <array>
#include <iostream>
#include "Randomer.hpp"

int fact(int a) {
    int resultat = 1;

    while (a > 0) {
        resultat = resultat * a;
        a = a - 1;
    }
    return resultat;
}

int coeffNewton(int z, int y)
{
    if (z <= y or y == 0)
        exit(0);
    int c = ((fact(z)) / ((fact(y)) * (fact(z - y))));

    return c;
}

int myPow(int n, int k) //nombre de cas possible, changer k si besoin c.a.d nb dé
{
    int res = 1;

    for (int i = 1; i <= k; ++i) {
        res*=n;
    }
    return res;
}

int nFavor(int n, int k) //avec n dés trouver k fois au moin le même nombre.
{
    int res = 1;

    if (k > n) {
        std::cout << "Error: k > n" << std::endl;
        exit(84);
    }
    for (int i = n - 1; i >= k; i--) {
        res+=coeffNewton(n, i) * myPow(5, n - i);
    }
    return res;
}

double proba(int n, int k) // n = nombre de dé et k = au moins k fois la meme valeur
{
    return ((double)nFavor(n, k) / (double)myPow(6, n));
}

//full house, faire 2 fois le calculc , puis multiplié les 2 et ensuite multiplié par 5
//

int main(void)
{
    // double result = proba(5, 3) / 24;
    double result = proba(5, 3);
    std::cout << proba(5, 3) * proba(2, 2) * 100 << std::endl;
    //Randomer randomer{1, 6};
    // double resultat = (double)nFavor(3, 3) / double(myPow(6, 3));
    // double resultat2 = (double)nFavor(5, 3) / double(myPow(6, 4));
    //std::cout << (double)nFavor(4, 3) / double(myPow(6, 4)) * 100 << std::endl;
    //proba d'avoir
}

// int main(void)
// {
//     // Randomer randomer{1, 6};
//     // size_t nb = 0;
//     // const int nTotal = 10000000;
//     // std::array<size_t, 5> dice{{0, 0, 0, 0, 0}};

//     // for (int i = 0; i < nTotal; ++i) {
//     //     for (int size = 0; size < 5; ++size)
//     //         dice.at(size) = randomer();
//     //     int tmp2 = 0;
//     //     int tmp3 = 0;
//     //     for (size_t j = 0; j < 5; ++j) {
//     //         //dice[j] == 4 ? nb++ : 1;
//     //         dice[j] == 2 ? tmp2++ : 1;
//     //         dice[j] == 3 ? tmp3++ : 1;

//     //         // for (size_t f = j + 1; f < 5; f++) //pair of 4
//     //         // {
//     //         //     //(dice[j] == 4 && dice[f] == 4) ? nb++ : 1; // pair of 4
//     //         //     for (size_t b = f + 1; b < 5; b++) {
//     //         //         (dice[j] == 4 && dice[f] == 4 && dice[b] == 4) ? nb++ : 1; //three of 4
//     //         //     }
//     //         // }
//     //     }
//     //     if (tmp2 == 3 and tmp3 == 2)
//     //         nb++;
//     //     //for (size_t c = 0; c < 5; c++)
//     //     //    (dice.at(c) == 4 && dice.at(c + 1) == 4) ? nb++ : 1;
//     //     // (dice[0] == 4 and dice[4] == 4) or
//     //     // (dice[1] == 4 and dice[2] == 4) or
//     //     // (dice[2] == 4 and dice[3] == 4) or
//     //     // (dice[3] == 4 and dice[4] == 4) ? nb++ : 1;
//     //     // (dice[0] == 4 and dice[2] == 4) or
//     //     // (dice[0] == 4 and dice[3] == 4) or
//     //     // (dice[0] == 4 and dice[4] == 4) or
//     //     // (dice[1] == 4 and dice[3] == 4) or
//     //     // (dice[1] == 4 and dice[4] == 4)
//     //     // (dice[2] == 4 and dice[4] == 4) ? nb++ : 1;
//     // }
//     // std::cout << (nb * 100.) / nTotal << std::endl;
//     // //std::cout << randomer() << "\n";
// }
