// C program to Open a File, 
// Copy  it into another , And Close the File 
  
# include <stdio.h> 
# include <string.h> 
   
int main( ) 
{ 
  
    // Declare the file pointer for source file
    FILE *source; 
	
  	// Declare the file pointer for newk file
    FILE *new;
  	
  	// Declare a char to copy data
  	int copy;
  
    // Open the existing file testing.txt using fopen() 
    // in read mode using "r" attribute 
    source = fopen("testing.txt", "r"); 
    
  	// Open the existing file copied.txt using fopen() 
    // in write mode using "w" attribute 
    new = fopen("copied.txt", "w"); 
    
    // Check if this source is null 
    // which maybe if the file does not exist 
    if ( source == NULL ) 
    { 
        printf( "testing.txt file failed to open.");
    } 
    else
    { 
          
        printf("The file is now opened.\n"); 
          
        // copy data from source.txt
        
		copy = fgetc(source);
		//fputc(copy, new);
        
        while(copy != EOF)
        {
        	fputc(copy, new);
        	copy = fgetc(source);
        }
        // Closing the source file using fclose() 
        fclose(source); 
        
        // Closing the new file using fclose() 
        fclose(new);
        
        printf("Data successfully copied in file copied.txt\n"); 
        printf("Both file are now closed."); 
    } 
    return 0;         
}
