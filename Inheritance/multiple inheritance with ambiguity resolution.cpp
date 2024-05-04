/*Q no. 4. Create a C++ program to exemplify multiple inheritance and ambiguity resolution in a multimedia player hierarchy. Define classes AudioPlayer, VideoPlayer, and MediaPlayer. Both base classes have a shared attribute contentType. Your task is to demonstrate how to handle ambiguity using scope resolution.
AudioPlayer Class:
➢ Base class with contentType attribute and method playAudio() prints "Playing audio content."
VideoPlayer Class:
➢ Base class with contentType attribute and method playVideo() prints "Playing video content."
MediaPlayer Class:
➢ Derived from AudioPlayer and VideoPlayer and method playMedia() prints "Playing media."
Write a program that:
a. Creates a MediaPlayer instance and assigns contentType for audio and video and demonstrates ambiguity resolution with proper method calls.*/

#include <iostream>
using namespace std;

class AudioPlayer
{
protected:
    string Audio;
public:
    void playAudio()
    {
        cout << "Playing audio content named: " << Audio << endl;
    }
    AudioPlayer(string Audio)
    {
        this->Audio = Audio;
    }
};

class VideoPlayer
{
protected:
    string Video;
public:
    void playVideo()
    {
        cout << "Playing video content named: " << Video << endl;
    }
    VideoPlayer(string Video)
    {
        this->Video = Video;
    }
};

class MediaPlayer : public AudioPlayer, public VideoPlayer
{
public:
    void playMedia()
    {
        AudioPlayer::playAudio();
        VideoPlayer::playVideo();
        cout << "Playing media content" << endl;
        //OR
        // cout << "Playing media content" << endl;
    }

    MediaPlayer(string Audio, string Video) : AudioPlayer(Audio), VideoPlayer(Video)
    {
    }
};

int main()
{
    MediaPlayer M("Jay Ram", "Ramayan");
    M.playMedia();
    //OR
    // M.AudioPlayer::playAudio();
    // M.VideoPlayer::playVideo();
    // M.playMedia();
    return 0;
}
