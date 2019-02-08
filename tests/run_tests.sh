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

    # to run within container we need to specify correct SDL2_INCLUDE_DIR
    cmake -DSDL2_INCLUDE_DIRS=/home/downloads/SDL2-2.0.9/include ..;
    cmake --build .;
)
else
    echo "Could not move to dir ../02-sdl-dynamic">&2
    exit $?
fi

