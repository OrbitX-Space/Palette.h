# Palette.h
<a href='https://twitter.com/OrbitX_Space?t=jEPMn_Dx5wny0qKDew298Q&s=08' target="_blank"><img alt='Twitter' src='https://img.shields.io/badge/OrbitX.Space-100000?style=flat&logo=Twitter&logoColor=white&labelColor=08a4f6&color=2f3136'/></a>
<a href='' target="_blank"><img alt='GitHub' src='https://img.shields.io/badge/GitHub-Passing-100000?style=flat&logo=GitHub&logoColor=white&labelColor=2b3838&color=2aae48'/></a>

Palette.h is a lightweight C++ library designed to simplify printing text with multiple colors on the console. With Palette.h, developers can easily enhance the visual presentation of their command-line applications by adding colors to text output. This library provides a straightforward interface for specifying colors, making it simple to incorporate vibrant and readable console output into any C++ project.<br>
***
### Output:
![example output](example.png)
***
### Docs:
1. Syntax:<br>
‎ ‎ ‎ `TEXT.print<COLORNAME>_<TEXTorBACKGROUND>("Your text", <0 or 1>);`<br>
‎ ‎ ‎ Ex: `TEXT.printRED_BG("FOO", 0);`<br>
‎ ‎ ‎ ‎ ‎ ‎  ‎ `TEXT.printBLUE_TX("FOO", 1);`<br>
3. `<COLORNAME>` = BLACK / RED / ORANGE / YELLOW / GREEN / BLUE / MAGENTA / CYAN / WHITE.<br>
4. `<TEXTorBACKGROUND>` = `TX` for text color & `BG` for background color.<br>
5. `0` or `1` boolean for next line ( if 1, it does this: `std::cout << "\n";` ).<br>
       `0` --> Same line<br>
       `1` --> Next line<br>
***
**Author: OrbitX.Space**
