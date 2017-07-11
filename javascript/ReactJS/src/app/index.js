var React = require("react");
var ReactDOM = require("react-dom");

// Import CSS
require("./css/index.css");

// Routing
import{Router, Route, browserHistory, Link} from 'react-router';

// Module requires
var TodoItem = require("./todoItem");
var AddItem = require("./addItem");
var About = require("./about");

var App = React.createClass({
  render: function(){
    return(
      <Router history={browserHistory}>
        <Route path={'/'} component={TodoComponent}></Route>
        <Route path={'/about'} component={About}></Route>
      </Router>
    );
  }
});

// Criando um componente
var TodoComponent = React.createClass({
  getInitialState: function(){
    return{
      todos: ["wash up", "eat some cheese", "take a nap", "learn despacito"],
    }
  },
  render: function(){
    var todos = this.state.todos;
    todos = todos.map(function(item, index){
      return(<TodoItem item={item} key={index} onDelete={this.onDelete} />);
    }.bind(this));
    return(
      <div id="todo-list">
        <Link to={'/about'}>About</Link>
        <p>busy</p>
        <ul>{todos}</ul>
        <AddItem onAdd={this.onAdd}/>
      </div>
    );
  }, // render
  // Custom functions
  onDelete: function(item){
    var updatedTodos = this.state.todos.filter(function(val, index){
      return item !== val;
    });
    this.setState({
      todos: updatedTodos
    });
  },

  onAdd: function(item){
    var updatedTodos = this.state.todos;
    updatedTodos.push(item);
    this.setState({
      todos: updatedTodos
    });
  },

  // Lifecycle functions
  componentWillMount: function(){
    console.log("componentWillMount");
  },

  componentDidMount: function(){
    console.log("componentDidMount");
    // good place to grabbing of external data
  },

  componentWillUpdate: function(){
    console.log("componentWillUpdate");
  }
});

// Coloca o componente no HTML
ReactDOM.render(<App />, document.getElementById("todo-wrapper"));
