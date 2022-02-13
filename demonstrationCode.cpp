#include <string>
#include <stack>
#include "Video.h"

using std::string;

std::stack<Video> videoStack; // Used to store videos to process using recommender algoritihm.

void setSampleVideos()
{
    // Constructor Template: 
    // Video(string title, string genre, int views, int likes, int dislikes, int watchtime)

    videoStack.emplace(new Video("Cat Slaps Cat!", "Pets & Animals", 985652, 11245, 200, 58));
    videoStack.emplace(new Video("Opposite Day! Dog Slaps Cat!", "Comedy", 985652, 11245, 200, 59));
    videoStack.emplace(new Video("A Day In The Life of Garfield The Cat", "Vlogging", 985652, 11245, 200, 32));
    videoStack.emplace(new Video("How To Do 100 Pull-Ups In a Week!", "Health & Fitness", 985652, 11245, 200, 58));
    videoStack.emplace(new Video("Ben Shapiro Destroys Cat with FACTS AND LOGIC!", "Politics", 985652, 11245, 200, 18));
}



int main(){
    
    return 0;
}