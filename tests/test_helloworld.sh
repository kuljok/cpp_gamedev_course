echo "Build helloworld"
cd ../00-helloworld
(rm -r build; mkdir build; cd build; cmake ..; cmake --build .;
 echo "Run Tests";
 pwd;
 rm output.log;
 ./helloworld > output.log;
 if grep -q "Hello, World!" ./output.log;
 then
     echo "OK"
 else
     echo "ERROR"
     exit 1
 fi
)
