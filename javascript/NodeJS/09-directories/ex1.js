var fs = require("fs");

// delete junk.txt
// fs.unlink("junk.txt");

// sync
fs.mkdirSync("stuff");  // cria diretorio
fs.rmdirSync("stuff");  // deleta diretorio

// async
/*fs.mkdir("stuff2", function(){
    fs.readFile("junk.txt", "utf8", function(err, data){
        fs.writeFile("./stuff2/writeJunk.txt", data);
    });
});*/

fs.unlink("./stuff2/writeJunk.txt");
fs.rmdir("stuff2");