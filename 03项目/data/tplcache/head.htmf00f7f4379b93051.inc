<?php
$z[0]=Array("global","",215,241);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",546,568);
$z[1][4]=array();
$z[1][4]['name']="cfg_tel";
$z[2]=Array("global","",639,663);
$z[2][4]=array();
$z[2][4]['name']="cfg_email";
$z[3]=Array("global","",1561,1585);
$z[3][4]=array();
$z[3][4]['name']="cfg_weibo";
$z[4]=Array("field","(@me==\"\")? @me=\" class='Lev1 active' \":@me=\"\";",1778,1874);
$z[4][4]=array();
$z[4][4]['name']="typeid";
$z[4][4]['runphp']="yes";
$z[5]=Array("channelartlist","\r\n          <li class=\"Lev1 {dede:field.currentstyle/}\"> <a href=\"{dede:field name='typeurl'/}\" class=\"menu1 has-submenu\">{dede:field name='typename'/} \r\n            {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'<i class=\"fa fa-angle-down\"></i>':'';\r\n            {/dede:field}</a>\r\n            <ul {dede:field name=typeid runphp=\"yes\"}\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->\r\n              GetOne(\$sql);\r\n              @me=is_array(\$row)?'class=\"sub-menu dr-menu2\"':'style=\"display:none\"';\r\n              {/dede:field}> \r\n              \r\n              {dede:channel type='son' noself='yes'}\r\n              <li class=\"Lev2\"> <a href=\"[field:typeurl/]\" class=\"menu21\">[field:typename/]</a> </li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </li>\r\n          ",1947,3119);
$z[5][4]=array();
$z[5][4]['typeid']="top";
$z[5][4]['currentstyle']="active";
$z[6]=Array("global","",3400,3425);
$z[6][4]=array();
$z[6][4]['name']="cfg_cmsurl";

?>