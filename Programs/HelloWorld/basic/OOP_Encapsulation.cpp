#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

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
    {if(SubscribersCount>0)
        SubscribersCount--;
    }
    void PublishedVideo(string title){
        PublishedVideoTitles.push_back(title);
    }
};

int main()
{
    YouTubeChannel ytChannel("Try2C's", "Try2C");
    ytChannel.PublishedVideo("exicises");
    ytChannel.PublishedVideo("beginners");
    ytChannel.PublishedVideo("test");
    //  ytChannel.Subscribe();
    // ytChannel.Subscribe();
    // ytChannel.Subscribe();
    ytChannel.Unsubscribe();

    ytChannel.GetInfo();
    YouTubeChannel ytChannel2("Honey's", "Honey");

    ytChannel2.GetInfo();

    // ytChannel2.PublishedVideoTitles = {"songs", "films", "something"};
}
