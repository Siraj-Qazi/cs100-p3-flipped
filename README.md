# Project 3: Flipped

### Description

This is C Programming Project 3 of a CS 100 Computer Science I For Majors course that I took as practice for string manipulation and formatted output etc. in C.

### Prerequisites

```
 C11
```

### Building and Running

Compile with gcc:

```
gcc flipped.c -o flipped
```

To execute:

```
./flipped
```

### Project Requirements (from PDF)

This project takes text (strings) and outputs the text flipped with specified justification.
The text will be printed right to left on right-justified lines of a given width. As an example,
consider the input:
```Hello there! General Kenobi... You are a bold one!```
This text flipped is:
```!eno dlob a era uoY ...iboneK lareneG !ereht olleH```

Two sample executions of the program using I/O redirection are shown below. The `stdout`
redirect is optional, but may be useful for testing. The last line of numbers is the column
numbers and needs to be in your output. Your output should match the example output exactly.
All input must be from `stdin` and all output must be to `stdout`.

![sample1](/samples/sample1.png)
![sample2](/samples/sample2.png)

#### Notes
 -The input will be the line width (int) followed by words (strings).
 -You can assume there will only be a single space between input strings.
 -No word (string of text) in the input will be longer than the line width.
 -The line width will be between 10 and 100 (inclusive).
 -There is no limit on the amount of words that will be in the text.
 -Make sure the generated input and output end with an empty line (a common standard).
 -Make sure that you include a header block of comments with your name and a brief overview of the program.
 -It is highly advised to use I/O redirection as done in the examples.
 
## Built With

* [CLion](https://www.jetbrains.com/clion/) - A cross-platform IDE for C and C++

## Authors

* **Siraj Qazi**

## License

This project is licensed under the GNU General Public License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

 - [PurpleBooth](https://github.com/PurpleBooth) for the simplistic README template.
