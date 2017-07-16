<template>
  <div id="add-blog">
    <h2>Add new post</h2>
    <form v-if="!submitted">
      <label>Title:</label>
      <input type="text" v-model.lazy="blog.title" required />
      <label>Content:</label>
      <textarea v-model.lazy="blog.content"></textarea>
      <div id="checkboxes">
        <label>Ninjas</label>
        <input type="checkbox" value="ninjas" v-model="blog.categories"/>
        <label>Wizards</label>
        <input type="checkbox" value="wizards" v-model="blog.categories"/>
        <label>Nordics</label>
        <input type="checkbox" value="nordics" v-model="blog.categories"/>
        <label>Chips</label>
        <input type="checkbox" value="chiś" v-model="blog.categories"/>
      </div>
      <select v-model="blog.author">
        <option v-for="author in authors">{{author}}</option>
      </select>
      <button @click.prevent="post">Add blog</button>
    </form>
    <div v-if="submitted">
      <h3>Posted</h3>
    </div>
    <div id="preview">
      <h3>Preview</h3>
      <p>Title: {{blog.title}}</p>
      <p>Content:</p>
      <p>{{blog.content}}</p>
      <p>Categories:</p>
      <ul>
        <li v-for="category in blog.categories">{{category}}</li>
      </ul>
      <p>Author: {{blog.author}}</p>
    </div>
  </div>
</template>

<script>
export default {
  data () {
    return {
      blog: {
        title: "",
        content: "",
        categories: [],
        author: ""
      },
      authors: ["The Net Ninja", "The Angular Avenger", "The Vue Vindicator"],
      submitted: false
    }
  },
  methods:{
    post : function () {
      this.$http.post("https://jsonplaceholder.typicode.com/posts", {
        title: this.blog.title,
        body: this.blog.content,
        userid: 1
      }).then(function (data){
        console.log(data);
        this.submitted = true;
      });
    }
  }
}
</script>

<style>
#add-blog *{
    box-sizing: border-box;
}
#add-blog{
    margin: 20px auto;
    max-width: 500px;
}
label{
    display: block;
    margin: 20px 0 10px;
}
input[type="text"], textarea{
    display: block;
    width: 100%;
    padding: 8px;
}
#preview{
    padding: 10px 20px;
    border: 1px dotted #ccc;
    margin: 30px 0;
}
h3{
    margin-top: 10px;
}
#checkboxes input{
  display: inline-block;
  margin-right: 10px;
}
#checkboxes label{
  display: inline-block;
}
</style>
