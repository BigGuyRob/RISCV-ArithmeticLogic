int main()
{
    int r = 5, c = 5, i, j;
    Create a two dimensional array of pointers with size 5 
    int arr = (int)calloc(r, sizeof(int));
    fill each row of the 2d array with 0s
    for (i = 0; i  r; i++)
        arr[i] = (int)calloc(c, sizeof(int);
    Code for printing the 2D array
    for (i = 0; i  r; i++){
        for (j = 0; j  c; j++){
            printf(%d , arr[i][j]);
        }
        printf(n);
    }
    Have to free rows individually 
    for (int i = 0; i  r; i++)
        free(arr[i]);
    Finally free the whole pointer 
    free(arr);
    return 0;
}
