var http = require('http');
var fs = require("fs");

var http = require('http');

var server = http.createServer(function(req, res) {
    console.log("request made by " + req.url);
    res.writeHead(200, {'Content-Type': 'application/json'});

    var myObj = {
        name: 'john',
        job: 'ninja',
        age: 22
    };

    res.end(JSON.stringify(myObj));
});

server.listen(8080);
console.log("oiee");