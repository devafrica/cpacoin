// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt =  "\n                                                                               \n"
"    ____                  _        ____                _     __      _             \n"
"   / ___|_ __ _   _ _ __ | |_ ___ |  _ \ __ _ _   _   / \   / _|_ __(_) ___ __ _   \n"
"  | |   | '__| | | | '_ \| __/ _ \| |_) / _` | | | | / _ \ | |_| '__| |/ __/ _` |  \n"
"  | |___| |  | |_| | |_) | || (_) |  __/ (_| | |_| |/ ___ \|  _| |  | | (_| (_| |  \n"
"   \____|_|   \__, | .__/ \__\___/|_|   \__,_|\__, /_/   \_\_| |_|  |_|\___\__,_|  \n"
"            |___/|_| CPA v 3.1 Hardfork         |___/                              \n"
"                                                                                   \n";


const std::string nonWindowsAsciiArt = 

"\n                                                                                 \n"
"    ____                  _        ____                _     __      _             \n"
"   / ___|_ __ _   _ _ __ | |_ ___ |  _ \ __ _ _   _   / \   / _|_ __(_) ___ __ _   \n"
"  | |   | '__| | | | '_ \| __/ _ \| |_) / _` | | | | / _ \ | |_| '__| |/ __/ _` |  \n"
"  | |___| |  | |_| | |_) | || (_) |  __/ (_| | |_| |/ ___ \|  _| |  | | (_| (_| |  \n"
"   \____|_|   \__, | .__/ \__\___/|_|   \__,_|\__, /_/   \_\_| |_|  |_|\___\__,_|  \n"
"            |___/|_| CPA v 3.1 Hardfork         |___/                              \n"
"                                                                                   \n";


/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif


