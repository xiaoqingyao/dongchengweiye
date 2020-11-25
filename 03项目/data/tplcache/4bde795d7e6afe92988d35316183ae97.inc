<section class="section-pad university-news" id="index-news">
  <div class="container">
    <div class="row">
      <div class="section-heading text-center">
        <h1><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></h1>
        <p>{dede:field name='description'/}</p>
      </div>
    </div>
    <div class="row"> {dede:arclist row='4' titlelen='50' orderby='pubdate'}
      <div class="col-md-6 col-sm-6 col-xs-6 inews-item">
        <div class="news-item">
          <div class="thumb-holder"> <a href="[field:arcurl/]"><img src="[field:picname/]" alt="[field:title/]"/></a>
            <div class="hover-content"><a href="[field:arcurl/]"><i class="fa fa-eye"></i></a></div>
          </div>
          <div class="right-content">
            <ul>
              <li class="inews-date"><i class="fa fa-calendar"></i> [field:pubdate function="MyDate('Y-m-d',@me)"/]</li>
              <li class="inews-user"><i class="fa fa-user"></i> by [field:writer/]</li>
            </ul>
            <h4 class="inews-title"><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></h4>
            <div class="line-dec"></div>
            <p class="desc">[field:description function="cn_substr(@me,200)"/]...</p>
          </div>
        </div>
      </div>
      {/dede:arclist} </div>
  </div>
</section>