#!/usr/bin/env python


def acid_naming(an):
    is_hydro = an.startswith("hydro")
    is_ic = an.endswith("ic")
    if is_hydro and is_ic:
        return "non-metal acid"
    elif is_ic:
        return "polyatomic acid"
    else:
        return "not an acid"


if __name__ == "__main__":
    n = int(input().strip())
    for a0 in range(n):
        acid_name = input().strip()
        ans = acid_naming(acid_name)
        print(ans)
