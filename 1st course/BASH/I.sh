#!/bin/bash
read str
echo "scale = 3; $str" | bc
