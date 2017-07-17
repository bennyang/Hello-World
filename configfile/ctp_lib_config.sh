#!/bin/bash

#mkdir /home/ben/.lib

echo "/home/ben/.lib" >> /etc/ld.so.conf
echo "/usr/local/lib" >> /etc/ld.so.conf

#cp /home/ben/cpp/other/CTP_API/thostmduserapi.so /home/ben/.lib/
#cp /home/ben/cpp/other/CTP_API/thosttraderapi.so /home/ben/.lib/

ldconfig -v

#echo "export LD_LIBRARY_PATH=/home/ben/.lib$LD_LIBRARY_PATH" >> /home/ben/.bash.aliases


