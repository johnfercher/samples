new Vue({
  el: "#vue-app",
  data: {
    name: "Shaun",
    job: "Ninja",
    website: "www.facebook.com",
    websiteTag:"",
    age: 23,
    x: 0,
    y: 0,
    a: 0,
    b: 0
  },
  methods:{
    greet: function (msg) {
      return "Good " + msg + ", " + this.name + ".";
    },
    // Events
    OnAdd : function (plus) {
      this.age += plus;
    },
    OnSubtract : function (minus) {
      this.age -= minus;;
    },
    OnUpdateXY : function (event) {
      this.x = event.offsetX;
      this.y = event.offsetY;
    },
    OnClick : function () {
      alert("Clickkk");
    },
    OnAgeCheck : function () {
      this.age = event.target.value;
    },

  },
  computed:{
    addToA : function () {
      console.log("A");
      return this.a + this.age;
    },
    addToB : function () {
      console.log("B");
      return this.b + this.age;
    }
  },
});
