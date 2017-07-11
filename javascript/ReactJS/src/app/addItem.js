var React = require("react");

// Import CSS
require("./css/addItem.css");

var AddItem = React.createClass({
  render: function(){
    return(
      <form id="add-todo" onSubmit={this.handleSubmit}>
        <input type="text" required ref="newitem"/>
        <input type="submit" value="Add"/>
      </form>
    );
  },

  // Custom functions
  handleSubmit: function(event){
    event.preventDefault();
    this.props.onAdd(this.refs.newitem.value);
  }
})


module.exports = AddItem;
