# C++ Game Development Course

> This repository contains mostly my homework but thoughs and some experiments as well

<img src="http://mranderson.name:8111/app/rest/builds/buildType:(id:CppGamedevCourse_Build)/statusIcon"/>

## Development Setup

Each directory contanins CMakeLists.txt file which is intended to build this particular project. Just follow the steps below to build any project.

```sh
cd <project_src_dir>
mkdir build
cd build
cmake ..
cmake --build .
```
Use 

```sh
./format.sh
```
to format all your .cpp and .h files in a right way. If you don't, it's done by CI after evety commit.

The **tests** directory contains the script for CI. 
This script is supposed to be updated every time when some new project is added. 
