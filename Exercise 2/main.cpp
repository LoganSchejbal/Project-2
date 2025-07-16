int main() {
    string path = "/Users/josephmirza/Desktop/output.txt"; // Prints output to my desktop
    ofstream outFile(path);
    if (!outFile) {
        cerr << "Failed to open file at: " << path << endl;
        return 1;
    }

    Circle circle(5, 10, 7.5); // Circle Object
    
    Rectangle rect(10, 20);    // Rectangle Object

    // Output
    outFile << "Circle: \n";
    outFile << "Center: " << circle.getCenterX() << ", " << circle.getCenterY() << "\n";
    outFile << "Area: " << circle.getArea() << "\n\n";

    outFile << "Rectangle: \n";
    outFile << "Width: " << rect.getWidth() << ", Length: " << rect.getLength() << "\n";
    outFile << "Area: " << rect.getArea() << "\n";

    outFile.close();
    cout << "Output created in the: " << path << endl;

    return 0;
}
