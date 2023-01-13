#include <stdio.h>
int main(){
                                        // variables
  int user_choice;
  int roll_no;
  int sub1, sub2, sub3, sub4, sub5;
  int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0, flag6 = 0;
  float gpSub1, gpSub2, gpSub3, gpSub4, gpSub5;
  float gradepoint_1=0,gradepoint_2=0,gradepoint_3=0,gradepoint_4=0,gradepoint_5=0;
  int ch1=3,ch2=3,ch3=3,ch4=3,ch5=3;
  float gpa=0;
  float credit_hour=ch1+ch2+ch3+ch4+ch5;

  while (flag1 == 0 || flag2 == 0 || flag3 == 0 || flag4 == 0 || flag5 == 0 || flag6 == 0)
  {

    do{

        printf("\nEnter 1 for Roll number");
        printf("\nEnter 2 for marks in DS");
        printf("\nEnter 3 for marks in PF");
        printf("\nEnter 4 for marks in OOP");
        printf("\nEnter 5 for marks in DSA");
        printf("\nEnter 6 for marks in English");
        printf("\n\n\nEnter your choice__\b\b");
        scanf("%d", &user_choice);

    }  while(user_choice < 1 || user_choice > 6);


    // user choices

      switch (user_choice) {
        case 1:
                do{
                  printf("Enter your Roll Number:");
                  scanf("%d",&roll_no);
                }while(roll_no<1||roll_no>60);
              flag1=1;
                  break;
      case 2:
                do{
                  printf("Enter marks in DS:__\b\b");
                  scanf("%d",&sub1);
                  }while(sub1<0||sub1>100);
              flag2=1;

                 if(sub1>=85){
                   gradepoint_1=4.0;
                 }
                 else if(sub1>=80){
                   gradepoint_1=3.7;
                 }
                 else if(sub1>=75){
                   gradepoint_1=3.3;
                 }
                 else if(sub1>=70){
                   gradepoint_1=3.0;
                 }
                 else if(sub1>=65){
                   gradepoint_1=2.7;
                 }
                 else if(sub1>=61){
                   gradepoint_1=2.3;
                 }
                 else if(sub1>=58){
                   gradepoint_1=2.0;
                 }
                 else if(sub1>=55){
                   gradepoint_1=1.7;
                 }
                 else{
                   gradepoint_1=0.0;
                 }
          gpSub1=gradepoint_1*ch1;
           printf("\n\n\t\tgrade point for this subject is:%.2f\n\n",gradepoint_1);

              break;
      case 3:
               do{
                 printf("\n\nEnter marks in PF:__\b\b");
                 scanf("%d",&sub2);
               }while(sub2<0||sub2>100);
              flag3=1;

                               if(sub2>=85){
                                 gradepoint_2=4.0;
                               }
                               else if(sub2>=80){
                                 gradepoint_2=3.7;
                               }
                               else if(sub2>=75){
                                 gradepoint_2=3.3;
                               }
                               else if(sub2>=70){
                                 gradepoint_2=3.0;
                               }
                               else if(sub2>=65){
                                 gradepoint_2=2.7;
                               }
                               else if(sub2>=61){
                                 gradepoint_2=2.3;
                               }
                               else if(sub2>=58){
                                 gradepoint_2=2.0;
                               }
                               else if(sub2>=55){
                                 gradepoint_2=1.7;
                               }
                               else{
                                 gradepoint_2=0.0;
                               }
                               printf("\n\n\t\tgrade point for this subject is:%.2f\n\n",gradepoint_2);
                        gpSub2=gradepoint_2*ch2;


             break;
      case 4:
                do{
                   printf("\n\nEnter marks in OOP:__\b\b");
                   scanf("%d",&sub3);
                 }while(sub3<0||sub3>100);
              flag4=1;
              if(sub3>=85){
                gradepoint_3=4.0;
              }
              else if(sub3>=85){
                gradepoint_3=3.7;
              }
              else if(sub3>=75){
                gradepoint_3=3.3;
              }
              else if(sub3>=70){
                gradepoint_3=3.0;
              }
              else if(sub3>=65){
                gradepoint_3=2.7;
              }
              else if(sub3>=61){
                gradepoint_3=2.3;
              }
              else if(sub3>=58){
                gradepoint_3=2.0;
              }
              else if(sub3>=55){
                gradepoint_3=1.7;
              }
              else{
                gradepoint_3=0.0;
              }
       gpSub3=gradepoint_3*ch3;
                 printf("\n\n\t\tgrade point for this subject is:%.2f\n\n",gradepoint_3);

              break;

      case 5:
                do{
                    printf("\n\nEnter marks in DSA:__\b\b");
                    scanf("%d",&sub4);
                  }while(sub4<0||sub4>100);
                flag5=1;
                if(sub4>=85){
                  gradepoint_4=4.0;
                }
                else if(sub4>=80){
                  gradepoint_4=3.7;
                }
                else if(sub4>=75){
                  gradepoint_4=3.3;
                }
                else if(sub4>=70){
                  gradepoint_4=3.0;
                }
                else if(sub4>=65){
                  gradepoint_4=2.7;
                }
                else if(sub4>=61){
                  gradepoint_4=2.3;
                }
                else if(sub4>=58){
                  gradepoint_4=2.0;
                }
                else if(sub4>=55){
                  gradepoint_4=1.7;
                }
                else{
                  gradepoint_4=0.0;
                }
         gpSub4=gradepoint_4*ch4;
                   printf("\n\n\t\tgrade point for this subject is:%.2f\n\n",gradepoint_4);

                  break;
      case 6:
                do{
                    printf("\n\nEnter marks in English:__\b\b");
                    scanf("%d",&sub5);
                  }while(sub5<0||sub5>100);
                flag6=1;
                if(sub5>=85){
                  gradepoint_5=4.0;
                }
                else if(sub5>=80){
                  gradepoint_5=3.7;
                }
                else if(sub5>=75){
                  gradepoint_5=3.3;
                }
                else if(sub5>=70){
                  gradepoint_5=3.0;
                }
                else if(sub5>=65){
                  gradepoint_5=2.7;
                }
                else if(sub5>=61){
                  gradepoint_5=2.3;
                }
                else if(sub5>=58){
                  gradepoint_5=2.0;
                }
                else if(sub5>=55){
                  gradepoint_5=1.7;
                }
                else{
                  gradepoint_5=0.0;
                }
         gpSub5=gradepoint_5*ch5;
                     printf("\n\n\t\tgrade point for this subject is:%.2f\n\n",gradepoint_5);

                break;
      }

  }
   gpa=(gpSub1+gpSub2+gpSub3+gpSub4+gpSub5);
  gpa=gpa/credit_hour;
   printf("\n\n\n\t\t\tYour gpa is: %.2f\n\n",gpa);
   printf("\t\t\t");
   if(gpa>=4.0){
       printf("Your Grade is: A");
   }
   else if(gpa>=3.7){
     printf("Your Grade is:  A-");
   }
   else if(gpa>=3.3){
    printf("Your Grade is: B+");
   }
   else if(gpa>=3.0){
    printf("Your Grade is: B");
   }
   else if(gpa>=2.7){
     printf("Your Grade is: B-");
   }
   else if(gpa>=2.3){
     printf("Your Grade is: C+");
   }
   else if(gpa>=2.0){
    printf("Your Grade is: C");
   }
   else if(gpa>=1.7){
     printf("Your Grade is: C-");
   }
   else if(gpa>=1.00){
        printf("Your Grade is: D");
   }
   else{
     printf("Your Grade is: F");
   }

}
