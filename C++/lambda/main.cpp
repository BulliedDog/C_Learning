#include<iostream>
#include<vector>
#include<algorithm>
class Prova{
    private:
        std::vector<int> v;
    public:
        explicit Prova(const int n=10, int choice=0){ //costruttore di default
            v.resize(n);
            if(choice==0)
                fill_vector_brutto();
            if(choice==1)
                fill_vector_bello();
        }
        ~Prova(){}
        void fill_vector_brutto(){
            for(int x=0; x<v.size(); x++){
                v[x]=x+1;
            }
        }
        void fill_vector_bello(){
            int x=0;
            std::generate(v.begin(),v.end(),[&x]()->int{
                return x++;
            });
        }
        void print_all() const{
            print_brutto();
            print_bello();
            print_lambda();
        }
        void print_brutto() const{
            for(std::vector<int>::const_iterator it=v.begin();it!=v.end();it++)
                std::cout<<"["<<*it<<"]"; //deferenziazione poiche' puntatore
            std::cout<<std::endl;
        }
        void print_bello() const{
            for(auto& it:v)
                std::cout<<"["<<it<<"]"; //senza derefereziazione perche' riferimento
            std::cout<<std::endl;
        }
        void print_lambda() const{
            for_each(v.begin(),v.end(),[](int val){
                /*val è il valore di ogni elemento perchè il for each glielo mette in pasto alla funzione lambda*/
                std::cout<<"["<<val<<"]";
            });
            std::cout<<std::endl;
        }
};
int main(){
    //lambda expr//
    /*
        [campture_list](parameters)->return_type;
    */
    Prova p(10);
    Prova t(10,1);
    p.print_all();
    t.print_all();
    auto compare = [](int & x, int & y)->bool{
        if(x==y) return true;
        else return false;
    };
    return 0;
}