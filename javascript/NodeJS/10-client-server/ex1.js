var http = require('http');

var server = http.createServer(function(req, res) {
    console.log("request made by " + req.url);
    res.writeHead(200, {'Content-Type': 'text/plain'});
    res.end('Hey Ninjas');
});

// força o servidor a ficar offline
// server.listen(8080, '127.0.0.1');

server.listen(8080);
console.log("oiee");