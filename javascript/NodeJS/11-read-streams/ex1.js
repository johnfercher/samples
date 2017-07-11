var http = require('http');
var fs = require("fs");

var myReadStream = fs.createReadStream(__dirname + "/lorem.txt", "utf8");

myReadStream.on('data', function(chunk){
    console.log("new chunk received:");
    console.log(chunk)
});