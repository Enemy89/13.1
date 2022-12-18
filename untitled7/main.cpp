#include <iostream>
#include <vector>

int main() {

   int n, num, del;
   std::cout<<"Enter size: ";
   std::cin>>n;
    std::vector <int> vec(n);

    for (int i=0; i<n; i++) {
        std::cout<<"Enter number: ";
        std::cin>>num;
        vec[i]=num;
    }
    std::cout<<"Enter delete number: ";
    std::cin>>del;
    for(int i = 1; i < n; ++i)
    {
        int x = vec[i];
        int j;
        for(j = i-1; j >= 0 && vec[j] == del; --j)
            vec[j+1] = vec[j];
        vec[j+1] = x;
    }

    for (int i = 0; i < n; i++) {
        if (vec[i] == del) {
            vec.resize(vec.size() - 1);
        }
    }

    for (int i=0; i<vec.size(); i++) {
        std::cout<<vec[i]<<" ";
    }
}
