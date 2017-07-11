const mongoose = require('mongoose');

// ES6 Promises
mongoose.Promise = global.Promise;

// Connect to db before tests run
before(function(done){
  // Connect to mongodb
  mongoose.connect("mongodb://localhost/testaroo");

  mongoose.connection.once('open', function(){
    console.log('Conectado :D');
    done();
  }).on('error', function(error){
    console.log('errooooouuu', error);
  });
});
