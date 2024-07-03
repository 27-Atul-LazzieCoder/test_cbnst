int main() {
    float x0, xn, h, y1, value, integral, addition_of_other = 0, xnew, sum;
    int i, n;
    printf("enter the value x0:");
    scanf("%f", &x0);
    printf("enter the value xn :");
    scanf("%f", &xn);
    printf("enter the value n:");
    scanf("%d", &n);
    
    h = (xn - x0) / n;
    printf("%f", h);
    sum = y(x0) + y(xn);
    xnew = x0;
    for(i = 1; i < n; i++) {
        xnew = xnew + h;
        printf("\nx%d:%f", i + 1, xnew);
        y1 = y(xnew);
        addition_of_other = addition_of_other + y1;
        printf("\nAddition after %d:%f", i + 1, addition_of_other);
    }
    value = sum + 2 * addition_of_other;
    integral = (h * value) / 2;
    printf("%f", integral);
    return 0;
}
