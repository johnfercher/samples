<template>
  <div>
    <h1>fill the form mf</h1>
    <form>
      <div id="form-header">
        <slot name="form-header"></slot>
      </div>
      <div id="form-fields">
        <slot name="form-fields"></slot>
      </div>
      <div id="form-controls">
        <slot name="form-controls"></slot>
      </div>
      <div id="useful-links">
        <ul>
          <li><a href="#">Link</a></li>
          <li><a href="#">Link</a></li>
          <li><a href="#">Link</a></li>
          <li><a href="#">Link</a></li>
        </ul>
      </div>
    </form>
  </div>
</template>

<script>
export default {
  components:{

  },
  data () {
    return {

    }
  },
  methods:{

  }
}
</script>

<style scoped>

</style>
