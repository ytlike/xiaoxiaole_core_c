//
//  main.c
//  disappear_happy_c
//
//  Created by 圈圈科技 on 16/7/19.
//  Copyright © 2016年 圈圈科技. All rights reserved.
//

#include <stdio.h>
#include "DHMap.h"


int main(int argc, const char * argv[])
{
    Map map = createMap();
    initMap(map);
    
    printMap(map);
    
    clickMapPoint(map, pointMake(4, 4));
    
    return 0;
}



