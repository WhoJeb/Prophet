# gcc src/main.cpp -Wall -o test

EXE="prophet"

cmake .

make

./$EXE
