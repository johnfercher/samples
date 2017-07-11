var bodyParser = require('body-parser');
var mongoose = require('mongoose');

// connect to database mlab
mongoose.connect('mongodb://test:test@ds139072.mlab.com:39072/todo-jao');

// create a schema - this is like a blueprint
var todoSchema = new mongoose.Schema({
    item: String
});

var Todo = mongoose.model('Todo', todoSchema);

//var data = [{item: 'program'}, {item: 'program2'}, {item: 'program3'}];
var urlencodedParser = bodyParser.urlencoded({extended: false});


module.exports = function(app){
    app.get('/todo', function(req, res){
        // get data from mongodb and pass it to view
        Todo.find({}, function(err, data){
            if(err) throw err;
            res.render("todo", {todos: data});
        });
    });

    app.post('/todo', urlencodedParser, function(req, res){
        // get data from the view and add it to mongodb
        var newTodo = Todo(req.body).save(function(err,data){
            if(err) throw err;
             res.json(data);
        });
    });

    app.delete('/todo/:item', function(req, res){
        // delete the requested item from mongodb
        Todo.find({item: req.params.item.replace(/\-/g, " ")}).remove(function(err,data){
            if(err) throw err;
            res.json(data);
        });
    });
};