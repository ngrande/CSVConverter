# CSVConverter
A .csv converter written in C++

This project was initialized due to the fact that my exported .csv file from my outlook.com contacts was not compatible with the .csv for the mozilla thunderbird mail client.
The goal of this project is to read a .csv file and convert it to another .csv format. For example: the exported .csv from outlook.com uses "E-mail Address" and "E-mail 2 Address" but the thunderbird .csv file uses "Primary Email" and "Secondary Email". The converter will read the source format and match it to the destination format.

In a nutshell: it converts one .csv file to another .csv file but with different value names.
