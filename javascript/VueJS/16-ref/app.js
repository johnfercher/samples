new Vue({
  el : "#vue-app",
  data : {
    output: "refs",
  },
  methods : {
    OnClick : function (){
      this.output = this.$refs.input.value;
    }
  }
});
