#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName; //could also be used by derived class

public:
    YouTubeChannel(string name, string onwerName)
    {
        Name = name;
        OwnerName = onwerName;
        SubscribersCount = 0;
    }
    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Ownername: " << OwnerName << endl;
        cout << "SubscriberCount " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }
    void Subscribe()
    {
        SubscribersCount++;
    }
    void Unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }
    void PublishedVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }
};

class CookingYouTubeChannel : public YouTubeChannel //to inheritance all of the class of class YoutubeChannel(base class)， CookingYouTubeChannel is called derived class
{
public:
    CookingYouTubeChannel(string name, string ownername) : YouTubeChannel(name, ownername) {}
    void Practice()
    {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices " << endl;//OwnerName should be defined as procted in base class
    };
};
int main()
{

    CookingYouTubeChannel cookingytChannel("Amy's Kitchen", "Amy");
    CookingYouTubeChannel cookingytChannel2("Tom's Kitchen", "Tom");

    cookingytChannel.PublishedVideo("Apple Pie");
    cookingytChannel.PublishedVideo("cakes");
    cookingytChannel.Subscribe();
    cookingytChannel.Subscribe();
    cookingytChannel.GetInfo();
    cookingytChannel.Practice();
    cookingytChannel2.Practice();

    // ytChannel2.PublishedVideoTitles = {"songs", "films", "something"};
}
