// normal function statement

function sayHi(){
    console.log("Hi!");
}

sayHi();

// function expression, holds an anonymous function
var sayBye = function(){
    console.log("Bye!");
};

sayBye();

// function which receives another function
function callFunction(fun){
    fun();
}

callFunction(sayHi);