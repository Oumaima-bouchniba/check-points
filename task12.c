ALGORITHM Task12

 n: 3;
 
 
// Function that return
// dot product of two vector array.
int dotProduct(int vect_A[], int vect_B[])
{
 
    int product = 0;
 
    // Loop for calculate dot product
    for (int i = 0; i < n; i++)
 
        product = product + vect_A[i] * vect_B[i];
    return product;
}


 
// Driver function
int main()
{
 
    int vect_A[] = { 3, -5, 4 };
    int vect_B[] = { 2, 6, 5 };
    
 
    // dotProduct function call
    cout << "Dot product:";
    cout << dotProduct(vect_A, vect_B) << endl;
 
  
 
    
}