# _PRINTF

_printf is an imitation of the original function printf. 

## Getting Started

Get a copy of this feature so you can test it on your local machine.
You can clone this repository.

### Prerequisites

You need to work in the C programming language.
You need all the files in this repository

### Installing

Download file from the repository or clone it
move all files to the folder where you want to use this function
compile or call this function as required

## Running the tests

######create a main.c with the next code

#######include <limits.h>
#######include <stdio.h>
#######include "holberton.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    return (0);
}

Then compile with the next code

gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c -o test | ./test

The test output should be as follows

Let's try to printf a simple sentence.
Let's try to printf a simple sentence.

### And coding style tests

## Built With

*emacs
*ubuntu 14.0
*github

## Contributing

This is a repository for your contribution

https://github.com/ricarhincapie/printf

## Authors

* **Ricardo Hincapie** - ** - **Javier Jaramillo** *

See also the list of [contributors](https://github.com/ricarhincapie/printf) who participated in this project.

## License

This project is licensed under the free software

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc

