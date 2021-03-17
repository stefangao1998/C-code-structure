huawei.notes.c


#include <stdio.h>
#define MAXNUM 50	// define方式

int main() {
    int input;
    while (scanf("%d", &input)!=EOF) {	// 输入到没有输入为止
        if (input==1||input==2) { 
            printf("-1\n");
        } 
    }
}

int num = sub[i]-'0' // sub[i] = '7' => 7 

while (~scanf("%d%d", &m, &n)) 	// ~ === !=EOF

int mask = 0x0001;	// 0000 0000 0000 0001
if (n & mask) 		// binary check SINGLE &

float input;
scanf("%f", &input);	// float print
int output;
output = (int)(input * 10);	//强制类型转换
output = output/10 + (output%10 >= 5);	// %余数，/除数



#include <stdlib.h>
char input[MAXLEN];
gets(input);	//获取输入
int len = strlen(input);	// 计算string长度，需要stdlib


while (input) {
    if (input&1) count++;	// 二进制 比较
    input = input >> 1;		// 二进制位数移动 E.g. 5 >> 1 == 101 >> 1 == 10 == 2
}							//					5 << 1 == 101 << 1 == 1010 == 10

perfect number = 6, 28, 496, 8128;


char s[1000];
while (gets(s)) {	// 获取 string 推荐

char s1[100], s2[100];
while (~scanf("%s%s", &s1, &s2)) {	// 获取string

if (s[i]>='A' && s[i]<='Z') count++;
if (s[i]>=0x21&&s[i]<=0x2F)

int cal(int i, int j, char *s1, char *s2) {		// function
int res = cal(i, j, s1, s2);					// cal that function

char str1[20]; 
char str2[25];
strcpy(str2, "welcome to beginnersbook.com");	// strcpy
strncpy(str1, str2, 7);
if (strchr(noDupKey, upperKey[j]) == NULL)		// strchr searhc position/ check exist

// sort array
for(int j=0;j<len-1;j++) {
    for(int k=0;k<len-1-j;k++) {
        if(strcmp(list[k],list[k+1])>0) {
            strcpy(tmp,list[k+1]);
            strcpy(list[k+1],list[k]);
            strcpy(list[k],tmp);
        }
    }
}

// arr length !!DANGEROUS!!
int len = sizeof(a)/sizeof(a[0]);

// power || pow() <math.h>
int power16(int index) {
    int res=1;
    for (int i=0; i<index; i++) res=res*16;
    return res;
}

// C substring function definition
substring(s, sub, start, length);	// 从1开始

void substring(char [], char[], int, int);	
void substring(char s[], char sub[], int start, int length) {
   int i = 0;
   while (i < length) {
      sub[i] = s[start+i-1];
      i++;
   }
   sub[i] = '\0';
}
// dfs
int dfs(int n, int m) {
    if (!m||!n) return 1;
    else return dfs(m-1, n) + dfs(m, n-1);
}


// prime factor
int main() {
    long n;
    while (~scanf("%ld", &n)) {
        while (n%2 == 0) { 
            printf("%d ", 2); 
            n = n / 2; 
        } 
        for (int i = 3; i <= sqrt(n); i = i+2) { 
            while (n%i == 0) { 
                printf("%d ", i); 
                n = n / i; 
            } 
        } 
        if (n > 2) printf ("%d ", n);
    }
}

// isPrime 
int is_prime(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

<ctype.h>
isalpha()	//1 upper, 2lower, c not
isdigit()	//>0 num, 0 not
islower()	//>0 num, 0 not
isupper()
tolower()
toupper()


while True:
    try:
        print(int(input())+int(input()))
    except:
        break


import re
while True:
    try:
        a = raw_input().strip()
        b = raw_input().strip()
        a = a.replace('*','[1-9a-zA-Z]*').replace('?','.')                                                   
        c = re.findall(a,b)
        c = ''.join(c)
        if c == b:
            print 'true'
        else:
            print 'false'
    except:
        break





