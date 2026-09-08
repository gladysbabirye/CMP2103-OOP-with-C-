#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Structure to represent a point
struct Point {
    double x;
    double y;
};

// Function to calculate distance between two points
double calculateDistance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) +
                pow(p2.y - p1.y, 2));
}

int main() {
    // Buffer center point
    Point center;

    cout << "Enter the coordinates of the buffer center point:\n";
    cout << "X coordinate: ";
    cin >> center.x;

    cout << "Y coordinate: ";
    cin >> center.y;

    // Number of points
    int n;

    cout << "\nEnter the number of points in the set: ";
    cin >> n;

    vector<Point> points(n);

    // Enter coordinates of points
    cout << "\nEnter the coordinates of the points:\n";

    for (int i = 0; i < n; i++) {
        cout << "Point " << i + 1 << " X: ";
        cin >> points[i].x;

        cout << "Point " << i + 1 << " Y: ";
        cin >> points[i].y;
    }

    // Number of buffers
    int numberOfBuffers;

    cout << "\nEnter the number of buffers: ";
    cin >> numberOfBuffers;

    vector<double> buffers(numberOfBuffers);

    // Enter buffer sizes
    cout << "\nEnter the buffer sizes:\n";

    for (int i = 0; i < numberOfBuffers; i++) {
        cout << "Buffer " << i + 1 << " size: ";
        cin >> buffers[i];
    }

    // Display results
    cout << "\n========================================\n";
    cout << "          BUFFER ANALYSIS RESULTS\n";
    cout << "========================================\n";

    for (int i = 0; i < numberOfBuffers; i++) {

        cout << "\nBuffer size: " << buffers[i] << " units\n";
        cout << "Points within the buffer:\n";

        bool found = false;

        for (int j = 0; j < n; j++) {

            double distance = calculateDistance(center, points[j]);

            if (distance <= buffers[i]) {
                cout << "Point " << j + 1
                     << " (" << points[j].x
                     << ", " << points[j].y << ")"
                     << " - Distance = " << distance << "\n";

                found = true;
            }
        }

        if (!found) {
            cout << "No points are within this buffer.\n";
        }
    }

    return 0;
}