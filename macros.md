# Macros #

A large portion of the Qyl syntax is defined using macros. These are much more powerful than in other languages, and in
effect allow you to redefine the whole syntax. For example, to declare a macro for coefficients, one might do

```
macro name
    number($a) name($b) =
    $a * $b
end
```

***A macro can never be named the same as another pre-existing variable*** doing so will result in an error being thrown.