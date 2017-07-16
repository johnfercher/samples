Vue.component("greeting", {
  template:"<p>Hey there {{name}}; <button @click='changeName'>Change To Mario</button></p>",
  data : function () {
    return {
      name: "Yoshi"
    }
  },
  methods:{
    changeName: function (){
      this.name = "Mario";
    }
  }
});

new Vue({
  el: "#vue-app-one",
});

new Vue({
  el: "#vue-app-two",
});
