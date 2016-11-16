#!/bin/bash
#
#	MIT License
#
#	Copyright (c) 2016 Johnathan Fercher
#
#	Permission is hereby granted, free of charge, to any person obtaining a copy
#	of this software and associated documentation files (the "Software"), to deal
#	in the Software without restriction, including without limitation the rights
#	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
#	copies of the Software, and to permit persons to whom the Software is
#	furnished to do so, subject to the following conditions:
#
#	The above copyright notice and this permission notice shall be included in all
#	copies or substantial portions of the Software.
#

DISTRO=`lsb_release -si`
RELEASE=`lsb_release -sr`
ARCHITECTURE=`uname -m`

INSTALL_UBUNTU_16_04 () {
    sudo apt-get update && apt-get upgrade

    sudo apt-get install pkg-config

    sudo apt-get install gcc g++ lua5.3 rustc monodevelop php php-cli openjdk-9-jdk rustc
}

INSTALL_UBUNTU_14_04 () {

}

INSTALL_DEBIAN_8_5 () {

}

INSTALL_DEBIAN_8_2 () {

}

INSTALL () {
    if [[ "$DISTRO" == "Ubuntu" ]]; then
        if [[ "$RELEASE" == "16.04" ]]; then
            INSTALL_UBUNTU_16_04;
        else
            if [[ "$RELEASE" == "14.04" ]]; then
                INSTALL_UBUNTU_14_04;
            else
                echo "Ubuntu Unknown";
            fi 
        fi    
    else
        if [[ "$DISTRO" == "Debian" ]]; then
            if [[ "$RELEASE" == "8.5" ]]; then
                INSTALL_DEBIAN_8_5;
            else
                if [[ "$RELEASE" == "8.2" ]]; then
                    INSTALL_DEBIAN_8_2;
                else
                    echo "Debian Unknown";
                fi
                
            fi     
        else
            echo "Linux Unknown"
        fi
    fi
}

INSTALL;
