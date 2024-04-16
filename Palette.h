/*       _________  ____         ____        _________  _________  _________  _________
 		/   __   / /    \       /   /       /   _____/ /__    __/ /__    __/ /   _____/
       /   _____/ /  /\  \     /   /       /   __/       /   /      /   /   /   __/
      /   /      /	____  \   /   /_____  /   /____     /   /      /   /   /   /____
     /___/		/__/    \__\ /_________/ /________/    /___/      /___/   /________/  (1.0.0)
     Color options for text in C/C++ console.

/**************************************************************************************\
*   Copyright © 2024 OrbitX.Space. All rights reserved.								   *
*																					   *
*   This code, authored by Abhiram, is confidential and proprietary to OrbitX.Space.   *
*   Unauthorized reproduction, distribution, or disclosure of this code, in whole or   *
*   in part, is strictly prohibited. Any use of this code without the explicit written *
*   permission of OrbitX.Space may result in legal action. For licensing inquiries or  *
*   permission requests, please contact OrbitX.Space. 								   *
*																					   *														
\**************************************************************************************/
//	GitHub: https://github.com/OrbitX-Space
//  Discord: 
//  => Docs(BETA) can be found in https://github.com/OrbitX-Space/Palette.h page.


#ifndef PALETTE_ONE_ZERO_ZERO
#define PALETTE_ONE_ZERO_ZERO

#include <iostream>

using namespace std;

class TextColors
{

	struct COLORS {
		
		// General colors
		const string RESET_COLOR = "\033[0m";
		
		const string TXT_WHITE = "\033[1;37m";
		const string TXT_BLACK = "\033[30m";
		const string TXT_RED = "\033[31m";
		const string TXT_GREEN = "\033[32m";
		const string TXT_YELLOW = "\033[93m";
		const string TXT_BLUE = "\033[34m";
		const string TXT_MAGENTA = "\033[35m";
		const string TXT_CYAN = "\033[36m";
		const string TXT_ORANGE = "\033[33m";

		
		
		// Background colors
		const string BG_RED = "\033[41m";
		const string BG_GREEN = "\033[42;1m";
		const string BG_BLUE = "\033[44m";
		const string BG_ORANGE = "\033[48;5;208m";
		const string BG_BLACK = "\033[40m";
		const string BG_YELLOW = "\033[103m";
		const string BG_MAGENTA = "\033[45m";
		const string BG_CYAN = "\033[46m";
		const string BG_WHITE = "\033[47m";

	};
	COLORS palette;

public:

	void RESETcolor() {
		cout << palette.RESET_COLOR;
	}

	
	
	
	// Foreground color defs =>

	void printBLACK_TX(string text, bool nwln) {
		RESETcolor();
		cout << palette.TXT_BLACK;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printWHITE_TX(string text, bool nwln) {
		RESETcolor();
		cout << palette.TXT_WHITE;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printRED_TX(string text, bool nwln) {
		RESETcolor();
		cout << palette.TXT_RED;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printGREEN_TX(string text, bool nwln) {
		RESETcolor();
		cout << palette.TXT_GREEN;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printYELLOW_TX(string text, bool nwln) {
		RESETcolor();
		cout << palette.TXT_YELLOW;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printBLUE_TX(string text, bool nwln) {
		RESETcolor();
		cout << palette.TXT_BLUE;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printMAGENTA_TX(string text, bool nwln) {
		RESETcolor();
		cout << palette.TXT_MAGENTA;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}
	
	void printCYAN_TX(string text, bool nwln) {
		RESETcolor();
		cout << palette.TXT_CYAN;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printORANGE_TX(string text, bool nwln) {
		RESETcolor();
		cout << palette.TXT_ORANGE;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	
	
	
	// Background color defs =>

	void printBLACK_BG(string text, bool nwln) {
		RESETcolor();
		cout << palette.BG_BLACK << palette.TXT_WHITE;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}
	
	void printRED_BG(string text, bool nwln) {
		RESETcolor();
		cout << palette.BG_RED << palette.TXT_WHITE;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}
	
	void printGREEN_BG(string text, bool nwln) {
		RESETcolor();
		cout << palette.BG_GREEN << palette.TXT_WHITE;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printYELLOW_BG(string text, bool nwln) {
		RESETcolor();
		cout << palette.BG_YELLOW << palette.TXT_BLACK;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printBLUE_BG(string text, bool nwln) {
		RESETcolor();
		cout << palette.BG_BLUE << palette.TXT_WHITE;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printCYAN_BG(string text, bool nwln) {
		RESETcolor();
		cout << palette.BG_CYAN << palette.TXT_BLACK;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printMAGENTA_BG(string text, bool nwln) {
		RESETcolor();
		cout << palette.BG_MAGENTA << palette.TXT_WHITE;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printWHITE_BG(string text, bool nwln) {
		RESETcolor();
		cout << palette.BG_WHITE << palette.TXT_BLACK;
		cout << text;
		if (nwln == false) {

		}
		else
			cout << "\n";
	}

	void printORANGE_BG(string text, bool nwln) {
		RESETcolor();
		cout << palette.BG_ORANGE << palette.TXT_BLACK;
		cout << text;
		if (nwln == false) {
			
		}
		else 
			cout << "\n";
	}
};

TextColors TEXT;


#endif //PALETTE_ONE_ZERO_ZERO
