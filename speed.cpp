class TravelLog {
    private:
        int eachTime;
        int distance;

    public:
        TravelLog(): eachTime(0), distance(0) {}

        void addEntry(int speed, int clockTime) {
            eachTime = 
            distance += 
            eachTime = 
        }

        int getTotalMiles() const {
            return distance;
        }

};

int main()
{
    int n, sp, ct, dist;

    while (true) {
        cin >> n;
        if (n == -1) {break;}

        TravelLog trip;

        for (int i=0; i<n; i++) {
            cin >> sp >> ct;   
            trip.addEntry(sp, ct);
        }
        dist = trip.getTotalMiles();

        cout << dist << " miles" << endl;
    }

    return 0;
}
