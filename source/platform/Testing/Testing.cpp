#include<windows.h>

int WINAPI WinMain(HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nShowCmd)
{

    MessageBox (NULL,
        "hello world fuck you",
        "fuck you window",
        MB_ICONEXCLAMATION | MB_OK);
    return 0;
}
