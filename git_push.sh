#!/bin/bash

read -r -p "remote: " REMOTE
if [ $? != 0 ]; then
    exit 1
fi

read -r -p "branch: " BRANCH
if [ $? != 0 ]; then
    exit 1
fi

read -r -p "commit message: " MSG
if [ $? != 0 ]; then
    exit 1
fi

read -r -p "push?[y/n]: " PUSH
if [ $? != 0 ]; then
    exit 1
fi

if [ "$PUSH" != "y" -a "$PUSH" != "Y" ]; then
    printf "%s\n" "request not accepted. remote is not updated"
    exit 1
fi

git add .
git commit -m "$MSG"
git push "$REMOTE $BRANCH"