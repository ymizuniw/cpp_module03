#!/bin/bash

./test02 | grep -v "constructor" | grep -v "destructor" | grep -v "Constructor" | grep -v "Destructor"