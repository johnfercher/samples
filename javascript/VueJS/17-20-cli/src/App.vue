<template>
  <div id="app">
    <h1>{{title}}</h1>
    <Ninjas></Ninjas>
  </div>
</template>

<script>
// Local
import Ninjas from './Ninjas.vue'

export default {
  components:{
    'Ninjas': Ninjas
  },
  data () {
    return {
      title: 'Ninja APP'
    }
  }
}
</script>

<style scoped>
h1{
  color: green;
}
</style scoped>
