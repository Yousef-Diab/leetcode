class UndergroundSystem {
public:
    UndergroundSystem() {

    }
    unordered_map<int, pair<string, int>>in;
    unordered_map<string, pair<int, int>>out;
        void checkIn(int id, string stationName, int t) {
            in[id] = { stationName,t };
        }
    void checkOut(int id, string stationName, int t) {
        string route = in[id].first + "_" + stationName;
        int temp = in[id].second;
        out[route] = { out[route].first+(t - temp) ,out[route].second+1};
    }

    double getAverageTime(string startStation, string endStation) {
        string s = startStation + "_" + endStation;
        return out[s].first*1.0 / out[s].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */