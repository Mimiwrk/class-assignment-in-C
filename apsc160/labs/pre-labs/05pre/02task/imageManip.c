/*
 * Author: Paul Carter
 * Date: October 18, 2009
 * Purpose: A program that performs basic image manipulations on 
 * 24-bit uncompressed .bmp image files.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME_SIZE 25
#define FILE_EXT ".bmp"
#define EXT_LENGTH 4
#define HEADER_SIZE 50
#define RAW_OFFSET_LOC 0x0A
#define RAW_SIZE_LOC 0x22
#define WIDTH_LOC 0x12
#define HEIGHT_LOC 0x16
#define COMPRESSION_LOC 0x1E
#define BIT_DEPTH 24
#define BITS_PER_BYTE 8
#define BYTE_ALIGNMENT 4
#define FALSE 0
#define TRUE 1
#define BLUE 0
#define GREEN 1
#define RED 2
#define FILTER 0
#define BW 1
#define NEGATIVE 2
#define OPERATION 0
#define COLOUR_FILTER 1

/* function prototypes */
int getUserOption(int);
int isValid(int);
void printMenu(int);
void addExtension(char[]);
int readFile(char[], char[], int **, int **, int **, int *, int *);
int writeFile(char[], char[], int *, int *, int *, int, int);
int readRawData(int *, int *, int *, int, int, FILE *);
int readHeader(char[], FILE *);
int isBMP(char[]);
int writeHeader(char[], FILE *);
int writeRawData(int *, int *, int *, int, int, FILE *);
void freeAll(int *, int *, int *);

/* prototypes for functions you will write */
void rgb2grey(int[], int[], int[], int);
void negative(int[], int[], int[], int);
void filterByChannel(int[], int[], int[], int, int);
int getMax(int, int, int);

/* image manipulation functions start here */

/*
 * Creates a colour negative of the image.
 *
 * Param: R - red component of image pixels (stored row by row)
 * Param: G - green component of image pixels (stored row by row)
 * Param: B - blue component of image pixels (stored row by row)
 * Param: imgSize - size of image in pixels
 */
void negative(int R[], int G[], int B[], int imgSize)
{
    /* Your code here */
}

/*
 * Applies a red, green or blue filter to the image.
 *
 * Param: R - red component of image pixels (stored row by row)
 * Param: G - green component of image pixels (stored row by row)
 * Param: B - blue component of image pixels (stored row by row)
 * Param: imgSize - size of image in pixels
 * Param: filterColour - one of RED, GREEN or BLUE to specify colour of filter
 */
void filterByChannel(int R[], int G[], int B[], int imgSize, int filterColour)
{
    /* Your code here */
}

/* 
 * Converts image to grey scale
 *
 * Param: R - red component of image pixels (stored row by row)
 * Param: G - green component of image pixels (stored row by row)
 * Param: B - blue component of image pixels (stored row by row)
 * Param: imgSize - size of image in pixels
 */
void rgb2grey(int R[], int G[], int B[], int imgSize)
{
    /* Your code here */
}

/* 
 * Computes the maximum of the values passed as parameters
 * Param: num1, num2, num3: values whose max we wish to compute
 * Return: maximum of num1, num2, num3
 */
int getMax(int num1, int num2, int num3)
{
    return 0;
}

/* end of image manipulation functions */

/* *** WARNING - DO NOT MODIFY ANY OF THE CODE BELOW *** */

/* *** NOTE - YOU ARE NOT EXPECTED TO UNDERSTAND THE CODE BELOW *** */

int main(void)
{
    char header[HEADER_SIZE];
    char inFileName[FILE_NAME_SIZE];
    char outFileName[FILE_NAME_SIZE];
    int *red = NULL;
    int *green = NULL;
    int *blue = NULL;
    int userOption;
    int colour;
    int imgSize;
    int imgWidth;
    int imgHeight;

    printf("Enter name of file to open:\n");
    printf("(no spaces and no more than %d chars including .bmp extension):\n",
           FILE_NAME_SIZE - 1);
    scanf("%s", inFileName);

    inFileName[FILE_NAME_SIZE - EXT_LENGTH - 1] = '\0'; /* in case user entered too many characters */

    if (readFile(inFileName, header, &red, &green, &blue, &imgWidth, &imgHeight))
    {
        imgSize = imgWidth * imgHeight;

        userOption = getUserOption(OPERATION);

        if (userOption == FILTER)
            colour = getUserOption(COLOUR_FILTER);

        if (userOption == BW)
            rgb2grey(red, green, blue, imgSize);
        else if (userOption == NEGATIVE)
            negative(red, green, blue, imgSize);
        else
            filterByChannel(red, green, blue, imgSize, colour);

        printf("Enter name of file for modified image\n");
        printf("(no spaces and no more than %d chars - do not include .bmp extension):\n",
               FILE_NAME_SIZE - EXT_LENGTH - 1);
        scanf("%s", outFileName);

        outFileName[FILE_NAME_SIZE - EXT_LENGTH - 1] = '\0'; /* in case user entered too many characters */
        addExtension(outFileName);

        if (!writeFile(outFileName, header, red, green, blue, imgSize, imgWidth))
            printf("Unable to save image to file %s\n", outFileName);
        else
            printf("Modified image saved to file: %s\n", outFileName);

        freeAll(red, green, blue);
    }
    else
        printf("Error opening or reading file!\n");

    system("PAUSE");
    return 0;
}

