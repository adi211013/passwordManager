#include <iostream>
#include <print>
#include "logic.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int choice;
    std::string args[3]={"1. Dodaj dane","2. Odczytaj dane","3. Wyjdz"};
    while (1) {
        std::print("{}\n{}\n{}\n", args[0], args[1], args[2]);
        std::cin>>choice;
        switch(choice) {
            case 1:
                addData();
                break;
            case 2:
                showData();
                break;
            case 3:
                exit(0);
                break;
            default:
                clearConsole();
                std::print("Nieprawidlowe dane\n");
                break;
        }
    }

    return 0;// TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}