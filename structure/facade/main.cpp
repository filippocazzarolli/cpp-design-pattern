#include "es1.cpp"


namespace CppDesignPattern::Structure::Facade {

    namespace {
        void es1() {
            Es1::FacilitiesFacade facilities;

            facilities.submitNetworkRequest();
            /* Keep checking until job is complete */
            while (!facilities.checkOnStatus());
            cout << "job completed after only " << facilities.getNumberOfCalls() <<
                 " phone calls" << endl;
        }
    }

    void main() {
        es1();
    }

}