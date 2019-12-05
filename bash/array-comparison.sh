#!/bin/bash

# declare the array values

a=( 3 5 8 10 6 )
b=( 6 5 4 12 )
c=( 14 7 5 7 )

for x in ${a[@]}; do
    in=false
    for y in ${b[@]}; do
        if [[ $x -eq $y ]]; then
            z[${#z[@]}]=$x
        fi
    done
done

for x in ${c[@]}; do
    in=false
    for y in ${z[@]}; do
        if [[ $x -eq $y ]]; then
            m[${#z[@]}]=$x
        fi
    done
done

echo ${m[@]}
