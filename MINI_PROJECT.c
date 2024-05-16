#include <stdio.h>
#include <conio.h>

void main() 
{
    int  service = 0, choice;
    float price = 0, vat = 0, total = 0,water = 0;

    //กด 1) ที่อยู่อาศัย | 2) ราชการและธุรกิจขนาดเล็ก | 3) รัฐวิสาหกิจ/อุตฯ/ธุรกิจขนาดใหญ่
    printf("Pleas press 1)residence , 2)Government and small businesses, 3)state enterprise / industry / large business");
    printf("\nEnter your number : ");
    scanf("%d",&choice);

    //ขนาดมาตรน้ำ
    //กด 1) 1/2 | 2) 3/4 | 3) 1 | 4) 1 1/2 | 5) 2 | 6) 2 1/2 | 7) 3 | 8) 4 | 9) 6 | 10) >6
    printf("\nEnter your water meter size : ");
    scanf("%d",&service);

    // ใส่ปริมาณน้ำ
    // ราชการและธุรกิจขนาดเล็ก อัตราขั้นต่ำ 150 บาท / เดือน (8 ลบ.ม.)
    // รัฐวิสาหกิจ/อุตฯ/ธุรกิจขนาดใหญ่ อัตราขั้นต่ำ 300 บาท / เดือน (15 ลบ.ม.)
    printf("Enter amount of water : ");
    scanf("%f",&water);

    switch (choice)//การคำนวณค่าประปา
    {
    case 1: // ที่อยู่อาศัย
        if (water <= 10)
        {
            total = water * 10.20;
        }
        else if (water <= 20)
        {
            total = 10 * 10.20;
            water = water - 10;
            water = water * 16;
            total = total + water;
        }
        else if (water <= 30)
        {
            total = 10 * 10.20;
            water = water - 10;
            total = total+(10 * 16);
            water = water - 10;
            water = water * 19;
            total = total + water; 
        }
        else if (water <= 50)
        {
            total = 10 * 10.20;
            water = water - 10;
            total = total+(10 * 16);
            water = water - 10;
            total = total+(10 * 19);
            water = water - 10;
            water = water * 21.20;
            total = total + water;
        }
        else if (water <= 80) //หากเดือนใดใช้น้ำมากกว่า 50 ลบ.ม./เดือน ให้คิดอัตราค่าน้ำประปาเท่ากับผู้ใช้น้ำประเภท 2 ณ เวลานั้น โดยคิดตั้งแต่ ลบ.ม.ที่ 51
        {
            total = 10 * 10.20;
            water = water - 10;
            total = total+(10 * 16);
            water = water - 10;
            total = total+(10 * 19);
            water = water - 10;
            total = total+(20 * 21.20);
            water = water - 20;
            water = water * 24;
            total = total + water;
        }
        else if (water <= 100)
        {
            total = 10 * 10.20;
            water = water - 10;
            total = total+(10 * 16);
            water = water - 10;
            total = total+(10 * 19);
            water = water - 10;
            total = total+(20 * 21.20);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            water = water * 26;
            total = total + water;
        }
        else if (water <= 300)
        {
            total = 10 * 10.20;
            water = water - 10;
            total = total+(10 * 16);
            water = water - 10;
            total = total+(10 * 19);
            water = water - 10;
            total = total+(20 * 21.20);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            water = water * 30.25;
            total = total + water;
        }
        else if (water <= 1000)
        {
            total = 10 * 10.20;
            water = water - 10;
            total = total+(10 * 16);
            water = water - 10;
            total = total+(10 * 19);
            water = water - 10;
            total = total+(20 * 21.20);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            total = total+(200* 30.25);
            water = water - 200;
            water = water * 30.25;
            total = total + water;
        }
        else if (water <= 2000)
        {
            total = 10 * 10.20;
            water = water - 10;
            total = total+(10 * 16);
            water = water - 10;
            total = total+(10 * 19);
            water = water - 10;
            total = total+(20 * 21.20);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            total = total+(200 * 30.25);
            water = water - 200;
            total = total+(700 * 30.25);
            water = water - 700;
            water = water * 30.25;
            total = total + water;
        }
        else if (water <= 3000)
        {
            total = 10 * 10.20;
            water = water - 10;
            total = total+(10 * 16);
            water = water - 10;
            total = total+(10 * 19);
            water = water - 10;
            total = total+(20 * 21.20);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            total = total+(200 * 30.25);
            water = water - 200;
            total = total+(700 * 30.25);
            water = water - 700;
            total = total+(1000 * 30.25);
            water = water - 1000;
            water = water * 30.25;
            total = total + water;
        }
        else
        {
            total = 10 * 10.20;
            water = water - 10;
            total = total+(10 * 16);
            water = water - 10;
            total = total+(10 * 19);
            water = water - 10;
            total = total+(20 * 21.20);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            total = total+(200 * 30.25);
            water = water - 200;
            total = total+(700 * 30.25);
            water = water - 700;
            total = total+(1000 * 30.25);
            water = water - 1000;
            total = total+(1000 * 30.25);
            water = water - 1000;
            water = water * 30.25;
            total = total + water;
        }

        break;
    case 2: //2) ราชการและธุรกิจขนาดเล็ก อัตราขั้นต่ำ 150 บาท / เดือน (8 ลบ.ม.)
        if (water <= 8)
        {
            total = 150;
        }
        else if (water <= 10)
        {
            total = water * 18;
        }
        else if (water <= 20)
        {
            total = 10 * 18;
            water = water - 10;
            water = water * 21;
            total = total + water;
        }
        else if (water <= 30)
        {
            total = 10 * 18;
            water = water - 10;
            total = total+(10 * 21);
            water = water - 10;
            water = water * 22;
            total = total + water;
        }
        else if (water <= 50)
        {
            total = 10 * 18;
            water = water - 10;
            total = total+(10 * 21);
            water = water - 10;
            total = total+(10 * 22);
            water = water - 10;
            water = water * 23;
            total = total + water;
        }
        else if (water <= 80)
        {
            total = 10 * 18;
            water = water - 10;
            total = total+(10 * 21);
            water = water - 10;
            total = total+(10 * 22);
            water = water - 10;
            total = total+(20 * 23);
            water = water - 20;
            water = water * 24;
            total = total + water;
        }
        else if (water <= 100)
        {
            total = 10 * 18;
            water = water - 10;
            total = total+(10 * 21);
            water = water - 10;
            total = total+(10 * 22);
            water = water - 10;
            total = total+(20 * 23);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            water = water * 26;
            total = total + water;
        }
        else if (water <= 300)
        {
            total = 10 * 18;
            water = water - 10;
            total = total+(10 * 21);
            water = water - 10;
            total = total+(10 * 22);
            water = water - 10;
            total = total+(20 * 23);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            water = water * 30.25;
            total = total + water;
        }
        else if (water <= 1000)
        {
            total = 10 * 18;
            water = water - 10;
            total = total+(10 * 21);
            water = water - 10;
            total = total+(10 * 22);
            water = water - 10;
            total = total+(20 * 23);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            total = total+(200 * 30.25);
            water = water - 200;
            water = water * 30.25;
            total = total + water;
        }
        else if (water <= 2000)
        {
            total = 10 * 18;
            water = water - 10;
            total = total+(10 * 21);
            water = water - 10;
            total = total+(10 * 22);
            water = water - 10;
            total = total+(20 * 23);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            total = total+(200 * 30.25);
            water = water - 200;
            total = total+(700 * 30.25);
            water = water - 700;
            water = water * 30.25;
            total = total + water;
        }
        else if (water <= 3000)
        {
            total = 10 * 18;
            water = water - 10;
            total = total+(10 * 21);
            water = water - 10;
            total = total+(10 * 22);
            water = water - 10;
            total = total+(20 * 23);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            total = total+(200 * 30.25);
            water = water - 200;
            total = total+(700 * 30.25);
            water = water - 700;
            total = total+(1000 * 30.25);
            water = water - 1000;
            water = water * 30.25;
            total = total + water;
        }
        else
        {
            total = 10 * 18;
            water = water - 10;
            total = total+(10 * 21);
            water = water - 10;
            total = total+(10 * 22);
            water = water - 10;
            total = total+(20 * 23);
            water = water - 20;
            total = total+(30 * 24);
            water = water - 30;
            total = total+(20 * 26);
            water = water - 20;
            total = total+(200 * 30.25);
            water = water - 200;
            total = total+(700 * 30.25);
            water = water - 700;
            total = total+(1000 * 30.25);
            water = water - 1000;
            total = total+(1000 * 30.25);
            water = water - 1000;
            water = water * 30.25;
            total = total + water;
        }
        break;
    case 3: // รัฐวิสาหกิจ/อุตฯ/ธุรกิจขนาดใหญ่ อัตราขั้นต่ำ 300 บาท / เดือน (15 ลบ.ม.)
        if (water <= 15)
        {
            total = 300;
        }
        else if (water <= 20)
        {
            total = 10 * 18.50;
            water = water - 10;
            water = water * 22;
            total = total + water;
        }
        else if (water <= 30)
        {
            total = 10 * 18.50;
            water = water - 10;
            total = total +(10 * 22);
            water = water - 10;
            water = water * 26;
            total = total + water;
        }
        else if (water <= 50)
        {
            total = 10 * 18.50;
            water = water - 10;
            total = total +(10 * 22);
            water = water - 10;
            total = total +(10 * 26);
            water = water - 10;
            water = water * 29;
            total = total + water;
        }
        else if (water <= 80)
        {
            total = 10 * 18.50;
            water = water - 10;
            total = total +(10 * 22);
            water = water - 10;
            total = total +(10 * 26);
            water = water - 10;
            total = total +(20 * 29);
            water = water - 20;
            water = water * 31.50;
            total = total + water;
        }
        else if (water <= 100)
        {
            total = 10 * 18.50;
            water = water - 10;
            total = total +(10 * 22);
            water = water - 10;
            total = total +(10 * 26);
            water = water - 10;
            total = total +(20 * 29);
            water = water - 20;
            total = total +(30 * 31.50);
            water = water - 30;
            water = water * 32.50;
            total = total + water;
        }
        else if (water <= 300)
        {
            total = 10 * 18.50;
            water = water - 10;
            total = total +(10 * 22);
            water = water - 10;
            total = total +(10 * 26);
            water = water - 10;
            total = total +(20 * 29);
            water = water - 20;
            total = total +(30 * 31.50);
            water = water - 30;
            total = total +(20 * 32.50);
            water = water - 20;
            water = water * 33.50;
            total = total + water;
        }
        else if (water <= 1000)
        {
            total = 10 * 18.50;
            water = water - 10;
            total = total +(10 * 22);
            water = water - 10;
            total = total +(10 * 26);
            water = water - 10;
            total = total +(20 * 29);
            water = water - 20;
            total = total +(30 * 31.50);
            water = water - 30;
            total = total +(20 * 32.50);
            water = water - 20;
            total = total +(200 * 33.50);
            water = water - 200;
            water = water * 34.75;
            total = total + water;
        }
        else if (water <= 2000)
        {
            total = 10 * 18.50;
            water = water - 10;
            total = total +(10 * 22);
            water = water - 10;
            total = total +(10 * 26);
            water = water - 10;
            total = total +(20 * 29);
            water = water - 20;
            total = total +(30 * 31.50);
            water = water - 30;
            total = total +(20 * 32.50);
            water = water - 20;
            total = total +(200 * 33.50);
            water = water - 200;
            total = total +(700 * 34.75);
            water = water - 700;
            water = water * 34.75;
            total = total + water;
        }
        else if (water <= 3000)
        {
            total = 10 * 18.50;
            water = water - 10;
            total = total +(10 * 22);
            water = water - 10;
            total = total +(10 * 26);
            water = water - 10;
            total = total +(20 * 29);
            water = water - 20;
            total = total +(30 * 31.50);
            water = water - 30;
            total = total +(20 * 32.50);
            water = water - 20;
            total = total +(200 * 33.50);
            water = water - 200;
            total = total +(700 * 34.75);
            water = water - 700;
            total = total +(1000 * 34.75);
            water = water - 1000;
            water = water * 34.75;
            total = total + water;
        }
        else
        {
            total = 10 * 18.50;
            water = water - 10;
            total = total +(10 * 22);
            water = water - 10;
            total = total +(10 * 26);
            water = water - 10;
            total = total +(20 * 29);
            water = water - 20;
            total = total +(30 * 31.50);
            water = water - 30;
            total = total +(20 * 32.50);
            water = water - 20;
            total = total +(200 * 33.50);
            water = water - 200;
            total = total +(700 * 34.75);
            water = water - 700;
            total = total +(1000 * 34.75);
            water = water - 1000;
            total = total +(1000 * 34.75);
            water = water - 1000;
            water = water * 34.75;
            total = total + water;
        }
        break;
    default:
        break;
    }

    switch (service)//ขนาดมาตรน้ำ
    {
    case 1: // 1/2
        price = 30;
        break;
    case 2: // 3/4
        price = 50;
        break;
    case 3: // 1
        price = 60;
        break;
    case 4: // 1 1/2
        price = 90;
        break;
    case 5: // 2
        price = 350;
        break;
    case 6: // 2 1/2
        price = 450;
        break;
    case 7: // 3
        price = 450;
        break;
    case 8: // 4
        price = 550;
        break;
    case 9: // 6
        price = 950;
        break;
    case 10: // >6
        price = 1200;
        break;
    default:
        break;
    }

    printf("Sum price water = %0.2f BATH",total);
    printf("\nService = %0.2f BATH",price);
    total = total+price;
    vat = (total*7)/100;
    printf("\nVAT = %0.2f BATH",vat);
    total = total + vat;
    printf("\nTotal = %0.2f BATH",total);
}