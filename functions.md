# Functions

## Idea for function arguments
By tree5673
```
func a(int: i, j, float: k, l)
{ // Arguments with repetative types are simplified

}

// func can be replaced by anything

// some ideas are fn, def, defun, define

// one line functions

func b(int: a, int b) print(a + b);
```
func a(int: i, )

# Variables #

Qyl is a statically and strongly typed language, meaning variables must be given one type, which does not change.

Variables are declared using a typecast:
```
a = int 5
```

This typecast determines the type of the variable. If a variable has already been set, it can be reassigned without 
another typecast. However, since Qyl is strongly typed, the value that is assigned to it must be of its type.

Functions in Qyl are easy to create and follow the normal variable syntax.

The syntax goes as follows:
```
a = (int, int) -> int {
    ...
}
```