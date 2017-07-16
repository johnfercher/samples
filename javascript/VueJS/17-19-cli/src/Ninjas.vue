<template>
  <div id="app">
    <h1>Names</h1>
    <li v-for="ninja in ninjas">{{ninja}}</li>
  </div>
</template>

<script>
export default {
  data () {
    return {
      ninjas: ["Subzero", "Scorpion", "Reptille", "Smoke", "Noob-Saibot", "Chameleo"]
    }
  }
}
</script>

<style scoped>
h1{
  color: purple;
}
</style scoped>
