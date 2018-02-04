#!/usr/bin/env python

from math import floor
from math import log


def _find_previous_power_of_two(num):
    k = floor(log(num) / log(2))
    return 2 ** k


def counter_game(num):
    total_turns = 0
    while (num > 1):
        # n is a power of 2
        if (num & (num-1)) == 0:
            num -= (num >> 1)
        else:
            next_p = _find_previous_power_of_two(num)
            num -= next_p
        total_turns += 1

    if total_turns % 2 == 0:
        return "Richard"
    return "Louise"


def main():
    t = int(input())
    for a0 in range(t):
        n = int(input())
        print(counter_game(n))


if __name__ == "__main__":
    main()
