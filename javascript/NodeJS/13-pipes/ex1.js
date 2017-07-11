var http = require('http');
var fs = require("fs");

var http = require('http');

var server = http.createServer(function(req, res) {
    console.log("request made by " + req.url);
    res.writeHead(200, {'Content-Type': 'text/plain'});

    var myReadStream = fs.createReadStream(__dirname + "/lorem.txt", "utf8");
    myReadStream.pipe(res);
});

server.listen(8080);
console.log("oiee");