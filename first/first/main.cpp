#include "opencv2/opencv.hpp"
#include <string>

using namespace cv;

int main(int argc, char **argv)
{
    std::string image_name;
    getline(std::cin,image_name);
    Mat image=imread(image_name.c_str(),1);
    if (image.empty()){
        std::cout<<"Fail!"<<std::endl;
        return 0;
    }
    namedWindow(image_name.c_str(),WINDOW_AUTOSIZE);
    imshow(image_name.c_str(),image);

    Mat gray_image;
    cvtColor(image,gray_image,COLOR_BGR2GRAY);

    namedWindow("GRAY_IMAGE",WINDOW_AUTOSIZE);
    imshow("GRAY_IMAGE",gray_image);
    waitKey(0);
    destroyAllWindows();


    return 0;
}
