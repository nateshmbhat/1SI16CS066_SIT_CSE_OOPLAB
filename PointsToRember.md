# Points to Remember 

+ constructors and desctructors cant be used as static functions . 
+ static members if private , must be declared and allocated outside the main function and we can assign them only during allocation time.
+ static members always get initialized to 0 on declaration . 
+ class objarray[3] = {1 , 2 , 3}  // This is allowed when the constructor of that class has a single parameter constructor .
+ When we have overloaded = opeator and copy constructor , then the constructor gets called when using the = operator only during assignment else the "=" operator function gets called . 
+ operator[] overloaded function  can only take 1 argument and not more than that. 
+ operator-> overloaded function can only take void as argument nothing else and members need to be public in order to use this operator outside the object context 

```
private : a
...

int main()
{
	class obj ; 
	obj->a ; //not allowed if a is private ; 
}

```

+ overloading operator, (comma) doesnt make any difference as opposed to just using the comma operator without overloading it.
+ when doing dynamic alloation 

