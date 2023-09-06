#! /bin/bash

easy() {
    if [ $# -eq 0 ]; then
        echo "please offer a parameter file to compile!"
        return 1
    fi

    echo "Welcome To C++ Easy !"
    cpp_file="$1"
    executable_name="${cpp_file%.*}"
 #   echo "File Name : $executable_name"
    echo "g++ -g $cpp_file -o $executable_name"
    echo "--------Program Run Bellow--------"
    gcc -g "$cpp_file" -o "$executable_name"
    if [ $? -eq 0 ]; then
        "./$executable_name"
    else
        echo "Program Execution failed!"
    fi
    echo "----------Program Ended-----------"
}

