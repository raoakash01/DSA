/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* repeatedNumber(const int* A, int n1, int *len1) {
    // Write your code here
    int *repeated = (int *)malloc(sizeof(int) * 2);
    int hash[100000] = {0};
    for (int i = 0; i < n1; i++)
    {
        hash[A[i]]++;
    }
    for (int i = 0; i < n1; i++)
    {
        if (hash[A[i]] > 1)
        {
            repeated[0] = A[i];
        }
        if (hash[A[i]] == 0)
        {
            repeated[1] = A[i];
        }
    }
    *len1 = 2;
    return repeated;
}

