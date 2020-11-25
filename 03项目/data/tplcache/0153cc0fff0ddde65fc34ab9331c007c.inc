<section class="section-pad popular-courses" id="index-portfolio">
  <div class="container">
    <div class="section-heading text-center">
      <h1><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></h1>
      <p>{dede:field name='description'/}</p>
    </div>
    <div class="row">
      <div id="owl-courses-second"> {dede:arclist row='12' titlelen='50' orderby='pubdate'}
        <div class="item course-item"> <a href="[field:arcurl/]"><img src="[field:picname/]" alt="[field:title/]"/></a>
          <div class="down-content">
            <div class="price-red"> <span>Gold</span>
              <div class="base"></div>
            </div>
            <h4 class="iport-title"><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></h4>
            <p class="desc">[field:description function="cn_substr(@me,200)"/]...</p>
            <div class="text-button"> <a href="[field:arcurl/]">查看更多<i class="fa fa-arrow-right"></i></a> </div>
          </div>
        </div>
        {/dede:arclist} </div>
    </div>
  </div>
</section>