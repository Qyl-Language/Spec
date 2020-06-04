# Decisions
By tree5673

If statements
```
i = int 5
j = int 2

// I think := looks nicer, but == can work too

if i == 5
{
	code
}
```
If statements are just defined as an expression followed by code. else statements are the same:
```
if i == 5 {
    ...
} else {
    ...
}
```
Thus, you write an else-if statement by doing `else if expr { ... }`.