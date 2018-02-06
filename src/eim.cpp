#include <ncurses.h>
#include <locale.h>
#include <vector>
#include <memory>
#include "../include/enum.h"
#include "../include/BufferClass.h"
#include "../include/CommandLineClass.h"
#include "../include/EimEngineClass.h"

int main(int argc, char *argv[])
{
		EimEngineClass * eimEngine = new EimEngineClass();

		int key; // 入力キーを保持するための変数

		// main loop
		while (true)
		{
				key = getch(); //キー入力
				eimEngine->command_branch(key);
		}

		delete eimEngine;
		return 0;
}