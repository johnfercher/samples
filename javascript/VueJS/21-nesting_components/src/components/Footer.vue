<template>
  <footer>
    <p>{{copyright}}</p>
  </footer>
</template>

<script>
export default {
  data () {
    return {
      copyright: "Copyright 2017 Vue Ninjas"
    }
  }
}
</script>

<style scoped>
footer{
  background-color: #222;
  padding: 6px;
}
p{
  color: lightgreen;
  text-align: center;
}
</style scoped>
