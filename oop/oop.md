Classes are declared as follows:
```
class a {
    new = (self: a) {
        ...
        return self
    }
}
```
Classes are created using the `.new` method. 
It must return an object of the class. All class methods are passed a `self` value,
which in `.new` is set to a new object of the class an in every other method is set to
the calling instance.