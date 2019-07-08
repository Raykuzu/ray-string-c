make re -C .. &&
make clean -C .. &&
cp ../libraystring.so . &&
make re &&
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. $1 ./stringtests &&
make clean