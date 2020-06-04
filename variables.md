# Variables

Qyl is a statically and strongly typed language, meaning variables must be given one type, which does not change.

Variables are declared using a typecast:
```c
a = int 5
```

This typecast determines the type of the variable. If a variable has already been set, it can be reassigned without another typecast. However, since Qyl is strongly typed, the value that is assigned to it must be of its type.


In contrast to languages like C, where you can do implicit type casting like so:

```c
int x = 4.2;
```

Without an error, you will need to use a specific operator to automaticially type cast.

See more in operators and type casting.

<!-- What should the operator be? -->