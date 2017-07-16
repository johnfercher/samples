<template>
  <div id="app">
    <h1>{{title}}</h1>
    <p>{{greeting}}</p>
  </div>
</template>

<script>
export default {
  data () {
    return {
      title: 'Vue > React'
    }
  },
  computed: {
    greeting : function () {
      return "Aeeeee !";
    }
  }
}
</script>

<style>

</style>
