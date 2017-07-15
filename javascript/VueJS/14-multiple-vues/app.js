var one = new Vue({
  el: "#vue-app-one",
  data:{
    title: "Vue App One"
  },
  methods:{

  },
  computed:{
    greet: function () {
      return "Team ONE !!";
    }
  }
});

var two = new Vue({
  el: "#vue-app-two",
  data:{
    title: "Vue App Two"
  },
  methods:{
    changeTitle: function () {
      one.title = "Bwoah Team One"
    }
  },
  computed:{
    greet: function () {
      return "Team Twoooo !!";
    }
  }
});
