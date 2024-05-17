<!DOCTYPE html>
<html>
<head>
<title>页面标题</title>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
* {
    box-sizing: border-box;
}

/* body 样式 */
body {
    font-family: Arial;
    margin: 0;
}

/* 标题 */
.header {
    padding: 80px;
    text-align: center;
    background: #1abc9c;
    color: black;
}

/* 标题字体加大 */
.header h1 {
    font-size: 40px;
}

/* 导航 */
.navbar {
    overflow: hidden;
    background-color: #333;
}

/* 导航栏样式 */
.navbar a {
    float: left;
    display: block;
    color: white;
    text-align: center;
    padding: 14px 20px;
    text-decoration: none;
}

/* 右侧链接*/
.navbar a.right {
    float: right;
}

/* 鼠标移动到链接的颜色 */
.navbar a:hover {
    background-color: #ddd;
    color: black;
}

/* 列容器 */
.row {  
    display: -ms-flexbox; /* IE10 */
    display: flex;
    -ms-flex-wrap: wrap; /* IE10 */
    flex-wrap: wrap;
}

/* 创建两个列 */
/* 边栏 */
.side {
    -ms-flex: 30%; /* IE10 */
    flex: 30%;
    background-color: #f1f1f1;
    padding: 20px;
}

/* 主要的内容区域 */
.main {   
    -ms-flex: 70%; /* IE10 */
    flex: 70%;
    background-color: white;
    padding: 20px;
}

/* 测试图片 */
.fakeimg {
    background-color: #aaa;
    width: 100%;
    padding: 20px;
}

/* 底部 */
.footer {
    padding: 20px;
    text-align: center;
    background: #ddd;
}

/* 响应式布局 - 在屏幕设备宽度尺寸小于 700px 时, 让两栏上下堆叠显示 */
@media screen and (max-width: 700px) {
    .row {   
        flex-direction: column;
    }
}

/* 响应式布局 - 在屏幕设备宽度尺寸小于 400px 时, 让导航栏目上下堆叠显示 */
@media screen and (max-width: 400px) {
    .navbar a {
        float: none;
        width: 100%;
    }
}
</style>
</head>
<body>

<div class="header">
  <h1>个人介绍</h1>
  <p></p>
</div>

<div class="navbar">
  <a href="#">基本信息</a>
  <a href="#">喜爱的课程</a>
  <a href="#" class="right">社团经历</a>
</div>

<div class="row">
  <div class="side">
      <h2>关于我</h2>
      <h5>我的基本信息</h5>
      <div class="fakeimg" style="height:200px;">这边插入图像</div>
	  <p>年龄：20</p>

	  <p>性别：女</p>

	  <p>姓名：张思佳</p>

       <p>爱好：听音乐，运动，绘画</p>
      <h3>对软件工程专业的认识</h3>
      <p>软件工程是一门研究用工程化方法构建和维护有效的、实用的和高质量的软件的学科。 
	涉及程序设计语言、数据库、开发工具、系统平台、标准、设计模式、开发方法等方面。</p>
      <div class="fakeimg" style="height:60px;">这边插入图像</div><br>
      <div class="fakeimg" style="height:60px;">这边插入图像</div><br>
      <div class="fakeimg" style="height:60px;">这边插入图像</div>
  </div>
  <div class="main">
      <h2>最喜爱的课程</h2>
      <h5>c语言</h5>
      <div class="fakeimg" style="height:200px;"></div>
      <p>c语言是我们入校的第一门语言专业课，初次将我们引入代码的世界，
		  在其中有困难有疑问。在不断的学习中我们逐渐的认识了这门专家的奇妙与乐趣。
		  不仅锻炼了我们的实践能力而且提高了我们的思维逻辑，也为我们以后的学习奠定了坚实的基础。</p>
      
      <br>
      <h2>实践活动</h2>
      <h5>社团活动</h5>
      <div class="fakeimg" style="height:200px;">图像</div>
      <p>参与过舞蹈社团，在每个星期都有不同的课程安排，可自由按照自己的需求学习舞蹈，在这其中
	  体会到大学生活的多彩，认识了新的朋友，对舞蹈有了更多的认识，也慢慢热爱运动
	  敢于尝试新的事物。</p>
      
  </div>
</div>

<div class="footer">
  <h2>谢谢观看！</h2>
</div>

</body>
</html>
