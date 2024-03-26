#!/bin/bash
wget -P .. https://raw.githubusercontent.com/buyekeobare/alx-low_level_programming/master/0x18-dynamic_libraries/lib0-main.so
export LD_PRELOAD="$PWD/../lib0-main.so"
