var fs = require("fs");

// sync
var readme = fs.readFileSync("README.md", "utf8");
console.log("sync:"+readme);
fs.writeFileSync('WRITEME.md', readme);

// async
fs.readFile("README.md", "utf8", function(err, data){
    console.log("async:"+readme);
    fs.writeFile("WRITEMEA.md", data);
});