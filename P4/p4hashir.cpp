#include<iostream>
#include<graphics.h>
#include<stdlib.h>
using namespace std;

struct JK{
    int clk;
    int q;
};

void setJK(int CLK, int j, int k, JK* jk){
    if((CLK != jk->clk) && !CLK){
        if(k&(!j)){
            jk->q = 0;
        }
        if(j&(!k)){
            jk->q = 1;
        }
        if(j&k){
            jk->q = !jk->q;
        }
    }
    jk->clk = CLK;
}

void drawCkt(){
    int ffx, ffy;
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    setcolor(WHITE);
    fillellipse(30, 150, 15, 15);
    outtextxy(20, 170, "Clk");
    setcolor(YELLOW);
    line(45, 150, 105, 150);
    setcolor(CYAN);
    ffx = 105;
    ffy = 90;
    setcolor(WHITE);
    outtextxy(47, ffy+13, "1");
    outtextxy(47, ffy+93, "1");
    setcolor(CYAN);
    line(60, ffy+20, ffx, ffy+20);
    line(60, ffy+100, ffx, ffy+100);
    line(80, ffy+20, 80, ffy-35);
    line(80, ffy-35, 585, ffy-35);
    setcolor(WHITE);
    outtextxy(115, ffy+13, "Ja");
    outtextxy(115, ffy+93, "Ka");
    outtextxy(170, ffy+13, "Qa");
    setcolor(CYAN);
    line(585, ffy-35, 585, ffy+20);
    line(585, ffy+20, 615, ffy+20);
    rectangle(ffx, ffy, ffx+90, ffy+120);
    line(ffx+90, ffy+20, ffx+120, ffy+20);
    line(ffx+120, ffy+20, ffx+120, ffy+200);
    setcolor(YELLOW);
    line(ffx+120, ffy+60, ffx+170, ffy+60);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    setcolor(WHITE);
    fillellipse(ffx+120, ffy+200, 15, 15);
    outtextxy(ffx+80, ffy+190, "Qa");
    setcolor(CYAN);
    ffx+=170;
    rectangle(ffx, ffy, ffx+90, ffy+120);
    setcolor(WHITE);
    outtextxy(ffx+10, ffy+13, "Jb");
    outtextxy(ffx+10, ffy+93, "Kb");
    outtextxy(ffx+65, ffy+13, "Qb");
    setcolor(CYAN);
    line(ffx-30, ffy-35, ffx-30, ffy+20);
    line(ffx-30, ffy+20, ffx, ffy+20);
    line(ffx+90, ffy+20, ffx+120, ffy+20);
    line(ffx+120, ffy+20, ffx+120, ffy+200);
    setcolor(YELLOW);
    line(ffx+120, ffy+60, ffx+170, ffy+60);
    setcolor(CYAN);
    line(ffx-30, ffy+100, ffx-30, ffy+155);
    line(ffx-30, ffy+100, ffx, ffy+100);
    setcolor(WHITE);
    fillellipse(ffx+120, ffy+200, 15, 15);
    outtextxy(ffx+80, ffy+190, "Qb");
    setcolor(CYAN);
    ffx+=170;
    rectangle(ffx, ffy, ffx+90, ffy+120);
    setcolor(WHITE);
    outtextxy(ffx+10, ffy+13, "Jc");
    outtextxy(ffx+10, ffy+93, "Kc");
    outtextxy(ffx+65, ffy+13, "Qc");
    setcolor(CYAN);
    line(ffx-30, ffy-35, ffx-30, ffy+20);
    line(ffx-30, ffy+20, ffx, ffy+20);
    line(ffx+90, ffy+20, ffx+120, ffy+20);
    line(ffx+120, ffy+20, ffx+120, ffy+200);
    setcolor(YELLOW);
    line(ffx+120, ffy+60, ffx+170, ffy+60);
    setcolor(CYAN);
    line(ffx-30, ffy+100, ffx-30, ffy+155);
    line(ffx-30, ffy+100, ffx, ffy+100);
    setcolor(WHITE);
    fillellipse(ffx+120, ffy+200, 15, 15);
    outtextxy(ffx+80, ffy+190, "Qc");
    setcolor(CYAN);
    ffx+=170;
    rectangle(ffx, ffy, ffx+90, ffy+120);
    setcolor(WHITE);
    outtextxy(ffx+10, ffy+13, "Jd");
    outtextxy(ffx+10, ffy+93, "Kd");
    outtextxy(ffx+65, ffy+13, "Qd");
    setcolor(CYAN);
    line(ffx-30, ffy-35, ffx-30, ffy+20);
    line(ffx-30, ffy+20, ffx, ffy+20);
    line(80, ffy+100, 80, ffy+155);
    line(80, ffy+155, 585, ffy+155);
    line(585, ffy+155, 585, ffy+100);
    line(585, ffy+100, 615, ffy+100);
    line(ffx-30, ffy+100, ffx, ffy+100);
    ffx+=90;
    line(ffx, ffy+20, ffx+50, ffy+20);
    line(ffx+50, ffy+20, ffx+50, ffy+200);
    setcolor(WHITE);
    fillellipse(ffx+50, ffy+200, 15, 15);
    outtextxy(ffx+10, ffy+190, "Qd");
}

