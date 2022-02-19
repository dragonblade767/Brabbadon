# Brabbadon
A C++ library with helpful stuff

For now it's being made only for qmake projects.

<h1>Contents:</h1>
Library is structures in a folder-like manner with all related topics being under specific nested namespaces. It consists of a few main branches:

- SFML++ (Easier usage of SFML components)
  - Audio
  - Graphics
    - Button
    - Fonts
    - Sprite
    - Text
    - Textbox
  - Network
  - UI
    - Graph
    - Prompt
    - Screen
    - Table
- Core (Core of the library. Contains maths, file handling and such)
  - Constants
  - File Handling
  - Maths
    - Random number int/float/doube
    - Min number in vector int/float/double
    - Max number in vector int/float/double
    - Swap numbers int/float/double
    - Factorial
    - Vector2 class int/float/double
    - Matrix class
    - Complex number class
  - Time
- Mongo (Database creation/connections/usage)

Usage
To use any component in the library all you need to do after library installation is call it from the namespace.
eg.
Brabbadon::Core::Maths::Matrix -> a class that eases the usage of matrix like variables or groups of variables with handy inbuilt functions.
Brabbadon::Core::Maths::Matrix matrixName;

These namespace paths might become a pain to use constantly thus i suggest either add 'using namespace Brabbadon::Core::Maths;' or just simply use a variable instead auto path = Brabbadon::Core::Maths, and then just
path::Matrix if you were to be using multiple sections of the library.

Installation
1. Download project files.
2. Move them to your debug folder.
3. Copy Assets folder and libary files and put them in build folder.
4. In qmake config file add this code:
