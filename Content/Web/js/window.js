function findDimensions() //函数：获取尺寸
{
winHeight = screen.width;
winWidth = screen.height;
document.getElementById("main").style.height = winHeight +"px";
document.getElementById("main").style.width = winWidth + "px";
}