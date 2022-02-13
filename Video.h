#ifndef Video_h
#define Video_h
#include <string>

using std::string;

class Video
{
   private:
    int views;
    int likes;
    int dislikes;
    int watchtime;
    string genre;
    string title;

   public:
    Video(string title, string genre, int views, int likes, int dislikes, int watchtime)
    {
        this->title = title;
        this->genre = genre;
        this->views = views;
        this->likes = likes;
        this->dislikes = dislikes;
        this->watchtime = watchtime;
    }
    string getTitle() { return title; }
    string getGenre() { return genre; }
    int getViews() { return views; }
    int getLikes() { return likes; }
    int getDislikes() { return dislikes; }
    int getWatchtime() { return watchtime; }
};

#endif