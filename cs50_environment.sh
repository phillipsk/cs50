#!/bin/sh
# CS50 library installation for Ubuntu per https://manual.cs50.net/library/#debian_ubuntu
apt-get install gcc
wget http://mirror.cs50.net/library50/c/library50-c-5.zip
unzip library50-c-5.zip
rm -f library50-c-5.zip
cd library50-c-5
gcc -c -ggdb -std=c99 cs50.c -o cs50.o
ar rcs libcs50.a cs50.o
chmod 0644 cs50.h libcs50.a
mkdir -p /usr/local/include
chmod 0755 /usr/local/include
mv -f cs50.h /usr/local/include
mkdir -p /usr/local/lib
chmod 0755 /usr/local/lib
mv -f libcs50.a /usr/local/lib
cd ..
rm -rf library50-c-5

# personalized functions && aliases
echo "
# personalized alias and function to navigate to directory problem sets
# rt 3 # pushes to pset/3 directory
alias rt=myfunction2
myfunction2() {
pushd /cs50/pset/$1\/
}

# gcc complier adjusted to C99 version and linked to CS50 library for ease of use
# gg foobar.c # makes a makefile for filename.c and further compiles and executres ./foobar through a one line two character command
alias gg=ggc_alias
ggc_alias() {
gcc $1 -std=c99 -pedantic-errors -lcs50 -o "${1%.*}" && ./"${1%.*}";
 }
" >> .bash_aliases
