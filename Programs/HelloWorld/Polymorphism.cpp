#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected: //could also be used by derived class
    string OwnerName;
    int ContentQuality;

public:
    YouTubeChannel(string name, string onwerName)
    {
        Name = name;
        OwnerName = onwerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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
    void CheckAnalytics()
    {
        if (ContentQuality < 5)
            cout << Name << " has had quality content." << endl;
        else
            cout << Name << " has great content." << endl;
    }
};

class CookingYouTubeChannel : public YouTubeChannel //to inheritance all of the class of class YoutubeChannel(base class)， CookingYouTubeChannel is called derived class
{
public:
    CookingYouTubeChannel(string name, string ownername) : YouTubeChannel(name, ownername) {}
    void Practice()
    {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl; //OwnerName should be defined as procted in base class
        ContentQuality++;
    };
};

class SingersYouTubeChannel : public YouTubeChannel //to inheritance all of the class of class YoutubeChannel(base class)， CookingYouTubeChannel is called derived class
{
public:
    SingersYouTubeChannel(string name, string ownername) : YouTubeChannel(name, ownername) {}
    void Practice()
    {
        cout << OwnerName << " is taking singing classes, learing new songs, learning how to dance..." << endl;
        ContentQuality++;
    };
};
int main()
{

    CookingYouTubeChannel cookingytChannel("Amy's Kitchen", "Amy");
    SingersYouTubeChannel singersytChannel("Tom'Sings", "Tom");

    cookingytChannel.PublishedVideo("Apple Pie");
    cookingytChannel.PublishedVideo("cakes");
    cookingytChannel.Subscribe();
    cookingytChannel.Subscribe();
    cookingytChannel.GetInfo();
    cookingytChannel.Practice();
    singersytChannel.Practice();
    singersytChannel.Practice();
    singersytChannel.Practice();
    singersytChannel.Practice();
    singersytChannel.Practice();
    singersytChannel.Practice();


    //Polymorphism:
   /*  cookingytChannel.CheckAnalytics();
    singersytChannel.CheckAnalytics(); */
    //using pointer
    YouTubeChannel *yt1 = &cookingytChannel; //pointer to a derived class
    YouTubeChannel *yt2 = &singersytChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    
}
