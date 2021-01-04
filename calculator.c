int main(void){
    //calculator
    int a,b;
    int result;
    char c;

    printf("enter the formula:");
    scanf_s("%d" "%s" "%d", &a,&c,1,&b);

    switch (c)
    {
    case '+':
        result=a+b;
        break;
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
        break;
    case '/':
        result=a/b;
        break;
    default:
        break;
    }

    printf("result: %d",result);

}