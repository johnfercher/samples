<template>
  <div>
    <form-helper>
      <div slot="form-header">
        <h3>One title</h3>
        <p>information</p>
      </div>
      <div slot="form-fields">
        <input type="text" placeholder="name" required/>
        <input type="password" placeholder="password" required/>
      </div>
      <div slot="form-controls">
        <button @click="handleSubmit">Submit</button>
      </div>
    </form-helper>
  </div>
</template>

<script>
import formHelper from "./components/formHelper.vue";
export default {
  components:{
    'form-helper': formHelper
  },
  data () {
    return {
      title: "dynamic"
    }
  },
  methods:{

  }
}
</script>

<style scoped>

</style>
