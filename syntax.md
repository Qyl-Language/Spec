# Variables #

```
type name = value
```

## Functions ##

```
name = (type1 arg1, type2 arg2) -> returntype {
    code
}
```

Syntatic sugar for parameter types:
```
name = (type arg1, arg2)
```
In that case, args 1 and 2, are both of the same type.

```
name(a, b)
```

## Arrays ##


```
type[optional-Length] name = [a, b, c]
```

## Dictionaries ##

```
name = <keytype, valuetype> { key => value, key2 => value2 }
```

## Classes ##

```
class name {
	type classvar = optional-value

	new (type arg1, type2 etc) {
		initialize-values;
	}
}
```

## Objects ##

```
object = name.new()
```

## Struct Literals ##

```
name = {
    method = (type a, type b) -> returntype { },
    variable = type value
}
```

## Structs ##

```
struct name {
    (type a, type b) returntype method
    type variable
}

b = name{{ }, 5}
```

## Namespaces ##

```
namespace name {
  // Comments

  // Classes and Functions go here
}
```

## Importing ##

```
import * from stdio except out, in
```

SF alternate
```
out = import from stdio
```