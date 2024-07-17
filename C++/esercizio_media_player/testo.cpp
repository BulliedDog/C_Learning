#include<iostream>
class MediaPlayer{
    public:
        virtual void play(std::string videoType, std::string fileName)=0;
};
class AdvancedMediaPlayer{
    public:
        virtual void videoplay(std::string fileName,bool checkDRM)=0;
};
class WMVPlayer:public AdvancedMediaPlayer{
    public:
        virtual void videoplay(std::string fileName,bool checkDRM) override{
            std::cout<<"WMVPlayer Playing..."<<std::endl;
        }
};
class H264Player:public AdvancedMediaPlayer{
    public:
        virtual void videoplay(std::string fileName,bool checkDRM) override{
            std::cout<<"H264Player Playing..."<<std::endl;
        }
};
class VideoPlayer:public MediaPlayer{
    public:
        virtual void play(std::string audioType,std::string fileName) override{
            if(audioType!="avi")
                std::cout<<"Unknown type format: "<<audioType<<std::endl;
            else
                std::cout<<"VideoPlayer Playing AVI..."<<std::endl;
        }
};
int main(){
    VideoPlayer* vp=new VideoPlayer;
    vp->play("avi","test.avi");
    vp->play("wmv","test.wmv");
    vp->play("h264","test.h264");
    return 0;
}