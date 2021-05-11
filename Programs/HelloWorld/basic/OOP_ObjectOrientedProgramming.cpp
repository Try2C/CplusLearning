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
};

int main()
{
    YouTubeChannel ytChannel;
    ytChannel.Name = "Try2C";
    ytChannel.OwnerName = "Try2C";
    ytChannel.SubscribersCount = 100;
    ytChannel.PublishedVideoTitles = {"exicises", "beginners", "test"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "Ownername: " << ytChannel.OwnerName << endl;
    cout << "SubscriberCount" << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTile : ytChannel.PublishedVideoTitles)
    {
        cout << videoTile << endl;
    }
}
