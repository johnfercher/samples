const assert = require("assert");
const MarioChar = require("../models/mariochar");

// Describe tests
describe("Finding records", function(){
  var char;
  beforeEach(function(done){
    char = new MarioChar({
      name: "Mario"
    });

    char.save().then(function(){
      done();
    });
  });

  // Create tests
  it("finds one record from database", function(done){
    MarioChar.findOne({name:"Mario"}).then(function(result){
      assert(result.name === "Mario");
      done();
    });
  });

  // Create tests
  it("finds one record by ID from database", function(done){
    MarioChar.findOne({_id: char._id}).then(function(result){
      assert(result._id.toString() === char._id.toString());
      done();
    });
  });

  // next test

});
