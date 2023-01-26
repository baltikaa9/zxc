#include <iostream>
#include <windows.h>
#include <SFML/Audio/Music.hpp>

sf::Music music;

int main() {
    music.openFromFile("C:/Users/serge/zxc/audio/zxc.ogg");
//    music.openFromFile("audio/zxc.ogg");
    music.play();
    Sleep(2900);
    for (int i = 1000; i > 0; i -= 7) {
        std::cout << i << " - 7" << std::endl;
        Sleep(50);
    }
    std::cout << "\n\n                                                   \n"
             "                                                  @@@  @@@  @@@@@@@@@@   \n"
             "                                                  @@@   @@  @@@@@@@@@@@  \n"
             "                                                  @@!  @!   @@! @@! @@!  \n"
             "                                                  !@!       !@! !@! !@!  \n"
             "                                                  !!@       @!! !!@ @!@  \n"
             "                                                  !!!       !@!   ! !@!  \n"
             "                                                  !!:       !!:     !!:  \n"
             "                                                  :!:       :!:     :!:  \n"
             "                                                   ::       :::     ::   \n"
             "                                                  :          :      :    \n"
             "                                                                         \n"
             "                                                                                       \n"
             "                                     @@@@@@@@  @@@  @@@   @@@@@@   @@@  @@@  @@@       \n"
             "                                    @@@@@@@@@  @@@  @@@  @@@@@@@@  @@@  @@@  @@@       \n"
             "                                    !@@        @@!  @@@  @@!  @@@  @@!  @@@  @@!       \n"
             "                                    !@!        !@!  @!@  !@!  @!@  !@!  @!@  !@!       \n"
             "                                    !@! @!@!@  @!@!@!@!  @!@  !@!  @!@  !@!  @!!       \n"
             "                                    !!! !!@!!  !!!@!!!!  !@!  !!!  !@!  !!!  !!!       \n"
             "                                    :!!   !!:  !!:  !!!  !!:  !!!  !!:  !!!  !!:       \n"
             "                                    :!:   !::  :!:  !:!  :!:  !:!  :!:  !:!   :!:      \n"
             "                                     ::: ::::  ::   :::  ::::: ::  ::::: ::   :: ::::  \n"
             "                                     :: :: :    :   : :   : :  :    : :  :   : :: : :  \n"
             "                                                                                       \n"
                 "\n\n\n\n";
    while (true) {
        if (music.getStatus() != 2) {
            music.openFromFile("C:/Users/serge/zxc/audio/toxin.ogg");
//            music.openFromFile("audio/toxin.ogg");
            music.play();
            music.setLoop(true);
            break;
        }
    }
    system("pause");
}