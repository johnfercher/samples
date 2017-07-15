new Vue({
  el: "#vue-app",
  data: {
    name: "Shaun",
    job: "Ninja",
    website: "www.facebook.com",
  },
  methods:{
    greet: function (msg) {
      return "Good " + msg + ", " + this.name + ".";
    }
  },
});