/*
 * Provides the user with a menu and returns user's choice.
 * Rejects selections that are not valid.
 * Param: whichOption - one of OPERATION (to choose which
 * an image transformation) or FILTER (to choose a filter colour)
 * Return: user's selection
 */
int getUserOption(int whichOption)
{
    int userOption;

    printMenu(whichOption);
    scanf("%d", &userOption);

    while (!isValid(userOption))
    {
        printf("\nError: choice not valid!\n\n");
        printMenu(whichOption);
        scanf("%d", &userOption);
    }

    return userOption;
}

/*
 * Checks validity of user's choice.  
 * Note: we get away with a function that takes only one parameter
 * because all menus currently have the same choices: 0, 1 or 2.  
 * Param: userOption - option selected by user
 * Return: true if userOption is a valid choice, false otherwise 
 */
int isValid(int userOption)
{
    return (userOption >= 0 && userOption <= 2);
}

/*
 * Prints a menu of options for the user
 * Param: whichMenu - currently one of OPERATION or COLOUR_FILTER
 */
void printMenu(int whichMenu)
{
    printf("Please choose one of the following options: \n");

    if (whichMenu == OPERATION)
    {
        printf("    %d to apply a colour filter\n", FILTER);
        printf("    %d to convert to black and white\n", BW);
        printf("    %d to create colour negative\n", NEGATIVE);
    }
    else
    {
        printf("    %d to apply a blue filter\n", BLUE);
        printf("    %d to apply a green filtere\n", GREEN);
        printf("    %d to apply a red filter\n", RED);
    }
}

/* 
 * Adds .bmp extension to file name 
 * Param: fileName - name of file
 */
void addExtension(char fileName[])
{
    int index = 0;
    char extension[] = FILE_EXT;
    int extIndex = 0;

    while (index < FILE_NAME_SIZE && fileName[index] != '\0')
        index++;

    while (extIndex < EXT_LENGTH)
    {
        fileName[index++] = extension[extIndex++];
    }

    fileName[index] = '\0';
}

/*
 * Reads header information and red/green/blue components of each pixel in image
 * Param: header - will contain file header information at end of function call
 * Param: red - address of array that will contain red component of image pixels at end of function call
 * Param: green - address of array that will contain green component of image pixels at end of function call
 * Param: blue - address of array that will contain blue component of image pixels at end of function call
 * Param: imgWidth - address of int that will store width of image in pixels
 * Param: imgHeight - address of int that will store height of image in pixels
 * Return: TRUE if uncompressed bmp image of size WIDTH by HEIGHT is read from file, FALSE otherwise
 */
int readFile(char inFileName[], char header[],
             int **red, int **green, int **blue, int *imgWidth, int *imgHeight)
{
    FILE *inFile;
    int bytesRead;
    int rawOffset;
    int compression;
    int imgSize;

    inFile = fopen(inFileName, "rb");
    if (inFile != NULL)
    {
        bytesRead = readHeader(header, inFile);
        //printf( "%d bytes read to header\n", bytesRead );

        /* check magic number corresponds to BMP file */
        if (!isBMP(header))
            return FALSE;

        rawOffset = *((int *)(header + RAW_OFFSET_LOC));
        *imgWidth = abs(*((int *)(header + WIDTH_LOC)));
        *imgHeight = abs(*((int *)(header + HEIGHT_LOC)));
        compression = *((int *)(header + COMPRESSION_LOC));

        if (compression != 0)
            return FALSE;

        imgSize = *imgWidth * *imgHeight;

        // allocate memory for red/green/blue data

        *red = (int *)malloc(imgSize * sizeof(int));
        *green = (int *)malloc(imgSize * sizeof(int));
        *blue = (int *)malloc(imgSize * sizeof(int));

        fseek(inFile, rawOffset, SEEK_SET);
        bytesRead = readRawData(*red, *green, *blue, imgSize, *imgWidth, inFile);
        //printf( "%d bytes of raw data read from file.\n", bytesRead );

        fclose(inFile);
        return TRUE;
    }
    else
        return FALSE;
}

/*
 * Reads header information from file
 * Param: header - will contain file header information at end of function call
 * Param: inFile - pointer to file containing image (assumed to be open for reading in binary mode)
 * Return: number of bytes read
 */
int readHeader(char header[], FILE *inFile)
{
    return fread(header, sizeof(char), HEADER_SIZE, inFile);
}

/*
 * Determines if file has bitmap format by checking magic number in first two bytes
 * - must be 'BM' in first two bytes
 * Param: file header information
 * Return: TRUE if bmp file, FALSE otherwise
 */
