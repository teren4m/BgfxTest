
#!/bin/bash

sudo apt install libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-ttf-dev libgl1-mesa-dev x11proto-core-dev libx11-dev
git submodule update --init --recursive
cd bgfx
make linux-debug64 
mkdir bin
