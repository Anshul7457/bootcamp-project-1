# Bootcamp-project-1

## IMAGE ROTATION
This is a program which rotates an image(preferably jpeg or jpg format). Written using OpenCV, this program takes input from a user from a file containing the image.The file containing image should be in the same directory as that of code.

## Getting Started
* Simply download the [code.cpp](code.cpp) file found in the [bootcamp-project-1](bootcamp-project-1) directory. Run it using any standard C++ compiler.In case of any errors or compatibility issues,submit an issue in this git.
* Install OpenCV using command pip install OpenCV (if not having OpenCV installed).
* After downloading the code, when the program is running, the user will be prompted to simply enter the angle. As a result two images are displayed as output.One is original image and other is rotated image. Look at the [sample.jpg](sample.jpg) file in the same directory for example of input. 

## How It Works
 I've written a simple algorithm to give an idea of how the program works.
 
 Start
 
1. We start with reading the image.
2. Then user enter the angle by which the image has to be rotated.
3. The program then finds the dimension of image and locate the centre of it. From that centre point the image 
    has to be rotated at the given angle.
4. Then after rotation of that image, two images are shown as output, one is original and other is rotated.

End

## Tools

* VS Code
* OpenCV
