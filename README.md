![42banner](https://github.com/user-attachments/assets/842eb8b3-406b-4eb2-b257-1133cdb59218)

# 42_libft

The aim of this project is to code a C library regrouping standard functions that we'll be allowed to use in future 42's projects.
We have to code functions from:
- <ctype.h> library
- <stdlib.h> library
- <strings.h> library
- <string.h> library
- <math.h> library
- other non-standard functions

For detailed information, refer to [the subject of this project](https://github.com/frenzla/42_libft/blob/main/en.subject.pdf).

Part of my coding mastering journey 🥷


## 42

[42 is a world class computer programming school](https://42.fr/en/homepage/) that proposes a new way of learning computer science:
- No teachers
- No classrooms
- Open 24/7, 365 days/year
- Students are trained through peer-to-peer pedagogy, and project-based learning.
- Methodology that develops both tech & life skills.
- The 42 cursus is free for whoever is approved in its selection process.


## How to Install and Run the Project 

`make` without bonus functions.

`make bonus` to compile with bonus functions.


## How to Use

To compile the library, run:

```shell
$ cd path/to/libft && make
```

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```

## Testing

The repo includes 3 third-party testers to test each function.

* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)

Run `make f` and/or `./run_test` when inside the repo's directory.

* [Night-squad/libft-war-machine-v2019](https://github.com/Night-squad/libft-war-machine-v2019)

Go to the directory where libft-war-machine is cloned and run the script `bash grademe.sh` or simply run the script with the path `bash /path/where/grademe.sh/is/cloned`

* [Tripouille/libftTester](https://github.com/Tripouille/libftTester)

Go to the directory where libftTester is cloned and:
`make m` = launch mandatory tests
`make b` = launch bonus tests
`make a` = launch mandatory tests + bonus tests
