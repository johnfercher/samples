var express = require('express');
var bodyParser = require('body-parser');

var app = express();

var urlencodedParser = bodyParser.urlencoded({ extended: false });

app.set('view engine', 'ejs');

// CSS
app.use('/assets', express.static('assets'));

// Template
app.get('/', function(req, res){
    res.render("index");
});

app.get('/contact', function(req, res){
    // query string pass from url
    res.render("contact", {qs: req.query});
});

app.post('/contact', urlencodedParser, function(req, res){
    //console.log(req.body);
    res.render("contact-success", {data: req.body});
});

// Teplate with JS no View
app.get("/profile/:name", function(req, res){
    var data = {
        age: 29,
        job: 'ninja',
        hobbies: ['eating', 'fighting', 'fishing', 'playing', 'programming', 'putin']
    };

    res.render('profile', {person: req.params.name, data: data});
});

app.listen(3000);

