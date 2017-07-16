<template>
  <div>
    <ul>
      <li v-for="ninja in ninjas" @click="ninja.show = !ninja.show">
        <h2>{{ninja.name}}</h2>
        <p v-show="ninja.show">{{ninja.nickname}}</p>
      </li>
    </ul>
  </div>
</template>

<script>
export default {
  props: {
    // Validation
    ninjas:{
      type: Array,
      required: true
    }
  },
  data () {
    return {

    }
  }
}
</script>

<style scoped>
#ninjas{
    width: 100%;
    max-width: 1200px;
    margin: 40px auto;
    padding: 0 20px;
    box-sizing: border-box;
}
ul{
    display: flex;
    flex-wrap: wrap;
    list-style-type: none;
    padding: 0;
}
li{
    flex-grow: 1;
    flex-basis: 300px;
    text-align: center;
    padding: 30px;
    border: 1px solid #222;
    margin: 10px;
}
</style scoped>
