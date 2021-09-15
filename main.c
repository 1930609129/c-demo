#include <stdio.h>
#include <stdlib.h>

int main1()
{
// ######################
//    printf("Hello world!\n");
//    printf("   /|\n");
//    printf("  / |\n");
//    printf(" /  |\n");
//    printf("/___|\n");
// ######################


// ######################
//    char Name[]="Xu";
//    int Age = 18;
//
//    printf("my name is %s\n",Name);
//    printf("I'm %d year old\n",Age);
//
//    Age = 19;
//    printf("I'm %d year old\n",Age);
// ######################


// ######################
//    double f2 = 3.0;
//    float f1 = 3.0;
//    char str = 'A';
//    char strs[] = "Xu jing zhi";
// ######################


// ######################
//    printf("Hello\"World\n");
//    printf("%s %d %f \n","number",500,2.0354);
//    char Aa = 'a';
//    printf("%c",Aa);
// ######################


// ######################
//    printf("%f\n",8.9+235);
//    printf("%d\n",8/3);
// ######################


// ######################
//    printf("%f\n",pow(3,3));
//    printf("%f\n",sqrt(36));
//    printf("%f\n",ceil(36.1));
//    printf("%f\n",floor(36.9));
// ######################



//    const int num = 5;

// ######################
//    int age;
//    printf("Your Age: ");
//    scanf("%d",&age);
//    printf("age: %d\n",age);

//    double f2;
//    printf("Your Age: ");
//    scanf("%lf",&f2);
//    printf("age: %f\n",f2);

//    char str;
//    printf("Your Age: ");
//    scanf("%c",&str);
//    printf("age: %c\n",str);

//    char name[10];
//    printf("Name:");
//    scanf("%s",name);
//    printf("Your name :%s",name);

//    char name[10];
//    printf("Name:");
//    fgets(name,10,stdin);
//    printf("Your name :%s wo",name);

//    int num1;
//    int num2;
//    printf("number: ");
//    scanf("%d",&num1);
//    printf("number: ");
//    scanf("%d",&num2);
//    printf("add %d",num1+num2);
// ######################


// ######################
//    char color[10];
//    char Num[10];
//    char cele[10];
//    char celel[10];
//    printf("color:");
//    scanf("%s",&color);
//    printf("Num:");
//    scanf("%s",&Num);
//    printf("cele:");
//    scanf("%s%s",&cele,celel);
//
//    printf("%s,%s,%s,%s",color,Num,cele,celel);

// ######################


// ######################

//    int NUM[]={4,8,13,45};
//    NUM[0]=200;
//    printf("%d",NUM[0]);

//    int NUM[10];
//    NUM[0]=200;
//    printf("%d",NUM[0]);
// ######################

    return 0;
}


double f2(double num){
    double result = num*num*num;   // 要放在main()前面
    return result;
}


int main2(){
// ######################

//    sayHi("XU JING zhi",19);
//    sayHi("ZHuzhu",20);

// ######################

// ######################
    printf("%f",f2(10.0));

// ######################
    return 0;
}



void sayHi(char name[],int age){
    printf("Hello %s %d\n",name,age);
}


int max(int num1,int num2,int num3){
    if(num1>=num2 && num1>=num3){
        return num1;
    }

    else if(num2>=num1 && num2>=num3){
        return num2;
    }
    else{
        return num3;
    }
}

int main3(){

    printf("%d",max(5,1,9));
    return 0;
}


int main4(){

    double num1;
    double num2;
    char op;

    printf("number:");
    scanf("%lf",&num1);

    printf("op:");
    scanf(" %c",&op); // c前面要加空格

    printf("number:");
    scanf("%lf",&num2);
    if (op=='+'){
        printf("%f",num1+num2);
    }else if(op=='-'){
        printf("%f",num1-num2);
    }
    else{
        printf("输入错误");
    }

    return  0;
}

int main5(){

    char grade='A';
    switch(grade){
    case 'A':
        printf("A");
        break;
    case 'B':
        printf("B");
        break;
    case 'C':
        printf("C");
        break;
    default:
        printf("默认");
    }

}



struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main6(){

    struct Student stu;

    stu.age=22;
    stu.gpa=3.2;
    strcpy(stu.name,"Xu");
    strcpy(stu.major,"Zhuzhu");
    printf("%s\n",stu.name);

    struct Student stu2;

    stu2.age=22;
    stu2.gpa=3.2;
    strcpy(stu2.name,"Xuiii");
    strcpy(stu2.major,"Zhuzhu");
    printf("%s",stu2.name);


    return 0;
}


int main7(){
    int index=6;

//    while(index<=5){
//        printf("%d\n",index);
//        index++;
//    }

    do {
        printf("%d\n",index);
        index++;
    }
    while(index<=5);
    return 0;

}


int main8(){


    int index=1;
    int pwd;
    char name[10];
    while(index){
        printf("number:");
        scanf("%d",&pwd);
        printf("name");
        scanf("%s",&name);;
        if (strcmp(name,"wo")==0 && pwd==123){
            printf("登录成功\n");
            break;
        }

    }
    return 0;
}


int main9(){

    int Nums[]={4,5,6,7,8};


    int i;
    for(i=0;i<=4;i++){
        printf("%d\n",Nums[i]);
    }

    return 0;
}


int main10(){

    int nums[3][2]={
        {1,2},
        {3,4},
        {5,6}
    };
//
//    int numss[3][2];
//    numss[0][0]=1;
//    printf("%d\n",numss[0][0]);
//    printf("%d\n",nums[0][0]);

    int i,j;
    for(i=1;i<10;i++){
        for(j=1;j<i+1;j++){
            printf("%d * %d = %d   ",i,j,i*j);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}


int main11(){

    int age = 30;
    double gpa = 3.4;
    char grade='A';

    printf("age: %p\ngpa: %p\ngarde: %p",&age,&gpa,&grade);
}


int main12(){
    int age = 30;
    int * pAge = &age;
    double gpa =3.4;
    double * pGpa =&gpa;
    char grade = 'A';
    char * aGrage=&grade;

    printf("%p\n",pAge);
    printf("%p\n",&age);
    printf("%d\n",*pAge);
    printf("%d\n",*&age);

}



int main(){
//    FILE * fpointer = fopen("c.txt","w");
//    fprintf(fpointer,"白嫖资源君\nlsp");

//    FILE * fpointer = fopen("c.txt","a");
//    fprintf(fpointer,"\n白嫖资源君\nlsp");
    char line[255];

    FILE * fpointer = fopen("c.txt","r");

    fgets(line,255,fpointer);
    printf("%s",line);

    fclose(fpointer);
}