int main(){
    int CLK, j, k;
    int CLKA[20];
    int a, b, c, d;
    int gd, gm;
    gd = DETECT;
    //initgraph(&gd, &gm, "");
    JK jk[4];
    memset(jk, 0, sizeof(jk));
    CLK = 1;
    cout<<"Clk | "<<"Qd Qc Qb Qa"<<endl;
    initwindow(800, 600);
    outtextxy(350, 20, "JK COUNTER");
    drawCkt();
    int y = 350;
    int x = 40;
    outtextxy(10, y-10, "Clk");
    int ya = y+50;
    outtextxy(10, ya-10, "Qa");
    int yb = ya+50;
    outtextxy(10, yb-10, "Qb");
    int yc = yb+50;
    outtextxy(10, yc-10, "Qc");
    int yd = yc+50;
    outtextxy(10, yd-10, "Qd");
    for(int i=0;i<20;i++){
        CLK ^= 1;
        setJK(CLK, 1, 1, &jk[0]);
        setJK(jk[0].q, 1, 1, &jk[1]);
        setJK(jk[1].q, 1, 1, &jk[2]);
        setJK(jk[2].q, 1, 1, &jk[3]);

        CLKA[i] = CLK;
        a = jk[0].q;
        b = jk[1].q;
        c = jk[2].q;
        d = jk[3].q;
        cout<<CLK<<"   | ";
        cout<<d<<"  "<<c<<"  "<<b<<"  "<<a;
        if(CLK==0){
            setfillstyle(SOLID_FILL, LIGHTGRAY);
            setcolor(WHITE);
            fillellipse(30, 150, 15, 15);
            line(x, y, x+20, y);
            if(i!=0)
                line(x, y, x, y-25);
        }else{
            setfillstyle(SOLID_FILL, RED);
            setcolor(WHITE);
            fillellipse(30, 150, 15, 15);
            line(x, y-25, x+20, y-25);
            line(x, y-25, x, y);
        }
        if(a==0){
            setfillstyle(SOLID_FILL, LIGHTGRAY);
            setcolor(WHITE);
            fillellipse(225, 290, 15, 15);
            setcolor(YELLOW);
            line(x, ya, x+20, ya);
            if(i%2!=0)
                line(x+20, ya, x+20, ya-25);
        }else{
            setfillstyle(SOLID_FILL, RED);
            setcolor(WHITE);
            fillellipse(225, 290, 15, 15);
            setcolor(YELLOW);
            line(x, ya-25, x+20, ya-25);
            if(i%2!=0)
                line(x+20, ya-25, x+20, ya);
        }
        if(b==0){
            setfillstyle(SOLID_FILL, LIGHTGRAY);
            setcolor(WHITE);
            fillellipse(395, 290, 15, 15);
            setcolor(LIGHTCYAN);
            line(x, yb, x+20, yb);
            /*if(i%2!=0)
                line(x+80, yb, x+80, yb-25);*/
        }else{
            setfillstyle(SOLID_FILL, RED);
            setcolor(WHITE);
            fillellipse(395, 290, 15, 15);
            setcolor(LIGHTCYAN);
            line(x, yb-25, x+20, yb-25);
            /*if(i%2!=0)
                line(x+80, yb-25, x+80, yb);*/
        }
        if(c==0){
            setfillstyle(SOLID_FILL, LIGHTGRAY);
            setcolor(WHITE);
            fillellipse(565, 290, 15, 15);
            setcolor(LIGHTRED);
            line(x, yc, x+20, yc);
            /*if(i%2!=0)
                line(x+80, yb, x+80, yb-25);*/
        }else{
            setfillstyle(SOLID_FILL, RED);
            setcolor(WHITE);
            fillellipse(565, 290, 15, 15);
            setcolor(LIGHTRED);
            line(x, yc-25, x+20, yc-25);
            /*if(i%2!=0)
                line(x+80, yb-25, x+80, yb);*/
        }

        if(d==0){
            setfillstyle(SOLID_FILL, LIGHTGRAY);
            setcolor(WHITE);
            fillellipse(755, 290, 15, 15);
            setcolor(LIGHTGREEN);
            line(x, yd, x+20, yd);
            /*if(i%2!=0)
                line(x+80, yb, x+80, yb-25);*/
        }else{
            setfillstyle(SOLID_FILL, RED);
            setcolor(WHITE);
            fillellipse(755, 290, 15, 15);
            setcolor(LIGHTGREEN);
            line(x, yd-25, x+20, yd-25);
            /*if(i%2!=0)
                line(x+80, yb-25, x+80, yb);*/
        }
        x+=20;
        cin.get();
    }
    cin.get();
    closegraph();
    return 0;
}
