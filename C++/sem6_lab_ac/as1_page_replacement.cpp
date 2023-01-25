#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// FCFS function implements the First come first serve disk scheduling
void FCFS(int size, int reqArr[], int head)
{
    int currHead = head;
    int seekDistance = 0;
    cout << "FCFS Algorithm Results\n";
    cout << "\nTotal head movement: " << seekDistance << endl;
    cout << "Disk Sequence: " << head << " (initial head)";

    for (int i = 0; i < size; i++)
    {
        seekDistance += abs(currHead - reqArr[i]);
        currHead = reqArr[i];
        cout << "-->" << reqArr[i];
    }
    

    for (int i = 0; i < 100; i++)
    {
        cout << "*";
    }
    cout << "\n\n";
}

// scan implements the scan disk scheduling
void scan(int size, int reqArr[], int head)
{
    vector<int> left, right, sequence;
    string direction="left";
    int headMovement = 0, currTrack, diskSize=200, initialHead=head;
    cout << "Scan Algorithm Results\n";

    // step 1--> divide the array into left and right
    for (int i = 0; i < size; i++)
    {
        if (reqArr[i] < head)
            left.push_back(reqArr[i]);
        if (reqArr[i] > head)
            right.push_back(reqArr[i]);
    }


    // step 2--> push the extreme values

    if (direction == "left")
        left.push_back(0);
    else if (direction == "right")
        right.push_back(diskSize - 1);

    // step 3--> sort the both arrays
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    // step 4--> start from head and move in a direction and then change the direction when over
    int counter = 2;
    while (counter--)
    {
        if (direction == "left")
        {
            for (int i = left.size() - 1; i >= 0; i--)
            {
                currTrack = left[i];
                sequence.push_back(currTrack);
                int distance = abs(currTrack - head);
                headMovement += distance;
                head = currTrack;
            }
            // reversing the direction
            direction = "right";
        }
        else if (direction == "right")
        {
            for (int i = 0; i < right.size(); i++)
            {
                currTrack = right[i];
                sequence.push_back(currTrack);
                int distance = abs(currTrack - head);
                headMovement += distance;
                head = currTrack;
            }
            // reversing the direction
            direction = "left";
        }
    }

    cout << "Total head movement is " << headMovement << endl;
    cout << "Sequence is " << initialHead<< " (head)";
    for (int i = 0; i < sequence.size(); i++)
    {
        cout << "-->" << sequence[i];
    }
    cout<<"\n";

    for (int i = 0; i < 100; i++)
    {
        cout << "*";
    }
    cout << "\n\n";
}
// scan implements the scan disk scheduling
void look(int size, int reqArr[], int head)
{
    vector<int> left, right, sequence;
    string direction="right";
    int headMovement = 0, currTrack, diskSize=200,initialHead=head;
    cout << "look Algorithm Results\n";

    // step 1--> divide the array into left and right
    for (int i = 0; i < size; i++)
    {
        if (reqArr[i] < head)
            left.push_back(reqArr[i]);
        if (reqArr[i] > head)
            right.push_back(reqArr[i]);
    }

    // step 2--> sort the both arrays
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    // step 3--> start from head and move in a direction and then change the direction when over
    int counter = 2;
    while (counter--)
    {
        if (direction == "left")
        {
            for (int i = left.size() - 1; i >= 0; i--)
            {
                currTrack = left[i];
                sequence.push_back(currTrack);
                int distance = abs(currTrack - head);
                headMovement += distance;
                head = currTrack;
            }
            // reversing the direction
            direction = "right";
        }
        else if (direction == "right")
        {
            for (int i = 0; i < right.size(); i++)
            {
                currTrack = right[i];
                sequence.push_back(currTrack);
                int distance = abs(currTrack - head);
                headMovement += distance;
                head = currTrack;
            }
            // reversing the direction
            direction = "left";
        }
    }

    cout << "Total head movement is " << headMovement << endl;
    cout << "Sequence is " << initialHead << " (head)";
    for (int i = 0; i < sequence.size(); i++)
    {
        cout << "-->" << sequence[i];
    }
    cout<<"\n";
    for (int i = 0; i < 100; i++)
    {
        cout << "*";
    }
}

int main()
{
    int noOfTracks;
    cout << "Enter the no of Tracks \n";
    cin >> noOfTracks;

    // request array
    int reqArr[noOfTracks];
    cout << "Please Enter the request array\n";
    for (int i = 0; i < noOfTracks; i++)
    {
        cin >> reqArr[i];
    }

    // initial head
    int head;
    cout << "Enter the current head\n";
    cin >> head;
    FCFS(noOfTracks, reqArr, head);
    scan(noOfTracks,reqArr,head);
    look(noOfTracks, reqArr, head);
}