int isBMP(char header[])
{
    return (header[0] == 0x42 && header[1] == 0x4D);
}

/* 
 * Reads raw image data into red/green/blue arrays
 * Param: red - array that will contain red component of image pixels (stored row by row) at end of function call
 * Param: green - array that will contain green component of image pixels (stored row by row) at end of function call
 * Param: blue - array that will contain blue component of image pixels (stored row by row) at end of function call
 * Param: imgSize - size of image in pixels
 * Param: imgWidth - width of image in pixels
 * Param: inFile - pointer to file containing image (assumed to be open for reading in binary mode)
 * Return: number of bytes read from file
 */
int readRawData(int *red, int *green, int *blue, int imgSize, int imgWidth, FILE *inFile)
{
    int index;
    int bytesRead = 0;
    int padSize;
    unsigned char buffer[BIT_DEPTH / BITS_PER_BYTE];

    for (index = 0; index < imgSize; index++)
    {
        bytesRead += fread(buffer, sizeof(char), BIT_DEPTH / BITS_PER_BYTE, inFile);
        blue[index] = (unsigned)buffer[BLUE];
        green[index] = (unsigned)buffer[GREEN];
        red[index] = (unsigned)buffer[RED];

        /* check for end of row */
        if (index % imgWidth == imgWidth - 1)
        {
            padSize = (imgWidth * BIT_DEPTH / BITS_PER_BYTE) % BYTE_ALIGNMENT;
            bytesRead += fread(buffer, sizeof(char), padSize, inFile);
        }
    }

    return bytesRead;
}

/*
 * Writes image data to file.
 * Param: fileName - name of file to which image is to be written
 * Param: header - image header information
 * Param: red - array that contains red component of image pixels (stored row by row)
 * Param: green - array that contains green component of image pixels (stored row by row)
 * Param: blue - array that contains blue component of image pixels (stored row by row)
 * Param: imgSize - size of image in pixels
 * Param: imgWidth - width of image in pixels
 * Return: TRUE if image was written to file, FALSE otherwise
 */
int writeFile(char fileName[], char header[], int *red, int *green, int *blue, int imgSize, int imgWidth)
{
    FILE *outFile;
    int bytesWritten;
    int rawOffset;

    outFile = fopen(fileName, "wb");
    if (outFile != NULL)
    {
        bytesWritten = writeHeader(header, outFile);
        //printf( "%d bytes written to header\n", bytesWritten );

        rawOffset = *((int *)(header + RAW_OFFSET_LOC));
        fseek(outFile, rawOffset, SEEK_SET);

        bytesWritten = writeRawData(red, green, blue, imgSize, imgWidth, outFile);
        //printf( "%d bytes of raw data written to file.\n", bytesWritten );
        fclose(outFile);
        return TRUE;
    }
    else
        return FALSE;
}

/*
 * Writes image header information to file 
 * Param: header - image header information
 * Param: outFile - pointer to file to which image is to be written (assumed to be open for writing in binary mode)
 * Return: number of bytes written to file
 */
int writeHeader(char header[], FILE *outFile)
{
    return fwrite(header, sizeof(char), HEADER_SIZE, outFile);
}

/*
 * Writes raw image data to file
 * Param: red - array that contains red component of image pixels (stored row by row)
 * Param: green - array that contains green component of image pixels (stored row by row)
 * Param: blue - array that contains blue component of image pixels (stored row by row)
 * Param: imgSize - size of image in pixels
 * Param: imgWidth - width of image in pixels
 * Param: outFile - pointer to file to which image is to be written (assumed to be open for writing in binary mode)
 * Return: number of bytes written to file
 */
int writeRawData(int *red, int *green, int *blue, int imgSize, int imgWidth, FILE *outFile)
{
    int index;
    int bytesWritten = 0;
    int padSize;
    unsigned char buffer[BIT_DEPTH / BITS_PER_BYTE];

    for (index = 0; index < imgSize; index++)
    {
        buffer[BLUE] = (unsigned char)blue[index];
        buffer[GREEN] = (unsigned char)green[index];
        buffer[RED] = (unsigned char)red[index];

        bytesWritten += fwrite(buffer, sizeof(char), BIT_DEPTH / BITS_PER_BYTE, outFile);

        /* check for end of row */
        if (index % imgWidth == imgWidth - 1)
        {
            padSize = (imgWidth * BIT_DEPTH / BITS_PER_BYTE) % BYTE_ALIGNMENT;
            bytesWritten += fwrite(buffer, sizeof(char), padSize, outFile);
        }
    }

    return bytesWritten;
}

/*
 * Free up memory allocated to red/green/blue arrays.
 * Param: red - red component of image pixels
 * Param: green - green component of image pixels
 * Param: blue - blue component of image pixels
 */
void freeAll(int *red, int *green, int *blue)
{
    free(red);
    free(green);
    free(blue);
}