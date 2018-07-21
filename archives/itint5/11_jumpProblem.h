/*

有一个无限大的棋盘，棋盘上有一匹马，马移动的方式为日字型。
即假设马当前的位置为(x,y)，那么下一步可以移动到(x+1,y+2)，(x+1,y-2)，(x-1,y+2)，(x-1,y-2)，(x+2,y+1)，
(x+2,y-1)，(x-2,y+1)或者(x-2,y-1)这8个位置。

问马是否能从坐标(x,y)按照上述移动规则移动到坐标(x2,y2)。


Solution: 
    1. 从(x,y) 跳到 (x-1,y+1) 需要2步：
    (x,y) -> (x+1,y+2) -> (x-1,y+1)
    2. 从(x,y) 跳到 (x,y+1) 需要3步：
    (x,y) -> (x-1,y+2) -> (x-2,y) -> (x,y+1)

    由于棋盘无限大，旋转可得其他6个点，围成(x,y)周围可以访问的8个点，
    根据这个原则可以跳到任意一个地方

*/


bool canJump(int x, int y, int x2, int y2) {
    return true;
}