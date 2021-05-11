#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

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
};

int main()
{
    YouTubeChannel ytChannel("Try2C's", "Try2C");
    ytChannel.PublishedVideoTitles.push_back("exicises");
    ytChannel.PublishedVideoTitles.push_back("beginners");
    ytChannel.PublishedVideoTitles.push_back("test");

    ytChannel.GetInfo();
    YouTubeChannel ytChannel2("Honey's", "Honey");

    ytChannel2.GetInfo();

    // ytChannel2.PublishedVideoTitles = {"songs", "films", "something"};
}
