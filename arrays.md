# Arrays

`name = [<type> a, b, c]`

`name = [<type> [<type> a, b, c], [<type> a, b, c]]`



Qyl Arrays may be of multiple dimensions ( eg. One, Two and Three Dimensions. )


# Alternative by tree5673

The < and > operators cound be harder on the interpreter if they are given to many meanings

`name = int[len] [1,2,a,b]` is an array

Length can be left blank and the length can be assumed by the compiler.

`int[len]` is a type

### Multidimentional Arrays

```
name = int[len0][len1] = [1,2,3],[4,6,6]

// Subscript operator "[]"

print(name[0][1])
```

### Built in methods/functions for arrays

index_of() // loops through the list and returns location of a particular item
May need C++ bindings

Arrays are heap allocated by the interpreter.