<?php
$z[0]=Array("top","\r\n  <m:item name='网站栏目管理' link='catalog_main.php' ischannel='1' addalt='创建栏目' linkadd='catalog_add.php?listtype=all' rank='t_List,t_AccList' target='main' />\r\n  <m:item name='所有档案列表' link='content_list.php' rank='a_List,a_AccList' target='main' />\r\n  <m:item name='等审核的档案' link='content_list.php?arcrank=-1' rank='a_Check,a_AccCheck' target='main' />\r\n  <m:item name='我发布的文档' link='content_list.php?mid=1' rank='a_List,a_AccList,a_MyList' target='main' />\r\n  <m:item name='评论管理' link='feedback_main.php' rank='sys_Feedback' target='main' />\r\n  <m:item name='内容回收站' link='recycling.php' ischannel='1' addalt='清空回收站' addico='images/gtk-del.png' linkadd='archives_do.php?dopost=clear&aid=no&recycle=1' rank='a_List,a_AccList,a_MyList' target='main' />\r\n",53,948);
$z[0][4]=array();
$z[0][4]['item']="1_";
$z[0][4]['name']="常用操作";
$z[0][4]['display']="block";
$z[1]=Array("top","\r\n    <m:item name='普通文章' ischannel='1' link='content_list.php?channelid=1' linkadd='article_add.php?channelid=1' channelid='1' rank='' target='main' />\r\n\r\n  <m:item name='专题管理' ischannel='1' link='content_s_list.php' linkadd='spec_add.php' channelid='-1' rank='spec_New' target='main' />\r\n",952,1319);
$z[1][4]=array();
$z[1][4]['item']="1_";
$z[1][4]['name']="内容管理";
$z[1][4]['display']="block";
$z[2]=Array("top","\r\n  <m:item name='上传新文件' link='media_add.php' rank='' target='main' />\r\n  <m:item name='附件数据管理' link='media_main.php' rank='sys_Upload,sys_MyUpload' target='main' />\r\n  <m:item name='文件式管理器' link='media_main.php?dopost=filemanager' rank='plus_文件管理器' target='main' />\r\n",1323,1747);
$z[2][4]=array();
$z[2][4]['item']="1_";
$z[2][4]['name']="附件管理";
$z[2][4]['display']="none";
$z[2][4]['rank']="sys_Upload,sys_MyUpload,plus_文件管理器";
$z[3]=Array("top","\r\n  <m:item name='一键更新网站' link='makehtml_all.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新系统缓存' link='sys_cache_up.php' rank='sys_ArcBatch' target='main' />\r\n  \r\n",1760,2059);
$z[3][4]=array();
$z[3][4]['item']="5_";
$z[3][4]['name']="自动任务";
$z[3][4]['notshowall']="1";
$z[3][4]['display']="block";
$z[3][4]['rank']="sys_MakeHtml";
$z[4]=Array("top","\r\n  <m:item name='更新主页HTML' link='makehtml_homepage.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新栏目HTML' link='makehtml_list.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新文档HTML' link='makehtml_archives.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新网站地图' link='makehtml_map_guide.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新RSS文件' link='makehtml_rss.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='获取JS文件' link='makehtml_js.php' rank='sys_MakeHtml' target='main' />\r\n  <m:item name='更新专题HTML' link='makehtml_spec.php' rank='sys_MakeHtml' target='main' />\r\n",2063,2846);
$z[4][4]=array();
$z[4][4]['item']="5_";
$z[4][4]['name']="HTML更新";
$z[4][4]['notshowall']="1";
$z[4][4]['display']="none";
$z[4][4]['rank']="sys_MakeHtml";
$z[5]=Array("top","\r\n  <m:item name='系统基本参数' link='sys_info.php' rank='sys_Edit' target='main' />\r\n  <m:item name='系统用户管理' link='sys_admin_user.php' rank='sys_User' target='main' />\r\n  \r\n  <m:item name='数据库备份/还原' link='sys_data.php' rank='sys_Data' target='main' />\r\n  <m:item name='SQL命令行工具' link='sys_sql_query.php' rank='sys_Data' target='main' />\r\n   <m:item name='默认模板管理' link='templets_main.php' rank='temp_All' target='main'/>\r\n\r\n",2854,3445);
$z[5][4]=array();
$z[5][4]['item']="10_";
$z[5][4]['name']="系统设置";
$z[5][4]['display']="none";
$z[5][4]['rank']="sys_User,sys_Group,sys_Edit,sys_Log,sys_Data";

?>