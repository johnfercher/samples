import Vue from 'vue'
import App from './App.vue'
import VueResource from 'vue-resource'
import VueRouter from 'vue-router'
import Routes from "./routes"

Vue.use(VueResource);
Vue.use(VueRouter);

const router = new VueRouter({
  routes: Routes,
  mode: 'history'
});

new Vue({
  el: '#app',
  render: h => h(App),
  router: router
})

/* Custom directives Globaly
Vue.directive("rainbow", {
  bind(el, binding, vnode){
    el.style.color = "#" + Math.random().toString().slice(2,8);
  }
});

Vue.directive("theme", {
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
});*;

/* Filters Globaly
Vue.filter("to-uppercase", function(value){
  return value.toUpperCase();
});

Vue.filter("snippet", function(value){
  return value.slice(0,100) + "...";
});*/
