# 201yams_2018
2nd year mathematics computer science mini project.

USAGE

    ./201yams d1 d2 d3 d4 d5 c
           
DESCRIPTION

    d1 value of the first die (0 if not thrown)
    d2 value of the second die (0 if not thrown)
    d3 value of the third die (0 if not thrown)
    d4 value of the fourth die (0 if not thrown)
    d5 value of the fifth die (0 if not thrown)
    c expected combination
    
EXEMPLE

    ./201yams 0 0 0 0 0 yams_4
    > chances to get a 4 yams: 0.01%
    
    ./201yams 1 2 3 4 5 four_4
    > chances to get a 4 four-of-a-kind: 1.62%
    
    ./201yams 2 2 5 4 6 straight_6
    > chances to get a 6 straight: 16.67%
    
    ./201yams 0 0 0 0 0 full_2_3
    > chances to get a 2 full of 3: 0.13%
    
    
    ./201yams 2 3 2 3 2 full_2_3
    > chances to get a 2 full of 3: 100.00%
