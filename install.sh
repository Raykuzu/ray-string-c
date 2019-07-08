make &&
cp -r ./include/ray/ /usr/local/include/ &&
cp ./libraystring.so /usr/local/lib/ &&
cp ./conf/ray.conf /etc/ld.so.conf.d/ &&
ldconfig &&
make fclean
