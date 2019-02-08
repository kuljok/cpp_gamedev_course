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
pwd
cd ../02-sdl-dynamic
(
    rm -r build;
    mkdir build;
    cd build;
    cmake ..;
    cmake --build .;    
)
