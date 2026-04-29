# ATM - Simulator
A simple program that lets you check you balance, deposit and, withdraw money from your virtual bank account.
Options in the program:-

1. Check Balance
2. Deposit money into your account.
3. Withdraw money from your account.
4. Exit the program.

The program does not let you deposit or withdraw negative amounts i.e., the amount entered has to be positive. The same way, the program wouldn't exit unless and until the user enteres option 4 (Exit).

Have fun playing with it!

How to compile
-----------------
Simply open VS code and import the project. Have Code Runner set up and the necessary C files set up in VS code to run without problem.

Installing C in Windows if not done
-------------------------------------
1. Go to msys2.org and download the application. After installation, open it and type the following - " pacman -S mingw-w64-ucrt-x86_64-gcc "
2. Check if install using " gcc --version ".
3. Go to msys2 folder on ur files explorer. Go to ucrt64 and copy the gcc location.
4. Go to Environment Variables and click path -> edit and paste the gcc location then and save.
5. Install Coderunners and other C extensions in VS code.