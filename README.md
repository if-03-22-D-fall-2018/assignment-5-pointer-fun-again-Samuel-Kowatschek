## IF.03.01 Procedural Programming
# Assignment Pointer Fun Again

## Objective
This assignment lets you practise the usage of structs, arrays and pointers to structs.

## Materials
- Atom or any other editor
- gcc
- terminal.

## Required Tasks
1. Create a file called `pointer_fun_again.c`.
1. Define a struct called `PlayStruct` with the following fields:
   - `int_value` of type integer
   - `double_value` of type double
   - `a_string` of type string (array of `char` of the length `64`)
1. Write a `main` function which declares
   - a struct `play_struct` of type `PlayStruct`
   - a pointer to a `PlayStruct` called `play_struct_pointer`

3. Assign some values to the variables (you may do this already while declaring the variables). Take care how to assign a value to the pointer. What is useful/possible there?

2. Define a function `print_struct` which accepts the following paramters
   - a struct `PlayStruct` called `ps`
   - a pointer to a `PlayStruct` called `pps`

   The function shall print both parameters in the following form:
   - `Values of struct ps: <x>, <y>, <z>` where `<x>`, `<y>` and `<z>` shall be replaced by the actual values of the struct's fields passed to the function.
   - `Values of struct pps: <x>, <y>, <z>` where `<x>`, `<y>` and `<z>` shall be replaced by the actual values of the struct's fields passed to the function. Take care that here also the values are required to be printed although the address to `pps` is passed to the function.

4. Call the function `print_struct` in the `main` function and test your implementation.

5. Define a function `change_struct` which accepts the same parameters as `print_struct`. In the function body the values of the two parameters shall be changed to some different values.

6. Call the function `change_struct` and then again call `print_struct` at the end of the `main` function. Which values are changed, which are not? Why? Describe this briefly in a comment right after the call of your function.

7. Define a function `print_string` which accepts a string parameter `string_to_print` and prints the content of the string into the terminal.

7. Call the function `print_string` and pass it the field `a_string` of the variable `play_struct`. Test your implementation.

7. Define a function `change_string` which accepts two parameters, a string `string1` and a pointer to a string `p_string`. The function shall change the third `char` of `string1` and the second `char` of `p_string` to `\0`.

7. Call the function `change_string` again with the field `a_string` and the pointer to a newly created string `another_string` of length `16` which is given some initial value.

7. Finally call `print_string` again with the two parameters you passed to `change_string` before. Check the results and explain, what you observe and why. Again describe your observations in a comment after the call of the functions.

## Hints
- Take care to keep the work loop "Implement a little", "Test a little" to avoid the 100 lines of error mess.

## Extra Credit
Document your implementation in an extra text file or in an inline comment. In particular:
- Write down the reasons, how you assigned values to the variables in the main function.
- Give alternatives how to pass parameters when calling the different functions.
- Write down the reasons, why some variables are not changed by `change_integers`.

## Evaluation
All coding assignments will get checked. Most common reasons that your assignment is marked down are:

- Program does not build or builds with warnings
- One or more items in the *Required Tasks* section are not satisfied
- Submitted code is visually sloppy and hard to read

## Things to Learn
- Repeat using complex data types, like structs, arrays
- Repeat implementing functions
- Repeat pointer handling on complex data types
