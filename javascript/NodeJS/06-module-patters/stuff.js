var counter = function(arr){
    return 'There are ' + arr.length + ' elements.';
};

var adder = function(a,b){
    return 'Sum: ${a+b}';
};

var pi = 3.1415926;

module.exports = {
    counter: counter,
    adder: adder,
    pi: pi
}