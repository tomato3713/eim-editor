// 他のウィンドウを管理するクラス
#ifndef _INC_SCREENCLASS
#define _INC_SCREENCLASS

#include <ncurses.h>
#include <stdio.h>
#include <memory>
#include <vector>
#include "enum.h"
#include "BufferClass.h"
#include "CommandLineClass.h"

class EimEngineClass
{
	private:
		/* コマンドラインスクリーンのクラスを宣言 */
		CommandLineClass command_line = CommandLineClass( newwin(3, COLS, LINES-2, 0) );

		/* バッファ管理のためのコンテナを宣言 */
		/* get()メソッドを使って参照する必要がある。 */
		std::vector<std::unique_ptr<BufferClass>> buff_container_ptr;


		int active_buffer_number = 0;

	public:
		EimEngineClass();
		~EimEngineClass();

		int add_buffer();
		int split_window();
		int command_branch(int key);

};

#endif //INC_SCREENCLASS
