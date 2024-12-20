# Examples of Data Types and Concepts in JavaScript and C++

## 1. Primitive Data Types

### Code:
```javascript
let num = 42;           // Number
let pi = 3.14;          // Float (treated as a number)
let char = 'A';         // String used for characters
let isValid = true;     // Boolean

console.log(num, pi, char, isValid);
```

### Description:
JavaScript has the following primitive data types: `number`, `string`, `boolean`, `undefined`, `null`, `bigint`, and `symbol`.

### Output:
```
42 3.14 A true
```

---

## 2. Character String Types

### Design Issues:
1. Strings in JavaScript are immutable.
2. Built-in operations: concatenation, slicing, length checking, etc.

### Code:
```javascript
let name = "Apurba";
let greeting = "Hello, " + name;  // Concatenation
console.log(greeting);

let length = name.length;         // Length of string
console.log(`Length of the string: ${length}`);

let sliced = name.slice(0, 4);    // Slicing
console.log(`Sliced string: ${sliced}`);
```

### Output:
```
Hello, Apurba
Length of the string: 6
Sliced string: Apur
```

---

## 3. Enumeration Types

### Description:
JavaScript doesn't have a built-in `enum` type, but you can use objects to simulate enumerations.

### Code:
```javascript
const Day = {
    MONDAY: 0,
    TUESDAY: 1,
    WEDNESDAY: 2,
    THURSDAY: 3,
    FRIDAY: 4,
};

let today = Day.WEDNESDAY;

if (today === Day.WEDNESDAY) {
    console.log("It's Wednesday!");
}
```

### Output:
```
It's Wednesday!
```

---

## 4. Array Types

### Design Issues:
1. Arrays in JavaScript are dynamic; you don't need to specify their size.
2. Arrays are zero-indexed.

### Code:
```javascript
let arr = [1, 2, 3, 4];  // Dynamic array
console.log(arr[0]);     // Accessing the first element
arr.push(5);             // Adding an element
console.log(arr);        // [1, 2, 3, 4, 5]
```

### Output:
```
1
[1, 2, 3, 4, 5]
```

---

## 5. Record Types

### Description:
Records in JavaScript can be implemented using objects.

### Code:
```javascript
let person = {
    name: "Apurba",
    age: 30
};

console.log(person.name, person.age);
```

### Output:
```
Apurba 30
```

---

## 6. Union Types

### Description:
JavaScript doesn’t support `union` types explicitly, but we can achieve similar functionality using objects or dynamic typing.

### Code:
```javascript
let data;  // Can hold multiple types

data = 42;         // Storing a number
console.log(data);

data = "Hello";    // Storing a string
console.log(data);

data = { name: "Alice" };  // Storing an object
console.log(data);
```

### Output:
```
42
Hello
{ name: 'Alice' }
```

---

## 7. Pointers in C++

### Design Issues:
1. Are pointers strongly typed?
2. Should arithmetic on pointers be allowed?

### Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* ptr = &x;

    cout << "Pointer value: " << *ptr << endl;  // Dereferencing
    return 0;
}
```

### Output:
```
Pointer value: 42
