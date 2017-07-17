<template>
  <div v-theme:column="'narrow'" id="show-blogs">
    <h1>All blogs</h1>
    <input type="text" v-model="search" class="search" placeholder="search blogs"/>
    <div v-for="blog in filteredBlogs" class="single-blog">
      <router-link v-bind:to="'/blog/'+ blog.id"><h2 v-rainbow>{{blog.title | to-uppercase}}</h2></router-link>
      <article>{{blog.body | snippet}}</article>
    </div>
  </div>
</template>

<script>
import searchMixin from "../mixins/searchMixin";

export default {
  data () {
    return {
      blogs: [],
      search: ""
    }
  },
  methods:{

  },
  created () {
    this.$http.get('https://jsonplaceholder.typicode.com/posts').then(function(data){
      this.blogs = data.body.slice(0, 10);
    });
  },
  computed:{

  },
  // Locally
  filters:{
    toUppercase (value) {
      return value.toUpperCase();
    },
    snippet (value) {
      return value.slice(0,100) + "...";
    }
  },
  // Locally
  directives:{
    'rainbow':{
      bind(el, binding, vnode){
        el.style.color = "#" + Math.random().toString().slice(2,8);
      }
    },
    'theme':{
      bind(el, binding, vnode){
        if(binding.value == "wide"){
          el.style.maxWidth = "1200px";
        }else
        if(binding.value == 'narrow'){
          el.style.maxWidth = "560px";
        }

        if(binding.arg == 'column'){
          el.style.background = "#ddd";
          el.style.padding = "20px";
        }
      }
    }
  },
  // mixins
  mixins: [searchMixin]
}
</script>

<style>
#show-blogs{
  max-width: 800px;
  margin: 0 auto;
}
.single-blog{
  padding: 20px;
  margin: 20px 0;
  box-sizing: border-box;
  background: #eee;
}
.search{
  position: relative;
  max-width: 96.5%;
}
</style>
