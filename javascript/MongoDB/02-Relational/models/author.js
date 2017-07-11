const mongoose = require("mongoose");
const Schema = mongoose.Schema;

// create schema and model

const BookSchema = new Schema({
  title: String,
  page: Number
});

const AuthorSchema = new Schema({
  name: String,
  age: Number,
  books: [BookSchema]
});

const Author = mongoose.model('author', AuthorSchema);

module.exports = Author;
