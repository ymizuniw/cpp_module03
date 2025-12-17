#!/bin/bash

read -r -p "debug?[y/n]: " DEBUG
if [ $? != 0 ]; then
    exit 1
fi

if [ "$DEBUG" == "y" ]; then
    DFLAG="DEBUG=1"
else
    DFLAG="DEBUG=0"
fi

printf "==============================ex00=============================\n\n"
cd ex00 && make "$DFLAG" 1>/dev/null && ./test_without_messages.sh
printf "\n"
cd ..
printf "==============================ex01=============================\n\n"
cd ex01 && make "$DFLAG" 1>/dev/null && ./test_without_messages.sh
printf "\n"
cd ..
printf "==============================ex02=============================\n\n"
cd ex02 && make "$DFLAG" 1>/dev/null  && ./test_without_messages.sh
printf "\n"
cd ..
printf "==============================ex03=============================\n\n"
cd ex03 && make "$DFLAG" 1>/dev/null && ./test_without_messages.sh
printf "\n"
