let n, i, divisor = 0;

n = 11;

for (i = 1; i <= n; i++) {
    divisor = divisor + (n % i == 0) * 1;
}
if (divisor == 2) {
    console.log("Prime number: ", n);
}
else {
    console.log("not prime number: ", n);
}