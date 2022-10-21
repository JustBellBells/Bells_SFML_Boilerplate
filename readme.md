# Bells' SFML Boilerplate

This is a very simplistic boilerplate for SFML that utilizes makefiles to compile using the g++ compiler.

## Requirements

- Bash shell
- MinGW-W64 11.2.0 or higher
- GNU Make 4.3 or higher

## Usage

`Make` will compile all c++ files within the src directory, outputting to the build directory and will launch the program.<br>
`Make compile` will *only* compile and not launch the program.<br>
`Make run` will *only* launch the program, without recompiling.<br>
`Make clean` will clean the build directory of any executables.<br>