#include <stdio.h>
#include <conio.h>

#include <windows.h>

  void pressEnter() {
    INPUT ip;
    ip.type = INPUT_KEYBOARD;
    ip.ki.time = 0;
    ip.ki.dwFlags = KEYEVENTF_UNICODE;
    ip.ki.wScan = 'a'; //VK_RETURN is the code of Return key
    ip.ki.wVk = 0;

    ip.ki.dwExtraInfo = 0;
    SendInput(1, &ip, sizeof(INPUT));
}

int main (int argc, char **argv){
    INPUT in;
    WORD key;
    while(1) {
        pressEnter();
    }
    return 0;
}