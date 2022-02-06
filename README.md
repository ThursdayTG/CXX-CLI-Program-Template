# template-cpp-console_program
A template that I have created for CLI programs written in C++.

By the time of writing this (2022-02-06), I haven't yet really gotten into makefiles and systems like CMake (partly because CMake's documentation is *really* not noob-friendly). Currently I'm using the GNU compiler with a bash alias. The full command I run by default is `g++ -std=c++20 -Wall -Wextra -Wpedantic -Werror -fdiagnostics-color`. Usually I tend to forget using O-levels, lol

My ruleset for empty lines:
 - no empty lines (i.e. no separation) for lines that are directly related
 - 1 empty line to separate lines that are not directly related but belong to the same segment 
 - 2 empty lines to separate entire segments in- OR outside of functions
 - 2 empty lines to separate related function declarations
 - 4 empty lines to separate unrelated function declarations AND the main function
