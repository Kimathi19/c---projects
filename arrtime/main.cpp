#include <iostream>
#include <fstream>
#include <iomanip>
#include <random>

using namespace std;

int main() {
    int i, j, run = 10;
    double x1, x2, st, awt, pcu, wt = 0, iat = 0, it;
    double mean = 10., sd = 1.5, mue = 9.5, sigma = 1.0;
    double sb = 0., se = 0., cit = 0., cat = 0., cwt = 0.;

    ofstream outfile("output.txt");
    outfile << "\n i r' IAT CAT SB r' ST SE WT IT\n";

    random_device rd;
    mt19937 gen(rd());
    normal_distribution<double> dist1(mean, sd);
    normal_distribution<double> dist2(mue, sigma);

    for (j = 1; j <= run; ++j) {
        x1 = dist1(gen);
        iat = x1;
        cat = cat + iat;

        if (cat <= se) {
            sb = se;
            wt = se - cat;
            cwt = cwt + wt;
        } else {
            sb = cat;
            it = sb - se;
            cit = cit + it;
        }

        x2 = dist2(gen);
        st = x2;
        se = sb + st;

        outfile << j << '\t' << setprecision(4) << x1 << '\t' << setprecision(4) << iat << '\t' << setprecision(4)
                << cat << '\t' << setprecision(4) << sb << '\t' << setprecision(4) << x2 << '\t'
                << setprecision(4) << st << '\t' << setprecision(4) << se << '\t' << setprecision(4)
                << wt << '\t' << setprecision(4) << it << "\n";
    }

    awt = cwt / run;
    pcu = (cat - cit) * 100. / cat;

    outfile << "Average waiting time\n" << awt << "\nPercentage capacity utilization\n" << pcu;

    outfile.close();
    return 0;
}
