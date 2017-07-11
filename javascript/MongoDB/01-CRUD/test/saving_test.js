const assert = require("assert");
const MarioChar = require("../models/mariochar");

// Describe tests
describe("Saving records", function(){
  // Create tests
  it("saves a record to the database", function(done){
    var char = new MarioChar({
      name: "Mario"
    });

    char.save().then(function(){
      assert(char.isNew === false);
      done();
    });

  });

  // next test

});
