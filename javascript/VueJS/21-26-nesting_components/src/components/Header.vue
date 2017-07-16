<template>
  <header>
    <h1 @click="changeTitle">{{title}}</h1>
  </header>
</template>

<script>
import { bus } from "../main";

export default {
  props: {
    title: {
      type: String
    }
  },
  data () {
    return {
      title: "Vue Ninjas"
    }
  },
  methods: {
    changeTitle : function () {
      //this.$emit("changeTitle", "Vue vuoooou evento");
      this.title = "Vueee vuoea local";
      bus.$emit("titleChanged", "Vueee bus evento");
    }
  },
  // Lifecycle
  beforeCreate () {
    alert("beforeCreate");
  },
  created () {
    // Database
    alert("created");
  },
  beforeMount () {
    alert("beforeMount");
  },
  mounted () {
    alert("mounted");
  },
  beforeUpdate () {
    alert("beforeUpdate");
  },
  updated () {
    alert("updated");
  }
}
</script>

<style scoped>
header{
  background-color: lightgreen;
  padding: 10px;
}
h1{
  color: #222;
  text-align: center;
}
</style scoped>
