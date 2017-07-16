<template>
  <div>
    <app-header></app-header>
    <app-ninjas v-bind:ninjas="ninjas"></app-ninjas>
    <app-footer></app-footer>
  </div>
</template>

<script>
import Header from "./components/Header.vue";
import Footer from "./components/Footer.vue";
import Ninjas from "./components/Ninjas.vue";

export default {
  components:{
    "app-header": Header,
    "app-footer": Footer,
    "app-ninjas": Ninjas,
  },
  data () {
    return {
      ninjas:[
        {name: "Subzero", nickname: "Frozen", show: false},
        {name: "Scorpion", nickname: "Subzero amarelo", show: false},
        {name: "Reptile", nickname: "Azia", show: false},
        {name: "Noob-Saibot", nickname: "Lombardi", show: false},
        {name: "Smoke", nickname: "Malrboro", show: false},
        {name: "Chameleon", nickname: "Gretchen", show: false},
        {name: "Rain", nickname: "Uvinha", show: false},
        {name: "Ermac", nickname: "Cara da Rave", show: false},
        {name: "Cyrax", nickname: "Minion", show: false},
        {name: "Sektor", nickname: "Sith", show: false},
      ]
    }
  }
}
</script>

<style>

</style>
