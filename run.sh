BUILD_DIRECTORY=build

clear

if [ ! -d "$BUILD_DIRECTORY" ]; then
	mkdir $BUILD_DIRECTORY
fi

cd $BUILD_DIRECTORY
echo $'\n'
cmake -DCMAKE_BUILD_TYPE=Release ..
echo $'\n'
cmake --build .
cd ..
echo $'\n'
./$BUILD_DIRECTORY/projects/CppTest/CppTest
echo $'\n'
