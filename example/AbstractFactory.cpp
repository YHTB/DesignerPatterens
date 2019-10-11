
//被创建对象的接口
class AbstractProductA {
    public:
        virtual void interface(void) = 0;
};
class AbstractProductB{
public:
    virtual void interface(void) = 0;
};
//被创建对象的实例
class ProductA : public AbstractProductA {
public:
    virtual void interface(void) override 
    {

    }
};
//创建对象的实例
class ProductB : public AbstractProductB{
    public:
        virtual void interface(void) override 
       {
        
       }

};
//工厂接口
class AbstractFactory {
    public:
        virtual AbstractProductA*  CreateProductA(void)=0;
        virtual AbstractProductB * CreateProductB(void)=0; 
    protected:
        AbstractProductA * pProductA = nullptr;
        AbstractProductB * pProductB = nullptr;
};
//创建工厂的实例
class ConcreteFactory : public AbstractFactory {
    public:
        virtual AbstractProductA * CreateProductA(void) override
        {
            return this->pProductA= new ProductA;
        }
         virtual AbstractProductB * CreateProductB(void) override
        {
            return this->pProductB = new ProductB;
        }
};


//调用者

class client {
public:
    void run(AbstractFactory * pFactory)
    {
        pFactory->CreateProductA()->interface();
        pFactory->CreateProductB()->interface();
    }
};
