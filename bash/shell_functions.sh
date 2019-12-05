#!/bin/bash

function ENGLISH_CALC {
    STRING=${1[@]/plus/'+'}

    echo $STRING
}

ENGLISH_CALC "3 plus 5"