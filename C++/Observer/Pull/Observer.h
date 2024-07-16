class Observer{
    public:
        virtual ~Observer();
        virtual void update()=0;
        virtual void attatch()=0;
        virtual void detatch()=0;
};