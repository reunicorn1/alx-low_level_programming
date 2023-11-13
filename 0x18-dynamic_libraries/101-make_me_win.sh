#!/bin/bash
wget -q -P /tmp https://github.com/reunicorn1/alx-low_level_programming/raw/main/0x18-dynamic_libraries/mylibrary.so
export LD_PRELOAD=/tmp/mylibrary.so
