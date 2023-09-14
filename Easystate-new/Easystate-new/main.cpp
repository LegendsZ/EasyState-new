#include <windows.h> //console stuff
//#include "GameManager.h"
#include "Window.h"
#undef main

#define VERSION 1.0.0.0

int main() {
	ShowWindow(GetConsoleWindow(), SW_SHOW);
	//GameManager::Initialize();
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	//GameManager::Run();
	ShowWindow(GetConsoleWindow(), SW_SHOW);
	//GameManager::Terminate();
	return 0;
}