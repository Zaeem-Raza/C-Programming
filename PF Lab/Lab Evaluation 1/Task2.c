#include <stdio.h>
int main(){
  int num;

  do{
    printf("Enter a number (0-35000)");
    scanf("%d",&num);
  }while(num<0 || num>35000);
  // printf("number :%d",num);

      // clone of this Number
  int clone1=num;
  int count=0;
  //counting the number of Digits
  while(clone1!=0){
    clone1=clone1/10;
    count++;
  }
  int unit;
  int tens;
  int hundreds;
  int thousands;
  int tenth;
  // printf("The number of digits are: %d",count);

    switch (count) {  //outer switch
      // for one digit
      case 1:
            if(num==0){
              printf("zero");
            }
            else if(num==1){
              printf("one");
            }
            else if(num==2){
              printf("two");
            }
            else if(num==3){
              printf("three");
            }
            else if(num==4){
              printf("four");
            }
            else if(num==5){
              printf("five");
            }
            else if(num==6){
              printf("six");
            }
            else if(num==7){
              printf("seven");
            }
            else if(num==8){
              printf("eight");
            }
            else if(num==9){
              printf("nine");
            }
            else{
              printf("");
            }
            break;
      // for two digits
      case 2:
             unit=num%10;
             // printf("%d",unit);
             tens=num/10;
             // printf("%d",tens);

             switch (tens) {
               case 1:
                      if(unit==0){
                        printf("ten");
                      }
                      else if(unit==1){
                        printf("Eleven");
                      }
                      else if(unit==2){
                        printf("Twelve");
                      }
                      else if(unit==3){
                        printf("thirteen");
                      }
                      else if(unit==4){
                        printf("fourteen");
                      }
                      else if(unit==5){
                        printf("fifteen");
                      }
                      else if(unit==6){
                        printf("sixteen");
                      }
                      else if(unit==7){
                        printf("seventeen");
                      }
                      else if(unit==8){
                        printf("Eighteen");
                      }
                      else if(unit==9) {
                        printf("nineteen");
                      }
                      else{
                        printf("");
                      }
                      break;
                case 2:
                       printf("twenty ");
                       if(unit==0){
                         printf("");
                       }
                       else if(unit==1){
                         printf("one");
                       }
                       else if(unit==2){
                         printf("two");
                       }
                       else if(unit==3){
                         printf("three");
                       }
                       else if(unit==4){
                         printf("four");
                       }
                       else if(unit==5){
                         printf("five");
                       }
                       else if(unit==6){
                         printf("six");
                       }
                       else if(unit==7){
                         printf("seven");
                       }
                       else if(unit==8){
                         printf("eight");
                       }
                       else if(unit==9) {
                         printf("nine");
                       }
                       else{
                         printf("");
                       }
                       break;
              case 3:
                       printf("Thirty ");
                       if(unit==0){
                         printf("");
                       }
                       else if(unit==1){
                         printf("one");
                       }
                       else if(unit==2){
                         printf("two");
                       }
                       else if(unit==3){
                         printf("three");
                       }
                       else if(unit==4){
                         printf("four");
                       }
                       else if(unit==5){
                         printf("five");
                       }
                       else if(unit==6){
                         printf("six");
                       }
                       else if(unit==7){
                         printf("seven");
                       }
                       else if(unit==8){
                         printf("eight");
                       }
                       else if(unit==9) {
                         printf("nine");
                       }
                       else{
                         printf("");
                       }
                       break;
                case 4:
                      printf("Forty ");
                      if(unit==0){
                        printf("");
                      }
                      else if(unit==1){
                        printf("one");
                      }
                      else if(unit==2){
                        printf("two");
                      }
                      else if(unit==3){
                        printf("three");
                      }
                      else if(unit==4){
                        printf("four");
                      }
                      else if(unit==5){
                        printf("five");
                      }
                      else if(unit==6){
                        printf("six");
                      }
                      else if(unit==7){
                        printf("seven");
                      }
                      else if(unit==8){
                        printf("eight");
                      }
                      else if(unit==9) {
                        printf("nine");
                      }
                      else{
                        printf("");
                      }
                      break;
                case 5:
                       printf("Fifty ");
                       if(unit==0){
                         printf("");
                       }
                       else if(unit==1){
                         printf("one");
                       }
                       else if(unit==2){
                         printf("two");
                       }
                       else if(unit==3){
                         printf("three");
                       }
                       else if(unit==4){
                         printf("four");
                       }
                       else if(unit==5){
                         printf("five");
                       }
                       else if(unit==6){
                         printf("six");
                       }
                       else if(unit==7){
                         printf("seven");
                       }
                       else if(unit==8){
                         printf("eight");
                       }
                       else if(unit==9) {
                         printf("nine");
                       }
                       else{
                         printf("");
                       }
                       break;
                case 6:
                              printf("Sixty ");
                              if(unit==0){
                                printf("");
                              }
                              else if(unit==1){
                                printf("one");
                              }
                              else if(unit==2){
                                printf("two");
                              }
                              else if(unit==3){
                                printf("three");
                              }
                              else if(unit==4){
                                printf("four");
                              }
                              else if(unit==5){
                                printf("five");
                              }
                              else if(unit==6){
                                printf("six");
                              }
                              else if(unit==7){
                                printf("seven");
                              }
                              else if(unit==8){
                                printf("eight");
                              }
                              else if(unit==9) {
                                printf("nine");
                              }
                              else{
                                printf("");
                              }
                        break;
                 case 7:
                                     printf("Seventy ");
                                     if(unit==0){
                                       printf("");
                                     }
                                     else if(unit==1){
                                       printf("one");
                                     }
                                     else if(unit==2){
                                       printf("two");
                                     }
                                     else if(unit==3){
                                       printf("three");
                                     }
                                     else if(unit==4){
                                       printf("four");
                                     }
                                     else if(unit==5){
                                       printf("five");
                                     }
                                     else if(unit==6){
                                       printf("six");
                                     }
                                     else if(unit==7){
                                       printf("seven");
                                     }
                                     else if(unit==8){
                                       printf("eight");
                                     }
                                     else if(unit==9) {
                                       printf("nine");
                                     }
                                     else{
                                       printf("");
                                     }
                       break;
               case 8:
                                            printf("Eighty ");
                                            if(unit==0){
                                              printf("");
                                            }
                                            else if(unit==1){
                                              printf("one");
                                            }
                                            else if(unit==2){
                                              printf("two");
                                            }
                                            else if(unit==3){
                                              printf("three");
                                            }
                                            else if(unit==4){
                                              printf("four");
                                            }
                                            else if(unit==5){
                                              printf("five");
                                            }
                                            else if(unit==6){
                                              printf("six");
                                            }
                                            else if(unit==7){
                                              printf("seven");
                                            }
                                            else if(unit==8){
                                              printf("eight");
                                            }
                                            else if(unit==9) {
                                              printf("nine");
                                            }
                                            else{
                                              printf("");
                                            }
                        break;
                case 9:
                                                   printf("Ninety ");
                                                   if(unit==0){
                                                     printf("");
                                                   }
                                                   else if(unit==1){
                                                     printf("one");
                                                   }
                                                   else if(unit==2){
                                                     printf("two");
                                                   }
                                                   else if(unit==3){
                                                     printf("three");
                                                   }
                                                   else if(unit==4){
                                                     printf("four");
                                                   }
                                                   else if(unit==5){
                                                     printf("five");
                                                   }
                                                   else if(unit==6){
                                                     printf("six");
                                                   }
                                                   else if(unit==7){
                                                     printf("seven");
                                                   }
                                                   else if(unit==8){
                                                     printf("eight");
                                                   }
                                                   else if(unit==9) {
                                                     printf("nine");
                                                   }
                                                   else{
                                                     printf("");
                                                   }
                      break;

             }
             break;
      // for three digits
      case 3:
            hundreds=num/100;
            // printf("%d hundred and ",hundreds);
            unit=num%10;
            // printf("unit is%d\n",unit);
            tens=num/10;
            tens=tens%10;
            // printf("tens:%d\n",tens);
            switch (hundreds) {
              case 1:  printf("one hundred ");
              switch (tens) {
                case 0:
                if(unit==1){
                 printf("one");
               }
               else if(unit==2){
                 printf("two");
               }
               else if(unit==3){
                 printf("three");
               }
               else if(unit==4){
                 printf("four");
               }
               else if(unit==5){
                 printf("five");
               }
               else if(unit==6){
                 printf("six");
               }
               else if(unit==7){
                 printf("seven");
               }
               else if(unit==8){
                 printf("eight");
               }
               else if(unit==9){
                 printf("nine");
               }
               else{
                 printf("");
               }
              }

                  break;
              case 2:  printf("two hundred ");break;
              case 3: printf("three hundred ");break;
              case 4: printf("four hundred ");break;
              case 5: printf("five hundred ");break;
              case 6: printf("six hundred ");break;
              case 7: printf("seven hundred ");break;
              case 8: printf("eight hundred ");break;
              case 9: printf("nine hundred ");break;
            }
            // printf("hundred ");
            switch (tens) {
              case 0:
              if(unit==0){
                printf("");
              }
              else if(unit==1){
                printf("one");
              }
              else if(unit==2){
                printf("two");
              }
              else if(unit==3){
                printf("three");
              }
              else if(unit==4){
                printf("four");
              }
              else if(unit==5){
                printf("five");
              }
              else if(unit==6){
                printf("six");
              }
              else if(unit==7){
                printf("seven");
              }
              else if(unit==8){
                printf("eight");
              }
              else if(unit==9) {
                printf("nine");
              }
              else{
                printf("");
              }
              break;
              case 1:
                     if(unit==0){
                       printf("ten");
                     }
                     else if(unit==1){
                       printf("Eleven");
                     }
                     else if(unit==2){
                       printf("Twelve");
                     }
                     else if(unit==3){
                       printf("thirteen");
                     }
                     else if(unit==4){
                       printf("fourteen");
                     }
                     else if(unit==5){
                       printf("fifteen");
                     }
                     else if(unit==6){
                       printf("sixteen");
                     }
                     else if(unit==7){
                       printf("seventeen");
                     }
                     else if(unit==8){
                       printf("Eighteen");
                     }
                     else if(unit==9) {
                       printf("nineteen");
                     }
                     else{
                       printf("");
                     }
                     break;
               case 2:
                      printf("twenty ");
                      if(unit==0){
                        printf("");
                      }
                      else if(unit==1){
                        printf("one");
                      }
                      else if(unit==2){
                        printf("two");
                      }
                      else if(unit==3){
                        printf("three");
                      }
                      else if(unit==4){
                        printf("four");
                      }
                      else if(unit==5){
                        printf("five");
                      }
                      else if(unit==6){
                        printf("six");
                      }
                      else if(unit==7){
                        printf("seven");
                      }
                      else if(unit==8){
                        printf("eight");
                      }
                      else if(unit==9) {
                        printf("nine");
                      }
                      else{
                        printf("");
                      }
                      break;
             case 3:
                      printf("Thirty ");
                      if(unit==0){
                        printf("");
                      }
                      else if(unit==1){
                        printf("one");
                      }
                      else if(unit==2){
                        printf("two");
                      }
                      else if(unit==3){
                        printf("three");
                      }
                      else if(unit==4){
                        printf("four");
                      }
                      else if(unit==5){
                        printf("five");
                      }
                      else if(unit==6){
                        printf("six");
                      }
                      else if(unit==7){
                        printf("seven");
                      }
                      else if(unit==8){
                        printf("eight");
                      }
                      else if(unit==9) {
                        printf("nine");
                      }
                      else{
                        printf("");
                      }
                      break;
               case 4:
                     printf("Forty ");
                     if(unit==0){
                       printf("");
                     }
                     else if(unit==1){
                       printf("one");
                     }
                     else if(unit==2){
                       printf("two");
                     }
                     else if(unit==3){
                       printf("three");
                     }
                     else if(unit==4){
                       printf("four");
                     }
                     else if(unit==5){
                       printf("five");
                     }
                     else if(unit==6){
                       printf("six");
                     }
                     else if(unit==7){
                       printf("seven");
                     }
                     else if(unit==8){
                       printf("eight");
                     }
                     else if(unit==9) {
                       printf("nine");
                     }
                     else{
                       printf("");
                     }
                     break;
               case 5:
                      printf("Fifty ");
                      if(unit==0){
                        printf("");
                      }
                      else if(unit==1){
                        printf("one");
                      }
                      else if(unit==2){
                        printf("two");
                      }
                      else if(unit==3){
                        printf("three");
                      }
                      else if(unit==4){
                        printf("four");
                      }
                      else if(unit==5){
                        printf("five");
                      }
                      else if(unit==6){
                        printf("six");
                      }
                      else if(unit==7){
                        printf("seven");
                      }
                      else if(unit==8){
                        printf("eight");
                      }
                      else if(unit==9) {
                        printf("nine");
                      }
                      else{
                        printf("");
                      }
                      break;
               case 6:
                             printf("Sixty ");
                             if(unit==0){
                               printf("");
                             }
                             else if(unit==1){
                               printf("one");
                             }
                             else if(unit==2){
                               printf("two");
                             }
                             else if(unit==3){
                               printf("three");
                             }
                             else if(unit==4){
                               printf("four");
                             }
                             else if(unit==5){
                               printf("five");
                             }
                             else if(unit==6){
                               printf("six");
                             }
                             else if(unit==7){
                               printf("seven");
                             }
                             else if(unit==8){
                               printf("eight");
                             }
                             else if(unit==9) {
                               printf("nine");
                             }
                             else{
                               printf("");
                             }
                             break;
                case 7:
                                    printf("Seventy ");
                                    if(unit==0){
                                      printf("");
                                    }
                                    else if(unit==1){
                                      printf("one");
                                    }
                                    else if(unit==2){
                                      printf("two");
                                    }
                                    else if(unit==3){
                                      printf("three");
                                    }
                                    else if(unit==4){
                                      printf("four");
                                    }
                                    else if(unit==5){
                                      printf("five");
                                    }
                                    else if(unit==6){
                                      printf("six");
                                    }
                                    else if(unit==7){
                                      printf("seven");
                                    }
                                    else if(unit==8){
                                      printf("eight");
                                    }
                                    else if(unit==9) {
                                      printf("nine");
                                    }
                                    else{
                                      printf("");
                                    }
                                    break;
                case 8:
                                           printf("Eighty ");
                                           if(unit==0){
                                             printf("");
                                           }
                                           else if(unit==1){
                                             printf("one");
                                           }
                                           else if(unit==2){
                                             printf("two");
                                           }
                                           else if(unit==3){
                                             printf("three");
                                           }
                                           else if(unit==4){
                                             printf("four");
                                           }
                                           else if(unit==5){
                                             printf("five");
                                           }
                                           else if(unit==6){
                                             printf("six");
                                           }
                                           else if(unit==7){
                                             printf("seven");
                                           }
                                           else if(unit==8){
                                             printf("eight");
                                           }
                                           else if(unit==9) {
                                             printf("nine");
                                           }
                                           else{
                                             printf("");
                                           }
                                           break;
               case 9:
                                                  printf("Ninety ");
                                                  if(unit==0){
                                                    printf("");
                                                  }
                                                  else if(unit==1){
                                                    printf("one");
                                                  }
                                                  else if(unit==2){
                                                    printf("two");
                                                  }
                                                  else if(unit==3){
                                                    printf("three");
                                                  }
                                                  else if(unit==4){
                                                    printf("four");
                                                  }
                                                  else if(unit==5){
                                                    printf("five");
                                                  }
                                                  else if(unit==6){
                                                    printf("six");
                                                  }
                                                  else if(unit==7){
                                                    printf("seven");
                                                  }
                                                  else if(unit==8){
                                                    printf("eight");
                                                  }
                                                  else if(unit==9) {
                                                    printf("nine");
                                                  }
                                                  else{
                                                    printf("");
                                                  }
                                                  break;

            }
            break;

        break;

      // for 4 digits

    case 4:
            unit=num%10;
            // printf("unit is :%d\n",unit);
            tens=num/10;
            tens=tens%10;
            // printf("tens are :%d\n",tens);

            hundreds=num/100;
            hundreds=hundreds%10;
            // printf("hundreds: %d",hundreds);
            thousands=num/1000;
            // printf("thousands :%d\n",thousands);

            switch (thousands) {
              case 1:
                      printf("one thousand ");break;
              case 2:
                       printf("two thousand ");break;
              case 3:
                      printf("three thousand ");break;
              case 4:
                      printf("four thousand ");break;
              case 5:
                      printf("five thousand ");break;
              case 6:
                     printf("six thousand ");break;
              case 7:
                    printf("seven thousand ");break;
              case 8:
                    printf("eight thousand ");break;
              case 9:
                    printf("nine thousand ");break;
            }
            switch (hundreds) {
              case 1:  printf("one hundred ");
               if(unit==1){
                printf("one");
              }
              else if(unit==2){
                printf("two");
              }
              else if(unit==3){
                printf("three");
              }
              else if(unit==4){
                printf("four");
              }
              else if(unit==5){
                printf("five");
              }
              else if(unit==6){
                printf("six");
              }
              else if(unit==7){
                printf("seven");
              }
              else if(unit==8){
                printf("eight");
              }
              else if(unit==9) {
                printf("nine");
              }
              else{
                printf("");
              }
                  break;
              case 2:  printf("two hundred ");break;
              case 3: printf("three hundred ");break;
              case 4: printf("four hundred ");break;
              case 5: printf("five hundred ");break;
              case 6: printf("six hundred ");break;
              case 7: printf("seven hundred ");break;
              case 8: printf("eight hundred ");break;
              case 9: printf("nine hundred ");break;
                   }
            // printf("hundred ");
            switch (tens) {
printf("\n%d",tens);
              case 0:
              if(unit==1){
                printf("one");
              }
              else if(unit==2){
                printf("two");
              }
              else if(unit==3){
                printf("three");
              }
              else if(unit==4){
                printf("four");
              }
              else if(unit==5){
                printf("five");
              }
              else if(unit==6){
                printf("six");
              }
              else if(unit==7){
                printf("seven");
              }
              else if(unit==8){
                printf("eight");
              }
              else if(unit==9) {
                printf("nine");

              }
              else{
                printf("");
              } break;
              case 1:
                     if(unit==0){
                       printf("ten");
                     }
                     else if(unit==1){
                       printf("Eleven");
                     }
                     else if(unit==2){
                       printf("Twelve");
                     }
                     else if(unit==3){
                       printf("thirteen");
                     }
                     else if(unit==4){
                       printf("fourteen");
                     }
                     else if(unit==5){
                       printf("fifteen");
                     }
                     else if(unit==6){
                       printf("sixteen");
                     }
                     else if(unit==7){
                       printf("seventeen");
                     }
                     else if(unit==8){
                       printf("Eighteen");
                     }
                     else if (unit==9){
                       printf("nineteen");
                     }
                     else{
                       printf("");
                     }
                     break;
               case 2:
                      printf("twenty ");
                      if(unit==0){
                        printf("");
                      }
                      else if(unit==1){
                        printf("one");
                      }
                      else if(unit==2){
                        printf("two");
                      }
                      else if(unit==3){
                        printf("three");
                      }
                      else if(unit==4){
                        printf("four");
                      }
                      else if(unit==5){
                        printf("five");
                      }
                      else if(unit==6){
                        printf("six");
                      }
                      else if(unit==7){
                        printf("seven");
                      }
                      else if(unit==8){
                        printf("eight");
                      }
                      else if(unit==9){
                        printf("nine");
                      }
                      else {
                        printf("");

                      }
                      break;
             case 3:
                      printf("Thirty ");
                      if(unit==0){
                        printf("");
                      }
                      else if(unit==1){
                        printf("one");
                      }
                      else if(unit==2){
                        printf("two");
                      }
                      else if(unit==3){
                        printf("three");
                      }
                      else if(unit==4){
                        printf("four");
                      }
                      else if(unit==5){
                        printf("five");
                      }
                      else if(unit==6){
                        printf("six");
                      }
                      else if(unit==7){
                        printf("seven");
                      }
                      else if(unit==8){
                        printf("eight");
                      }
                      else if(unit==9){
                        printf("nine");
                      }
                      else {
                        printf("");
                      }
                      break;
               case 4:
                     printf("Forty ");
                     if(unit==0){
                       printf("");
                     }
                     else if(unit==1){
                       printf("one");
                     }
                     else if(unit==2){
                       printf("two");
                     }
                     else if(unit==3){
                       printf("three");
                     }
                     else if(unit==4){
                       printf("four");
                     }
                     else if(unit==5){
                       printf("five");
                     }
                     else if(unit==6){
                       printf("six");
                     }
                     else if(unit==7){
                       printf("seven");
                     }
                     else if(unit==8){
                       printf("eight");
                     }
                     else if(unit==9){
                       printf("nine");
                     }
                     else {
                       printf("");
                     }
                     break;
               case 5:
                      printf("Fifty ");
                      if(unit==0){
                        printf("");
                      }
                      else if(unit==1){
                        printf("one");
                      }
                      else if(unit==2){
                        printf("two");
                      }
                      else if(unit==3){
                        printf("three");
                      }
                      else if(unit==4){
                        printf("four");
                      }
                      else if(unit==5){
                        printf("five");
                      }
                      else if(unit==6){
                        printf("six");
                      }
                      else if(unit==7){
                        printf("seven");
                      }
                      else if(unit==8){
                        printf("eight");
                      }
                      else if(unit==9){
                        printf("nine");
                      }
                      else {
                        printf("");
                      }
                      break;
               case 6:
                             printf("Sixty ");
                             if(unit==0){
                               printf("");
                             }
                             else if(unit==1){
                               printf("one");
                             }
                             else if(unit==2){
                               printf("two");
                             }
                             else if(unit==3){
                               printf("three");
                             }
                             else if(unit==4){
                               printf("four");
                             }
                             else if(unit==5){
                               printf("five");
                             }
                             else if(unit==6){
                               printf("six");
                             }
                             else if(unit==7){
                               printf("seven");
                             }
                             else if(unit==8){
                               printf("eight");
                             }
                             else if(unit==9){
                               printf("nine");
                             }
                             else {
                               printf("");
                             }
                             break;
                case 7:
                                    printf("Seventy ");
                                    if(unit==0){
                                      printf("");
                                    }
                                    else if(unit==1){
                                      printf("one");
                                    }
                                    else if(unit==2){
                                      printf("two");
                                    }
                                    else if(unit==3){
                                      printf("three");
                                    }
                                    else if(unit==4){
                                      printf("four");
                                    }
                                    else if(unit==5){
                                      printf("five");
                                    }
                                    else if(unit==6){
                                      printf("six");
                                    }
                                    else if(unit==7){
                                      printf("seven");
                                    }
                                    else if(unit==8){
                                      printf("eight");
                                    }
                                    else if(unit==9){
                                      printf("nine");
                                    }
                                    else {
                                      printf("");
                                    }
                                    break;
                case 8:
                                           printf("Eighty ");
                                           if(unit==0){
                                             printf("");
                                           }
                                           else if(unit==1){
                                             printf("one");
                                           }
                                           else if(unit==2){
                                             printf("two");
                                           }
                                           else if(unit==3){
                                             printf("three");
                                           }
                                           else if(unit==4){
                                             printf("four");
                                           }
                                           else if(unit==5){
                                             printf("five");
                                           }
                                           else if(unit==6){
                                             printf("six");
                                           }
                                           else if(unit==7){
                                             printf("seven");
                                           }
                                           else if(unit==8){
                                             printf("eight");
                                           }
                                           else if(unit==9){
                                             printf("nine");
                                           }
                                           else {
                                             printf("");
                                           }
                                           break;
               case 9:
                                                  printf("Ninety ");
                                                  if(unit==0){
                                                    printf("");
                                                  }
                                                  else if(unit==1){
                                                    printf("one");
                                                  }
                                                  else if(unit==2){
                                                    printf("two");
                                                  }
                                                  else if(unit==3){
                                                    printf("three");
                                                  }
                                                  else if(unit==4){
                                                    printf("four");
                                                  }
                                                  else if(unit==5){
                                                    printf("five");
                                                  }
                                                  else if(unit==6){
                                                    printf("six");
                                                  }
                                                  else if(unit==7){
                                                    printf("seven");
                                                  }
                                                  else if(unit==8){
                                                    printf("eight");
                                                  }
                                                  else if(unit==9){
                                                    printf("nine");
                                                  }
                                                  else {
                                                    printf("");
                                                  }
                                                  break;

            }
            break;

     // for five digits
     case 5:
            unit=num%10;
            // printf("unit :%d\n",unit);
            tens=num/10;
            tens=tens%10;
            // printf("tens: %d",tens);
            hundreds=num/100;
            hundreds=hundreds%10;
            // printf("\nHundreds:%d",hundreds);
            thousands=num/1000;
            thousands=thousands%10;
            // printf("\nThousands: %d",thousands);
            tenth=num/10000;
            tenth=tenth%10;
            // printf("\ntenth:%d",tenth);
       switch (tenth) {
         case 1:
                if(thousands==0){
                  printf("ten thousand");
                }
                else if(thousands==1){
                  printf("eleven thousand");
                }
                else if(thousands==2){
                  printf("twelve thousand");
                }
                else if(thousands==3){
                  printf("thirteen thousand");
                }
                else if(thousands==4){
                  printf("fourteen thousand");
                }
                else if(thousands==5){
                  printf("Fifteen thousand");
                }
                else if(thousands==6){
                  printf("Sixteen thousand");
                }
                else if(thousands==7){
                  printf("seventeen thousand");
                }
                else if(thousands==8){
                  printf("Eighteen thousnad");
                }
                else{
                  printf("nineteen thousand");
                }
                break;
         case 2:
                printf("twenty");
                 if(thousands==1){
                  printf(" one thousand ");
                }
                else if(thousands==0){
                  printf(" thousand");
                }
                else if(thousands==2){
                  printf(" two thousand ");
                }
                else if(thousands==3){
                  printf(" three thousand ");
                }
                else if(thousands==4){
                  printf(" four thousand ");
                }
                else if(thousands==5){
                  printf(" five thousand ");
                }
                else if(thousands==6){
                  printf(" six thousand ");
                }
                else if(thousands==7){
                  printf(" seven thousand ");
                }
                else if(thousands==8){
                  printf(" eight thousand ");
                }
                else if(thousands==9){
                  printf(" nine thousand ");
                }
                else{
                  printf("");
                }
              break;
         case 3:
                printf("Thirty ");
                if(thousands==1){
                 printf(" one thousand ");
               }
               else if(thousands==2){
                 printf(" two thousand ");
               }
               else if(thousands==3){
                 printf(" three thousand ");
               }
               else if(thousands==4){
                 printf(" four thousand ");
               }
               else if(thousands==5){
                 printf(" five thousand ");
               }
               else{
                 printf("");
               }
          break;
       }
       printf(" ");
       switch (hundreds) {
         case 1:  printf("one hundred ");
         switch (tens) {
           case 0:
           if(unit==1){
            printf(" one");
          }
          else if(unit==2){
            printf(" two");
          }
          else if(unit==3){
            printf(" three");
          }
          else if(unit==4){
            printf(" four");
          }
          else if(unit==5){
            printf(" five");
          }
          else if(unit==6){
            printf(" six");
          }
          else if(unit==7){
            printf(" seven");
          }
          else if(unit==8){
            printf(" eight");
          }
          else if(unit==9){
            printf(" nine");
          }
          else{
            printf("");
          }
         }

             break;
         case 2:  printf("two hundred ");break;
         case 3: printf("three hundred ");break;
         case 4: printf("four hundred ");break;
         case 5: printf("five hundred ");break;
         case 6: printf("six hundred ");break;
         case 7: printf("seven hundred ");break;
         case 8: printf("eight hundred ");break;
         case 9: printf("nine hundred ");break;
       }
       // printf("hundred ");
       switch (tens) {
         case 0:
         if(unit==0){
           printf("");
         }
         else if(unit==1){
           printf("one");
         }
         else if(unit==2){
           printf("two");
         }
         else if(unit==3){
           printf("three");
         }
         else if(unit==4){
           printf("four");
         }
         else if(unit==5){
           printf("five");
         }
         else if(unit==6){
           printf("six");
         }
         else if(unit==7){
           printf("seven");
         }
         else if(unit==8){
           printf("eight");
         }
         else if(unit==9) {
           printf("nine");
         }
         else{
           printf("");
         }
         break;
         case 1:
                if(unit==0){
                  printf(" ten");
                }
                else if(unit==1){
                  printf(" Eleven");
                }
                else if(unit==2){
                  printf(" Twelve");
                }
                else if(unit==3){
                  printf(" thirteen");
                }
                else if(unit==4){
                  printf(" fourteen");
                }
                else if(unit==5){
                  printf(" fifteen");
                }
                else if(unit==6){
                  printf(" sixteen");
                }
                else if(unit==7){
                  printf(" seventeen");
                }
                else if(unit==8){
                  printf(" Eighteen");
                }
                else if(unit==9) {
                  printf(" nineteen");
                }
                else{
                  printf("");
                }
                break;
          case 2:
                 printf("twenty ");
                 if(unit==0){
                   printf("");
                 }
                 else if(unit==1){
                   printf("one");
                 }
                 else if(unit==2){
                   printf("two");
                 }
                 else if(unit==3){
                   printf("three");
                 }
                 else if(unit==4){
                   printf("four");
                 }
                 else if(unit==5){
                   printf("five");
                 }
                 else if(unit==6){
                   printf("six");
                 }
                 else if(unit==7){
                   printf("seven");
                 }
                 else if(unit==8){
                   printf("eight");
                 }
                 else if(unit==9) {
                   printf("nine");
                 }
                 else{
                   printf("");
                 }
                 break;
        case 3:
                 printf("Thirty ");
                 if(unit==0){
                   printf("");
                 }
                 else if(unit==1){
                   printf("one");
                 }
                 else if(unit==2){
                   printf("two");
                 }
                 else if(unit==3){
                   printf("three");
                 }
                 else if(unit==4){
                   printf("four");
                 }
                 else if(unit==5){
                   printf("five");
                 }
                 else if(unit==6){
                   printf("six");
                 }
                 else if(unit==7){
                   printf("seven");
                 }
                 else if(unit==8){
                   printf("eight");
                 }
                 else if(unit==9) {
                   printf("nine");
                 }
                 else{
                   printf("");
                 }
                 break;
          case 4:
                printf("Forty ");
                if(unit==0){
                  printf("");
                }
                else if(unit==1){
                  printf("one");
                }
                else if(unit==2){
                  printf("two");
                }
                else if(unit==3){
                  printf("three");
                }
                else if(unit==4){
                  printf("four");
                }
                else if(unit==5){
                  printf("five");
                }
                else if(unit==6){
                  printf("six");
                }
                else if(unit==7){
                  printf("seven");
                }
                else if(unit==8){
                  printf("eight");
                }
                else if(unit==9) {
                  printf("nine");
                }
                else{
                  printf("");
                }
                break;
          case 5:
                 printf("Fifty ");
                 if(unit==0){
                   printf("");
                 }
                 else if(unit==1){
                   printf("one");
                 }
                 else if(unit==2){
                   printf("two");
                 }
                 else if(unit==3){
                   printf("three");
                 }
                 else if(unit==4){
                   printf("four");
                 }
                 else if(unit==5){
                   printf("five");
                 }
                 else if(unit==6){
                   printf("six");
                 }
                 else if(unit==7){
                   printf("seven");
                 }
                 else if(unit==8){
                   printf("eight");
                 }
                 else if(unit==9) {
                   printf("nine");
                 }
                 else{
                   printf("");
                 }
                 break;
          case 6:
                        printf("Sixty ");
                        if(unit==0){
                          printf("");
                        }
                        else if(unit==1){
                          printf("one");
                        }
                        else if(unit==2){
                          printf("two");
                        }
                        else if(unit==3){
                          printf("three");
                        }
                        else if(unit==4){
                          printf("four");
                        }
                        else if(unit==5){
                          printf("five");
                        }
                        else if(unit==6){
                          printf("six");
                        }
                        else if(unit==7){
                          printf("seven");
                        }
                        else if(unit==8){
                          printf("eight");
                        }
                        else if(unit==9) {
                          printf("nine");
                        }
                        else{
                          printf("");
                        }
                        break;
           case 7:
                               printf("Seventy ");
                               if(unit==0){
                                 printf("");
                               }
                               else if(unit==1){
                                 printf("one");
                               }
                               else if(unit==2){
                                 printf("two");
                               }
                               else if(unit==3){
                                 printf("three");
                               }
                               else if(unit==4){
                                 printf("four");
                               }
                               else if(unit==5){
                                 printf("five");
                               }
                               else if(unit==6){
                                 printf("six");
                               }
                               else if(unit==7){
                                 printf("seven");
                               }
                               else if(unit==8){
                                 printf("eight");
                               }
                               else if(unit==9) {
                                 printf("nine");
                               }
                               else{
                                 printf("");
                               }
                               break;
           case 8:
                                      printf("Eighty ");
                                      if(unit==0){
                                        printf("");
                                      }
                                      else if(unit==1){
                                        printf("one");
                                      }
                                      else if(unit==2){
                                        printf("two");
                                      }
                                      else if(unit==3){
                                        printf("three");
                                      }
                                      else if(unit==4){
                                        printf("four");
                                      }
                                      else if(unit==5){
                                        printf("five");
                                      }
                                      else if(unit==6){
                                        printf("six");
                                      }
                                      else if(unit==7){
                                        printf("seven");
                                      }
                                      else if(unit==8){
                                        printf("eight");
                                      }
                                      else if(unit==9) {
                                        printf("nine");
                                      }
                                      else{
                                        printf("");
                                      }
                                      break;
          case 9:
                                             printf("Ninety ");
                                             if(unit==0){
                                               printf("");
                                             }
                                             else if(unit==1){
                                               printf("one");
                                             }
                                             else if(unit==2){
                                               printf("two");
                                             }
                                             else if(unit==3){
                                               printf("three");
                                             }
                                             else if(unit==4){
                                               printf("four");
                                             }
                                             else if(unit==5){
                                               printf("five");
                                             }
                                             else if(unit==6){
                                               printf("six");
                                             }
                                             else if(unit==7){
                                               printf("seven");
                                             }
                                             else if(unit==8){
                                               printf("eight");
                                             }
                                             else if(unit==9) {
                                               printf("nine");
                                             }
                                             else{
                                               printf("");
                                             }
                                             break;

       }
       break;
          break;
}
}
