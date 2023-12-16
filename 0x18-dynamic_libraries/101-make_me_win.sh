#!/bin/bash
wget -N -P /tmp/libhack.so https://github.com/MosabAboidrees/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=/tmp/libhack.so
