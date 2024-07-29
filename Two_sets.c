#include <stdio.h>

int find_big(int *a, int a_count) {
    int big = a[0];
    for (int i = 1; i < a_count; i++) {
        if (big < a[i]) {
            big = a[i];
        }
    }
    return big;
}

int getLCM(int a_count, int* a) {
    int big = find_big(a, a_count);
    int flag = 0;
    int LCM;
    int index = 0;
    
    while (1) {
        flag = 0;
        for (index = 0; index < a_count; index++) {
            if (big % a[index] == 0) {
                flag++;
            } else {
                break;
            }
        }
        if (flag == a_count) {
            LCM = big;
            break;
        }
        big++;
    }
    return LCM;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the GCD of an array
int findGCD(int b[], int b_count) {
    int result = b[0];
    for (int i = 1; i < b_count; i++) {
        result = gcd(result, b[i]);
        if (result == 1) {
            return 1; // Early exit if GCD becomes 1
        }
    }
    return result;
}

int getTotalX(int a_count, int* a, int b_count, int* b) {
    int LCM=getLCM(a_count,a);    
    int GCD=findGCD(b,b_count);
    int flag=0,flag2=0;
    //we have calculated the LCM of a array and gcd of b array
    for(int i=1;LCM*i<=GCD;i++)
    {
        for(int j=0;j<b_count;j++)
        {
            if(b[j]%(LCM*i)==0)
            {
                flag++;
                if(flag==b_count)
                {
                    flag2++;
                }
            }
            else{
                break;
            }
        }
        flag=0;
    }
    return flag2;
}

int main()
{
    int a[] = {2, 4};
    int b[] = {16, 32, 96};
    int a_count = sizeof(a) / sizeof(a[0]);
    int b_count = sizeof(b) / sizeof(b[0]);
    int result = getTotalX(a_count, a, b_count, b);
    printf("Total numbers: %d\n", result);
    return 0;
}
