#!/bin/bash
wget -P / tmp https://raw.githubusercontent.com/Sendo-A/raw/master/alx-low_level_programming/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=tmp/libgiga.so
