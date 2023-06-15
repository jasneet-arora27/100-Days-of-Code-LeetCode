class Solution {
public:
    vector<double> convertTemperature(double cel) {
        double kelv, fahr;
        kelv = cel + 273.15;
        fahr = cel * 1.80 + 32.00;

        return {kelv, fahr};
    }
};