var React = require("react");

// Import CSS
require("./css/todoItem.css");

// Criando o componente TODO
var TodoItem = React.createClass({
  render: function(){
    return(
      <li>
        <div className="todo-item">
          <span className="todo-name">{this.props.item}</span>
          <span className="item-remove" onClick={this.handleDelete}> x </span>
        </div>
      </li>
    );
  },

  // Custom functions
  handleDelete: function(){
    this.props.onDelete(this.props.item);
  }
});

module.exports = TodoItem;
