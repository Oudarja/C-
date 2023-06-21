#include<bits/stdc++.h>
#include<graphics.h>
main()
{
          int gd=DETECT,gm;
            initgraph(&gd,&gm,(char*)"");

              int x=25,y=30;

              int c=0;

        for(int font=0;font<=10;font++)
        {
            settextstyle(font,0,3);
            setcolor(c%16);
            outtextxy(x,y,"I am Oudarja barman tanmoy");
            y+=25;
            c++;
        }

  getch();
    closegraph();
    return 0;
}
