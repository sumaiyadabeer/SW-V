#include <bits/stdc++.h>
#include<graphics.h>

using namespace std;
vector<int>vec;
int ja=1,ka=1,q1=0,q2=0,q3=0,q4=0,q1_temp,q2_temp,q3_temp,q4_temp;

void implement_bcd()
{
    q1_temp=q1,q2_temp=q2,q3_temp=q3,q4_temp=q4;
    q1=(ja&(~q1))|((~ka)&(q1));
    vec.push_back(q1);
    q2=((q1_temp&(~q4_temp))&(~q2))|((~(q1_temp&(~q4_temp)))&q2);
    vec.push_back(q2);
    q3=((q2_temp&q1_temp)&(~q3_temp))|(~(q2_temp&q1_temp)&q3_temp);
    vec.push_back(q3);
    q4=(((q3_temp&(q2_temp&q1_temp))|(q1_temp&q4_temp))&(~q4))|(~((q3_temp&(q2_temp&q1_temp))|(q1_temp&q4_temp))&(q4));
    vec.push_back(q4);
    cout<<q1<<" "<<q2<<" "<<q3<<" "<<q4<<endl;
}

int main()
{
     int gdriver = DETECT, gmode;
     initgraph(&gdriver, &gmode, "");
     setfillstyle(CLOSE_DOT_FILL, GREEN);
     rectangle(0,0,1500,1500);
     int mainn[10]={0,0,1500,0,1500,1500,0,1500};
     fillpoly(5,mainn);

     //Heading
     line(10,120,100,120);
     line(50,120,50,200);
     line(50,200,100,200);
     line(75,155,100,155);
     line(75,155,75,260);
    // rectangle(100,600,700,700);
     //setbkcolor(YELLOW);
     //setcolor(BLUE);
     //settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
     //outtextxy(120,600,"4-BIT SYNCHRONOUS BCD COUNTER");
     //setbkcolor(BLACK);
     //setcolor(WHITE);
     //settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
     rectangle(100, 100, 175, 225);
     outtextxy(110,115,"J");
     outtextxy(110,195,"K");
     outtextxy(110,150,"CLK");
     outtextxy(150,110,"QA");
     line(200,110,200,18);
     int points[8]={180,18,220,18,200,7,180,18};
     drawpoly(4,points);
     fillpoly(4,points);

     rectangle(300,100,375,225);
     line(275,155,300,155);
     line(275,155,275,260);
      outtextxy(310,122,"J");
     outtextxy(310,195,"K");
     outtextxy(310,150,"CLK");
     outtextxy(350,132,"QB");
     line(400,139,400,18);
     int points1[8]={380,18,420,18,400,7,380,18};
     drawpoly(4,points1);
     fillpoly(4,points1);

     rectangle(500,100,575,225);
     line(475,155,500,155);
     line(475,155,475,260);
      outtextxy(510,115,"J");
     outtextxy(510,195,"K");
     outtextxy(510,150,"CLK");
     outtextxy(550,110,"QC");
     line(590,110,590,18);
     int points2[8]={570,18,610,18,590,7,570,18};
     drawpoly(4,points2);
     fillpoly(4,points2);

     rectangle(850,100,925,225);
     line(825,155,850,155);
     line(825,155,825,260);
      outtextxy(860,115,"J");
     outtextxy(860,195,"K");
     outtextxy(860,150,"CLK");
     outtextxy(900,110,"QD");
     line(950,112,950,18);
     int points3[8]={930,18,970,18,950,7,930,18};
     drawpoly(4,points3);
     fillpoly(4,points3);

     line(10,260,825,260);
     line(925,200,950,200);
     line(950,200,950,300);
     line(950,300,200,300);

     line(200,300,200,140);
     line(200,140,220,140);
     line(175,112,220,112);
     line(200,112,200,60);
     arc(250,128,270,90,20);
     line(220,108,220,147);//frst
     line(220,108,250,108);//and
     line(220,147,250,147);//gate

     line(270,127,300,127);
     line(288,127,288,200);
     line(288,200,300,200);

     line(420,108,420,147);//second
     line(420,108,450,108);//and
     line(420,147,450,147);//gate
     arc(450,128,270,90,20);
     line(375,140,420,140);
     line(400,112,420,112);
     line(400,112,400,60);
     line(200,60,620,60);
     line(468,127,500,127);
     line(488,127,488,70);
     line(488,70,600,70);
     line(488,127,488,200);
     line(488,200,500,200);

     line(600,70,600,85);
     line(600,85,623,85);
     line(578,112,623,112);
     line(623,80,623,119);//third
     line(623,80,653,80);//and
     line(623,119,653,119);//gate
     arc(653,100,270,90,20);
     line(623,30,623,69);//fourth
     line(623,30,653,30);//and
     line(623,69,653,69);//gate
     arc(653,50,270,90,20);
     line(597,35,623,35);
     line(673,50,700,50);
     line(673,100,700,100);
     line(700,100,700,88);
     line(700,49,700,63);
     line(700,63,733,63);
     line(700,88,733,88);


     line(597,35,597,25);
     line(597,25,950,25);

     arc(720,76,270,72,20);
     arc(720,39,270,315,58);
     arc(710,112,390,70,58);
     line(760,81,837,81);
     line(837,81,837,200);
     line(837,200,850,200);
     line(925,112,950,112);

     //layout
     rectangle(1000,200,1280,750);
     int arr3[]={1000,200,1280,200,1280,750,1000,750,1000,200};
     rectangle(1000,200,1280,250);
     rectangle(1000,250,1280,300);
     rectangle(1000,300,1280,350);
     rectangle(1000,350,1280,400);
     rectangle(1000,400,1280,450);
     rectangle(1000,450,1280,500);
     rectangle(1000,500,1280,550);
     rectangle(1000,550,1280,600);
     rectangle(1000,600,1280,650);
     rectangle(1000,650,1280,700);
     rectangle(1000,700,1280,750);
     line(1070,200,1070,750);
     line(1140,200,1140,750);
     line(1210,200,1210,750);
     outtextxy(1030,220,"QA");
     outtextxy(1100,220,"QB");
     outtextxy(1170,220,"QC");
     outtextxy(1230,220,"QD");



     //clock pulse function

     rectangle(50,500,80,460);
     int arr[10]={50,500,80,500,80,460,50,460,50,500};
     setfillstyle(SOLID_FILL, RED);
     fillpoly(5,arr);
     line(55,470,55,480);
     line(55,480,65,480);
     line(65,480,65,470);
     line(65,470,75,470);
     line(75,470,75,480);
     line(75,470,65,470);

     int x,y,x1=100,y1=460,x2=120,y3=480,x4=140,f=0,count=0,c=0,x_q1=100,y_q1=520,x2_q1=140,y2_q1=500,q2=0;
     int x_q2=100,x2_q2=140,y_q2=560,y2_q2=540,cn=0,q3=0,cnt=0;
     int x_q3=100,x2_q3=140,y_q3=600,y2_q3=580;
       int x_q4=100,x2_q4=140,y_q4=640,y2_q4=620,cnts=0,q4=0;
     int x_axis=1030,y_axis=270;
     rectangle(90,730,510,420);
     int arr2[10]={90,730,510,730,510,420,90,420,90,730};
     while(1)
     {
         if(!ismouseclick(WM_LBUTTONDOWN)){
                delay(1000);
         }
        getmouseclick(WM_LBUTTONDOWN,x,y);
        if(x>=50&&x<=80&&y>=470&&y>=480)
        {
            //q1
            if(f==0&&c==0)
            {
                line(x_q1,y_q1,x2_q1,y_q1);
            }
            else if(f==0&&c==1)
            {
                line(x_q1,y2_q1,x2_q1,y2_q1);
            }
            if(f==1&&c==0)
            {
                line(x2_q1,y_q1,x2_q1,y2_q1);
                x_q1=x2_q1;
                x2_q1=x2_q1+40;
                c=1;
            }
            else if(f==1&&c==1)
            {
                line(x2_q1,y2_q1,x2_q1,y_q1);
                x_q1=x2_q1;
                x2_q1=x2_q1+40;
                c=0;
            }//q1 ends

            //q2
            if(q2<2&&f==0&&cn==0)
            {
                line(x_q2,y_q2,x2_q2,y_q2);
                x_q2=x2_q2;
                x2_q2=x2_q2+40;
            }
            else if(q2<2&&f==0&&cn==1)
            {
                line(x_q2,y2_q2,x2_q2,y2_q2);
                x_q2=x2_q2;
                x2_q2=x2_q2+40;
            }
            if(q2==2&&f==1&&cn==0)
            {
                line(x_q2,y_q2,x_q2,y2_q2);
                cn=1;
                q2=0;
            }
            else if(q2==2&&f==1&&cn==1)
            {
                line(x_q2,y2_q2,x_q2,y_q2);
                cn=0;
                q2=0;
            }//q2 ends

            //q4
            if(q4<8&&f==0&&cnts==0)
            {
                line(x_q4,y_q4,x2_q4,y_q4);
                x_q4=x2_q4;
                x2_q4=x2_q4+40;
            }
            else if(q4<8&&f==0&&cnts==1)
            {
                line(x_q4,y2_q4,x2_q4,y2_q4);
                x_q4=x2_q4;
                x2_q4=x2_q4+40;
            }
            if(q4==8&&f==1&&cnts==0)
            {
                line(x_q4,y_q4,x_q4,y2_q4);
                cnts=1;
                q4=0;
            }
            else if(q4==8&&f==1&&cnt==1)
            {
                line(x_q4,y2_q4,x_q4,y_q4);
                cnts=0;
                q4=0;
            }//q4 ends

             //q3
            if(q3<4&&f==0&&cnt==0)
            {
                line(x_q3,y_q3,x2_q3,y_q3);
                x_q3=x2_q3;
                x2_q3=x2_q3+40;
            }
            else if(q3<4&&f==0&&cnt==1)
            {
                line(x_q3,y2_q3,x2_q3,y2_q3);
                x_q3=x2_q3;
                x2_q3=x2_q3+40;
            }
            if(q3==4&&f==1&&cnt==0)
            {
                line(x_q3,y_q3,x_q3,y2_q3);
                cnt=1;
                q3=0;
            }
            else if(q3==4&&f==1&&cnt==1)
            {
                line(x_q3,y2_q3,x_q3,y_q3);
                cnt=0;
                q3=0;
            }//q2 ends




            //clk
            if(f==0)
            {
            line(x1,y1,x2,y1);
            line(x2,y1,x2,y3);
            line(x2,y3,x4,y3);
            f=1;
            q2++;
            q3++;
            q4++;
            }
            else if(f==1)
            {
                line(x4,y3,x4,y1);
                f=0;
                implement_bcd();
                if(vec[0]==1)
                {
                    setfillstyle(SOLID_FILL,RED);
                    fillpoly(4,points);
                    outtextxy(x_axis,y_axis,"1");
                    x_axis=x_axis+70;
                }
                else if(vec[0]==0)
                {
                    setfillstyle(SOLID_FILL,WHITE);
                    fillpoly(4,points);
                     outtextxy(x_axis,y_axis,"0");
                     x_axis=x_axis+70;
                }
                if(vec[1]==1)
                {
                    setfillstyle(SOLID_FILL,RED);
                    fillpoly(4,points1);
                     outtextxy(x_axis,y_axis,"1");
                     x_axis=x_axis+70;

                }
                else if(vec[1]==0)
                {
                    setfillstyle(SOLID_FILL,WHITE);
                    fillpoly(4,points1);
                     outtextxy(x_axis,y_axis,"0");
                     x_axis=x_axis+70;

                }
                if(vec[2]==1)
                {
                    setfillstyle(SOLID_FILL,RED);
                    fillpoly(4,points2);
                     outtextxy(x_axis,y_axis,"1");
                     x_axis=x_axis+70;
                }
                else if(vec[2]==0)
                {
                    setfillstyle(SOLID_FILL,WHITE);
                    fillpoly(4,points2);
                     outtextxy(x_axis,y_axis,"0");
                     x_axis=x_axis+70;
                }
                if(vec[3]==1)
                {
                    setfillstyle(SOLID_FILL,RED);
                    fillpoly(4,points3);
                     outtextxy(x_axis,y_axis,"1");
                     x_axis=x_axis+70;
                }
                else if(vec[3]==0)
                {
                    setfillstyle(SOLID_FILL,WHITE);
                    fillpoly(4,points3);
                     outtextxy(x_axis,y_axis,"0");
                     x_axis=x_axis+70;
                }
                x_axis=x_axis-(4*70);
                y_axis=y_axis+50;
                vec.clear();
                x1=x4;
                x2=x1+20;
                x4=x1+40;
                count++;

            }

            if(count==10)
            {
                setfillstyle(CLOSE_DOT_FILL, GREEN);
                fillpoly(5,arr2);
                fillpoly(5,arr3);
                  x1=100,y1=460,x2=120,y3=480,x4=140,f=0,count=0,c=0,x_q1=100,y_q1=520,x2_q1=140,y2_q1=500,q2=0;
                 x_q2=100,x2_q2=140,y_q2=560,y2_q2=540,cn=0,q3=0,cnt=0;
                 x_q3=100,x2_q3=140,y_q3=600,y2_q3=580;
                   x_q4=100,x2_q4=140,y_q4=640,y2_q4=620,cnts=0,q4=0;
                 x_axis=1030,y_axis=270;
                x1=100,y1=480,x2=120,y3=460,x4=140,f=0,count=0;
                x_axis=1030,y_axis=270;
                 rectangle(1000,200,1280,250);
                 rectangle(1000,250,1280,300);
                 rectangle(1000,300,1280,350);
                 rectangle(1000,350,1280,400);
                 rectangle(1000,400,1280,450);
                 rectangle(1000,450,1280,500);
                 rectangle(1000,500,1280,550);
                 rectangle(1000,550,1280,600);
                 rectangle(1000,600,1280,650);
                 rectangle(1000,650,1280,700);
                 rectangle(1000,700,1280,750);
                 line(1070,200,1070,750);
                 line(1140,200,1140,750);
                 line(1210,200,1210,750);
                 outtextxy(1030,220,"QA");
                 outtextxy(1100,220,"QB");
                 outtextxy(1170,220,"QC");
                 outtextxy(1230,220,"QD");

            }
        }
     }


     getch();

}
