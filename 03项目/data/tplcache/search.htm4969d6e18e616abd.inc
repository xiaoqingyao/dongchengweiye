<?php
$z[0]=Array("field","",347,366);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("field","",417,446);
$z[1][4]=array();
$z[1][4]['name']="keywords";
$z[2]=Array("field","",485,543);
$z[2][4]=array();
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",3255,3290);
$z[3][4]=array();
$z[3][4]['filename']="head.htm";
$z[4]=Array("global","",3560,3615);
$z[4][4]=array();
$z[4][4]['name']="keyword";
$z[4][4]['function']="RemoveXSS(@me)";
$z[5]=Array("list","\r\n          <div class=\"blog-article hentry format-image\">\r\n            <figure> <a class=\"swipebox-x\" href=\"[field:arcurl/]\"> <img class=\"img-responsive\" alt=\"[field:title/]\" src=\"[field:picname/]\"/> </a> </figure>\r\n            <div class=\"entry-summary post-summary\">\r\n              <header class=\"entry-header\">\r\n                <h2 class=\"entry-title post-title\"> <a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a> </h2>\r\n              </header>\r\n              <div class=\"entry-meta post-meta\">\r\n                <ul>\r\n                  <li class=\"entry-date date\">\r\n                    <time class=\"entry-date\" datetime=\"[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</time>\r\n                  </li>\r\n                  <li class=\"tags\"><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n                  <li class=\"byline author vcard\">by <a href=\"javascript:void(0)\" class=\"fn\">[field:writer/]</a> </li>\r\n                </ul>\r\n              </div>\r\n              <div class=\"entry-content\">\r\n                <p>[field:description function=\"cn_substr(@me,400)\"/]...</p>\r\n              </div>\r\n              <a href=\"[field:arcurl/]\" class=\"read-more-link\">查看详细</a> </div>\r\n          </div>\r\n          ",3872,5182);
$z[5][4]=array();
$z[6]=Array("include","",5215,5250);
$z[6][4]=array();
$z[6][4]['filename']="left.htm";
$z[7]=Array("include","",5317,5354);
$z[7][4]=array();
$z[7][4]['filename']="footer.htm";

?>