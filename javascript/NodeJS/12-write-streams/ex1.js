var http = require('http');
var fs = require("fs");

var myReadStream = fs.createReadStream(__dirname + "/lorem.txt", "utf8");
var myWriteStream = fs.createWriteStream(__dirname + "/loremW.txt");
 
myReadStream.on('data', function(chunk){
    console.log("new chunk received:");
    myWriteStream.write(chunk);
});