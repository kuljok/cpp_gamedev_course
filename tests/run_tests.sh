echo "Build helloworld"
cd ../00-helloworld
(
 rm -r build; mkdir build; cd build; cmake ..; cmake --build .;
 ./helloworld > output.log;
 if grep -q "Hello, World!" ./output.log;
 then
     echo "OK"
 else
     echo "ERROR"
     exit 1
 fi
)
cd ../01-hellolib/helloapp
(
    rm -r build;
    mkdir build;
    cd build;
    cmake ..;
    cmake --build .;
    echo "Michael" | ./helloapp > output.log
    if grep -q "Hello, Michael!" ./output.log;
    then
	echo "OK"
    else
	echo "ERROR"
	exit 1
    fi
)
cd ../../02-sdl-dynamic
if [ $? -eq 0 ]
then
(
    rm -r build;
    mkdir build;
    cd build;
    cmake ..;
    cmake --build .;
)
else
    echo "Could not find the dir ../02-sdl-dynamic">&2
    exit $?
fi
cd ../02-sdl-static
if [ $? -eq 0 ]
then
    (
	rm -r build;
	mkdir build;
	cd build;
	cmake ..;
	cmake --build .;
    )
else
    echo "Could not find the dir ../02-sdl-static">&2
    exit $?
fi
cd ../03-sdl-gameloop
if [ $? -eq 0 ]
then
    (
	rm -r build;
	mkdir build;
	cd build;

	cmake -DSDL2_INCLUDE_DIRS=/home/downloads/SDL2-2.0.9/include ..;
	cmake --build .;
    )
else
    echo "Could not find the dir ../03-sdl-gameloop">&2
    exit $?
fi
